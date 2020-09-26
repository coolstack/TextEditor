#include "cxreslistwidget.h"
#include <QTextEdit>
#include <QScrollBar>
#include <QLabel>
#include <QContextMenuEvent>
#include <QMenu>
#include <QMessageBox>
#include <QAction>
#include <QCursor>
#include <QDrag>

#include "cxsmalltext.h"
#define TEXTITEMH 100

CxResListWidget::CxResListWidget(QWidget *parent)
	: QListWidget(parent)
{
	m_isRemoteMode = false ;
	setViewMode(QListView::ListMode) ;
//	setLayoutDirection(Qt::LeftToRight) ;
	setSpacing(5) ;
	setFlow(QListView::TopToBottom) ;
	setDragDropMode(QAbstractItemView::DragDrop) ;
	setDragEnabled(true) ;
	setDefaultDropAction(Qt::MoveAction) ;
	setWrapping(false);
	showDropIndicator() ;
//	setIconSize(QSize(ITEMW,ITEMH)) ;
}

CxResListWidget::~CxResListWidget()
{

}

void CxResListWidget::addImage(QString fileName)
{
	int w = width() ;
	QListWidgetItem* item = new QListWidgetItem ;
	QLabel* lb = new QLabel ;
	lb->resize(w,TEXTITEMH) ;
	lb->setAlignment(Qt::AlignCenter) ;
	lb->setPixmap(QPixmap(fileName).scaled(w,TEXTITEMH,Qt::KeepAspectRatio,Qt::SmoothTransformation)) ;
	addItem(item) ;
	item->setSizeHint(QSize(w,TEXTITEMH)) ;
	setItemWidget(item,lb) ;
	m_contentList << fileName ;
	m_typeList << IMAGETYPE ;
	item->setData(Qt::EditRole,fileName) ;
	item->setData(Qt::EditRole+1,IMAGETYPE) ;
	refresh() ;
}

void CxResListWidget::addText(QString txt)
{
	int w = width() ;
	QListWidgetItem* item = new QListWidgetItem ;
	QLabel* lb = new QLabel ;
	lb->resize(w,TEXTITEMH) ;
//	te->setTextInteractionFlags(Qt::NoTextInteraction) ;
	lb->setAlignment(Qt::AlignCenter) ;
	lb->setFont(QFont("Impact",13)) ;
	lb->setText(txt) ;
	lb->setWordWrap(true) ;
	addItem(item) ;
	item->setSizeHint(QSize(w,TEXTITEMH)) ;
	setItemWidget(item,lb) ;
	m_contentList << txt ;
	m_typeList << TEXTTYPE ;
	item->setData(Qt::EditRole,txt) ;
	item->setData(Qt::EditRole+1,TEXTTYPE) ;
	refresh() ;
}

void CxResListWidget::dropEvent(QDropEvent* event)
{
	QListWidget::dropEvent(event) ;
	refresh() ;
}

void CxResListWidget::contextMenuEvent(QContextMenuEvent *event)
{
	QListWidgetItem*item = itemAt(event->pos()) ;
	if(item)
	{
		QMenu menu ;
		int itemType = item->data(Qt::EditRole+1).toInt() ;
		menu.setFont(QFont("Impact",16)) ;
		QAction* changeAction = NULL ;

		if( itemType == TEXTTYPE ) changeAction = menu.addAction("Change") ;
		QAction* deleteAction = menu.addAction("Delete") ;
		QAction* moveContent = menu.addAction(QString("Move to Content%1").arg(m_index?"+":"-")) ;
		QAction* ret = menu.exec(QCursor::pos()) ;
		if( ret == changeAction && itemType == TEXTTYPE )
		{
			CxSmallText dlg ;
			dlg.setText(item->data(Qt::EditRole).toString()) ;
			if( dlg.exec() == QDialog::Accepted )
			{
				item->setData(Qt::EditRole,dlg.content()) ;
				getLabel(item)->setText(dlg.content()) ;
				refresh() ;
			}
		}
		if( ret == deleteAction )
		{
			takeItem(row(item)) ;
			refresh() ;
		}
		if( ret == moveContent )
		{
			emit __moveContent(m_index,item) ;
			takeItem(row(item)) ;
			refresh() ;
		}
	}
}

QLabel* CxResListWidget::getLabel(QListWidgetItem* item)
{
	return (QLabel*)itemWidget(item) ;
}


void CxResListWidget::refresh()
{
	m_contentList.clear() ;
	m_typeList.clear() ;
	for( int i = 0; i < count(); i++ )
	{
		QListWidgetItem* var = item(i) ;
		m_contentList << var->data(Qt::EditRole).toString() ;
		m_typeList << var->data(Qt::EditRole+1).toInt() ;
		QLabel* lb = getLabel(var) ;
		lb->setStyleSheet(QString("QLabel{background:%1;}QLabel::hover{background:#ababab;}").arg(i%2?"#545454":"#f3f3f3")) ;
	}
	emit __changed(m_index) ;
}

void CxResListWidget::setData( QStringList contentList, QList<int> typeList )
{
	m_contentList = contentList ;
	m_typeList = typeList ;
	clear() ;
	int cnt = m_contentList.count() ;
	m_isRemoteMode = true ;
	for( int i = 0; i < cnt; i++ )
	{
		addText(contentList[i]) ;
	}
	m_isRemoteMode = false ;
}


QMimeData* CxResListWidget::mimeData(const QList<QListWidgetItem *> items) const
{
	QMimeData *md = QListWidget::mimeData(items);
	QStringList texts;
	for(QListWidgetItem *item : selectedItems())
	{
		texts << item->text();
		md->setText(texts.join(QStringLiteral("\n")));
		md->setData("tom_content",item->data(Qt::EditRole).toString().toLatin1()) ;
		md->setData("tom_content_type",item->data(Qt::EditRole+1).toString().toLatin1()) ;
		break ;
	}
	return md;
}


void CxResListWidget::startDrag(Qt::DropActions supportedActions)
{
	QListWidget::startDrag(supportedActions) ;	
	return ;
	/*
	QListWidgetItem* item = currentItem();
	QMimeData* mimeData = new QMimeData;
	QByteArray ba;
	ba = item->text().toLatin1().data();
	mimeData->setData("application/x-item", ba);
	mimeData->setData("tom_content",item->data(Qt::EditRole).toString().toLatin1()) ;
	QDrag* drag = new QDrag(this);
	drag->setMimeData(mimeData);
	if (drag->exec(Qt::MoveAction) == Qt::MoveAction) {
//		delete takeItem(row(item));
//		emit itemDroped();
	}
	*/
}

