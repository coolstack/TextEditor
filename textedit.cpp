#include "textedit.h"
#include <QInputDialog>
#include <QDir>
#include <QScreen>
#include <QDesktopWidget>
#include <QMessageBox>
#include <QObject>
#include <QScrollBar>
TextEdit::TextEdit(QWidget *parent /* = 0 */)
{
	ui.setupUi(this) ;
	initUI() ;
	initConnection() ;
	init() ;
	startBook("SSSS") ;

	addChapter("one") ;
	addChapter("two") ;
	addChapter("three") ;
//	for( int i = 0 ; i < 10; i++ ) addChapter(QString("Chapter%1").arg(i)) ;
//	ui.lw_chapter_list->setCurrentRow(0) ;

	m_textDlg = new CxSmallText ;
	ui.lw_res_1->setIndex(0) ;
	ui.lw_res_2->setIndex(1) ;
}

void TextEdit::initUI()
{	
	QDesktopWidget* myWidget = new QDesktopWidget;
	int w = 6.93*myWidget->logicalDpiX() ;
	int h = 9.84*myWidget->logicalDpiY() ;
	m_pageSize = QSize(w,h) ;
	ui.textEdit->setFixedWidth(w) ;
}

void TextEdit::initConnection()
{
	connect( ui.lw_chapter_list, SIGNAL(__changed()), this, SLOT(onChapterChanged())) ;
	connect( ui.lw_chapter_list, SIGNAL(__preChanged(int,bool)), this, SLOT(onPreChanged(int,bool))) ;
	connect( ui.lw_chapter_list, SIGNAL(__swap(int,int)), this, SLOT(onSwapChapter(int,int)) );
	connect( ui.lw_res_1, SIGNAL(__changed(int)), this, SLOT(onContentChanged(int))) ;
	connect( ui.lw_res_2, SIGNAL(__changed(int)), this, SLOT(onContentChanged(int))) ;
	connect( ui.tb_start, SIGNAL(clicked()), this, SLOT(onStartNewBook()));
	connect( ui.tb_add_chapter, SIGNAL(clicked()), this, SLOT(onAddChapter())) ;
	connect( ui.lw_chapter_list, SIGNAL(__selectChapter(int)), this, SLOT(onSelectChapter(int))) ;
	connect( ui.textEdit, SIGNAL(textChanged()), this, SLOT(onTextChanged())) ;
	connect( ui.textEdit->verticalScrollBar(), SIGNAL(valueChanged(int)), this, SLOT(onSliderValueChanged(int))) ;
	connect( ui.tb_prev_page, SIGNAL(clicked()), this, SLOT(onPrevPage())) ;
	connect( ui.tb_next_page, SIGNAL(clicked()), this, SLOT(onNextPage())) ;
	connect( ui.tb_upload, SIGNAL(clicked()),  this, SLOT(onUploadFile())) ;
	connect( ui.tb_create_text, SIGNAL(clicked()),  this, SLOT(onCreateText())) ;
	connect( ui.tb_res_1, SIGNAL(clicked()),  this, SLOT(onContentPlus())) ;
	connect( ui.tb_res_2, SIGNAL(clicked()),  this, SLOT(onContentMinus())) ;
	connect( ui.tb_undo, SIGNAL(clicked()), this, SLOT(onUndo())) ;
	connect( ui.tb_redo, SIGNAL(clicked()), this, SLOT(onRedo())) ;
	connect( ui.tb_next_chapter, SIGNAL(clicked()), ui.lw_chapter_list, SLOT(onNext())) ;
	connect( ui.tb_prev_chapter, SIGNAL(clicked()), ui.lw_chapter_list, SLOT(onPrevious())) ;

	for( int i = 1; i <= 5; i++ )
	{
		CxPageLabel* lb = (CxPageLabel*)(findChild<QLabel*>(QString("lb_page_%1").arg(i)));
		lb->setIndex(i) ;
		connect( lb, SIGNAL(__movePage(int)), this, SLOT(onMovePage(int))) ;
	}

}

