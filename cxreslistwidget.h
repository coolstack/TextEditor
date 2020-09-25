#ifndef CXRESLISTWIDGET_H
#define CXRESLISTWIDGET_H

#include <QListWidget>
#include <QLabel>

#define TEXTTYPE 0
#define IMAGETYPE 1

class CxResListWidget : public QListWidget
{
	Q_OBJECT

public:
	CxResListWidget(QWidget *parent);
	~CxResListWidget();
	void addText(QString txt) ;
	void refresh() ;
	QLabel* getLabel(QListWidgetItem* item) ;
	void setIndex( int id ) { m_index = id ; }
	int index(){ return m_index ;}
	void setData( QStringList contentList, QList<int> typeList ) ;
	QStringList contentList(){ return m_contentList ; }
	QList<int> contentTypeList() { return m_typeList ; }
signals:
	void __changed(int) ;
protected:
	void dropEvent(QDropEvent* event) ;
	void contextMenuEvent(QContextMenuEvent *event) ;
private:
	QStringList m_contentList ;
	QList<int> m_typeList ;
	int m_index ;
	bool m_isRemoteMode ;
};

#endif // CXRESLISTWIDGET_H
