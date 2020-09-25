#ifndef TEXTEDIT_H
#define TEXTEDIT_H

#include <QWidget>
#include "ui_mainwindow.h"
#include "cxsmalltext.h"

class TextEdit : public QWidget
{
    Q_OBJECT
public:
    TextEdit(QWidget *parent = 0);
private slots:
	void onStartNewBook() ;
	void onAddChapter() ;
	void onSelectChapter(int) ;
	void onTextChanged() ;
	void onSliderValueChanged(int) ;
	void onPdf() ;
	void onMovePage(int page) ;
	void onPrevPage() ;
	void onNextPage() ;
	void onUploadFile() ;
	void onCreateText() ;
	void onContentPlus() ;
	void onContentMinus() ;
	void onUndo() ;
	void onRedo() ;
	void onChapterChanged() ;
	void onPreChanged( int id, bool isAdd ) ;
	void onContentChanged(int) ;
	void onSwapChapter( int s, int e ) ;
private:
	void initUI() ;
	void initConnection() ;
	void init() ;
	void startBook(QString str) ;
	void addChapter(QString text) ;
	void setEditable(bool on);
	void switchContent(int id) ;
	int getPageCount() ; 
	Ui::Form_MainWindow ui ;
	QString m_curBookName ;
	QList<QString> m_chapterList ;
	QList<QTextDocument*> m_docList ;
	int m_curChapter ;
	int m_curPage, m_curLWTab ;
	QSize m_pageSize ;
	CxSmallText* m_textDlg ;
	QList<QStringList> m_contentList[2] ;
	QList<QList<int>> m_contentTypeList[2] ;
};

#endif // TEXTEDIT_H