void TextEdit::onAddChapter()
{
	bool ok;
	QString text = QInputDialog::getText(NULL, tr("Create Chapter"),
		tr("Chapter Name:"), QLineEdit::Normal, QDir::home().dirName(), &ok);
	if (ok && !text.isEmpty())
	{
		addChapter(text) ;
	}
}

void TextEdit::addChapter(QString text)
{
	setEditable(true) ;
	m_chapterList << "" ;
	QTextDocument* doc = new QTextDocument ;
	m_docList << doc ;
	//		doc->setTextWidth(m_pageSize.width()) ;
	doc->setDefaultFont(QFont("Arial",11)) ;
	doc->setPageSize(m_pageSize) ;
	ui.lw_chapter_list->addChapter(text) ;
}

void TextEdit::onStartNewBook()
{
	bool ok;
	QString text = QInputDialog::getText(NULL, tr("Create New Book"),
		tr("Book Name:"), QLineEdit::Normal, QDir::home().dirName(), &ok);
	if (ok && !text.isEmpty())
	{
		startBook(text) ; 
	}
}

void TextEdit::startBook(QString str)
{
	m_curBookName = str ;
	init() ;
	ui.w_top->setEnabled(true) ;
	setWindowTitle(m_curBookName) ;
}

void TextEdit::init()
{
	m_chapterList.clear() ;
	setEditable(false) ;
	ui.w_top->setEnabled(false) ;
	m_curChapter = -1 ;
	for( int i = 1; i <= 5; i++ )
	{
		QLabel* lb = findChild<QLabel*>(QString("lb_page_%1").arg(i));
		lb->setVisible(false) ;
	}
	ui.tb_prev_page->setVisible(false) ;
	ui.tb_next_page->setVisible(false) ;
	switchContent(0) ;
}

void TextEdit::setEditable(bool on)
{
	ui.w_pagination->setEnabled(on) ;
	ui.textEdit->setEnabled(on) ;
	ui.w_text_control->setEnabled(on) ;
	ui.w_content->setEnabled(on) ;
}

void TextEdit::onSelectChapter(int id)
{
	m_curChapter = id ;
	ui.textEdit->setDocument(m_docList[id]) ;
	onTextChanged() ;
	ui.lw_res_1->setData(m_contentList[0][id],m_contentTypeList[0][id]) ;
	ui.lw_res_2->setData(m_contentList[1][id],m_contentTypeList[1][id]) ;
}

int TextEdit::getPageCount()
{
	int h = m_docList[m_curChapter]->size().height() ;
	int pg = h/m_pageSize.height() ;
	if( pg*m_pageSize.height() < h ) pg++ ;
	return pg ;
}

void TextEdit::onTextChanged()
{
	int pg = getPageCount() ;
//	QMessageBox::information(NULL,"",QString::number(pg)) ;
	for( int i = 1; i <= 5; i++ )
	{
		QLabel* lb = findChild<QLabel*>(QString("lb_page_%1").arg(i));
		lb->setVisible((pg>=2&&i<=pg)?1:0) ;
	}
	ui.tb_prev_page->setVisible(pg>=2) ;
	ui.tb_next_page->setVisible(pg>=2) ;
}

void TextEdit::onSliderValueChanged(int val)
{
	//944
	val = val + ui.textEdit->verticalScrollBar()->pageStep() ;
	m_curPage = val/m_pageSize.height() ;
	if( m_curPage*m_pageSize.height() <= val ) m_curPage++ ;
	ui.lbl_status->setText(QString("page:%1  %2 (%3) docH:%4").arg(m_curPage).arg(val).arg(ui.textEdit->verticalScrollBar()->maximum()).arg(m_docList[m_curChapter]->size().height())) ;
	for( int i = 1; i <= 5; i++ )
	{
		CxPageLabel* lb = (CxPageLabel*)(findChild<QLabel*>(QString("lb_page_%1").arg(i)));
		lb->setSelected(i==m_curPage) ;
	}
}

void TextEdit::onMovePage(int page)
{
	int totPage = getPageCount() ;
	if( page < 0 || page > totPage ) return ;
	int val = (page-1)*m_pageSize.height() ;
	ui.textEdit->verticalScrollBar()->setValue(val) ;
	ui.tb_prev_page->setEnabled(page>1) ;
	ui.tb_next_page->setEnabled(page<totPage) ;
}

