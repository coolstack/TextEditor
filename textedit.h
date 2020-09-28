#ifndef TEXTEDIT_H
#define TEXTEDIT_H

#include <QWidget>
#include "ui_mainwindow.h"
#include "cxsmalltext.h"
#include "cxcolormenu.h"

#include <QMenu>
#include <QAction>
#include <QBasicTimer>

#include "cxpagemenu.h"

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
	void onODT() ;
	void onPrint() ;
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
	void onMoveContent( int index, QListWidgetItem* item ) ;
	void onSave() ;
	void onRequireColorMenu(CxColorWidget* w) ;
	void onCollectAll() ;
	void onAutoSave() ;
	void onShowPageMenu(bool on) ;
	//////////////////////////////////////////////////////////////////////////
	void currentCharFormatChanged(const QTextCharFormat &format);
	void textBold();
	void textUnderline();
	void textItalic();
	void textFamily(const QString &f);
	void textSize(const QString &p);
	void textColor();
	void onTextLeft() ;
	void onTextRight() ;
	void onTextCenter() ;
	void onShowTextFormat() ;
	void onFontSizeIncrease() ;
	void onFontSizeDecrease() ;
	void onTextColorChanged(QColor col) ;
	void onHightlightColorChanged(QColor col) ;
	void onTextBackgroundColorChanged(QColor col) ;
protected:
	void mouseMoveEvent(QMouseEvent *event) ;
	void timerEvent(QTimerEvent* event) ;
private:
	void initUI() ;
	void initConnection() ;
	void init() ;
	void startBook(QString str) ;
	void addChapter(QString text) ;
	void setEditable(bool on);
	void switchContent(int id) ;
	int getPageCount() ; 

	void mergeFormatOnWordOrSelection(const QTextCharFormat &format);
	void fontChanged(const QFont &f);
	void colorChanged(const QColor &c);
	void alignmentChanged(Qt::Alignment a);


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
	bool m_isRemoteTextChange ;
	bool m_isAutoSave ;
	QAction* m_autoSaveAction ;
	QBasicTimer m_timer ;
	CxPageMenu* m_pageMenu ;
};

#endif // TEXTEDIT_H
