#ifndef CXPAGEMENU_H
#define CXPAGEMENU_H

#include <QWidget>
#include "ui_w_page.h"
#include <QToolButton>

class CxPageMenu : public QWidget
{
	Q_OBJECT

public:
	CxPageMenu(QWidget *parent);
	~CxPageMenu();
	void setCount( int id ) ;
	void setCurrentPage( int id ) ;
signals:
	void __selectPage( int ) ;
private:
	Ui::Form_Page_Menu ui ;	
	QList<QToolButton*> m_btnList ;
};

#endif // CXPAGEMENU_H