void TextEdit::onPrevPage()
{
	onMovePage(m_curPage-1) ;
}

void TextEdit::onNextPage()
{
	onMovePage(m_curPage+1) ;
}

void TextEdit::onUploadFile()
{

}

void TextEdit::onCreateText()
{
	m_textDlg->setText("") ;
	if(m_textDlg->exec() == QDialog::Accepted)
	{
		QString txt = m_textDlg->form().textEdit->toPlainText() ;
		if( txt.length() == 0 ) return ;
		if( m_curLWTab == 0 )
		{
			ui.lw_res_1->addText(txt) ;
		}
		else{
			ui.lw_res_2->addText(txt) ;
		}
	}
}

void TextEdit::onContentPlus()
{
	switchContent(0) ;
}

void TextEdit::onContentMinus()
{
	switchContent(1) ;
}

void TextEdit::switchContent(int id)
{
	m_curLWTab = id ;
	QStringList wStyle, btnStyle ;
	wStyle << "QWidget{background:#fff200;}" << "QWidget{background:#c3c3c3;}" ;
	btnStyle << "QToolButton{border-style:solid;border-width:1px;border-color:black;}" 
		<< "QToolButton{border-style:solid;border-width:1px;border-color:black;color:#7f7f7f;}" ;
	ui.w_res_1->setStyleSheet(wStyle[id]) ;
	ui.w_res_2->setStyleSheet(wStyle[!id]) ;
	ui.tb_res_1->setStyleSheet(btnStyle[id]) ;
	ui.tb_res_2->setStyleSheet(btnStyle[!id]) ;
	ui.lw_res_1->setVisible(id==0) ;
	ui.lw_res_2->setVisible(id==1) ;
}

void TextEdit::onUndo()
{
}

void TextEdit::onRedo()
{

}

//////////////////////////////////////////////////////////////////////////
void TextEdit::onPdf()
{
	/*
	QPrinter printer(QPrinter::ScreenResolution);
	printer.setPaperSize(QPrinter::A4);
	printer.setOutputFormat(QPrinter::PdfFormat);
	printer.setOutputFileName( fileName );
	// printer.setPageMargins(0.925, 0.8, 0.5, 0.8, QPrinter::Inch);

	QSizeF paperSize;
	paperSize.setWidth(printer.width());
	paperSize.setHeight(printer.height());
	document->setHtml(html);
	document->setPageSize(paperSize); // the document needs a valid PageSize
	document->print(&printer);
	*/
}

void TextEdit::onContentChanged(int id)
{
	if( !id )
	{
		m_contentList[id][m_curChapter] = ui.lw_res_1->contentList() ;
		m_contentTypeList[id][m_curChapter] = ui.lw_res_1->contentTypeList() ;
	}
	else
	{
		m_contentList[id][m_curChapter] = ui.lw_res_2->contentList() ;
		m_contentTypeList[id][m_curChapter] = ui.lw_res_2->contentTypeList() ;
	}
}

void TextEdit::onPreChanged( int id, bool isAdd )
{
	if( isAdd ) {
		QStringList contentList;
		QList<int> typeList ;
		m_contentList[0] << contentList ;
		m_contentTypeList[0] << typeList ;
		m_contentList[1] << contentList ;
		m_contentTypeList[1] << typeList ;
	}
	else
	{
		m_contentList[0].takeAt(id) ;
		m_contentTypeList[0].takeAt(id) ;
		m_contentList[1].takeAt(id) ;
		m_contentTypeList[1].takeAt(id) ;
	}
}

void TextEdit::onSwapChapter(int s, int e)
{
//	QMessageBox::information(NULL,"",QString("%1 %2").arg(s).arg(e)) ;
	m_contentTypeList[0].swap(s,e) ;
	m_contentTypeList[1].swap(s,e) ;
	m_contentList[0].swap(s,e) ;
	m_contentList[1].swap(s,e) ;
}

void TextEdit::onChapterChanged()
{
	m_chapterList = ui.lw_chapter_list->chapterList() ;
	int cnt = m_chapterList.count() ;
	setEnabled(cnt) ;
}