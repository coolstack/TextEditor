#include "cxpagemenu.h"
#define BTNSZ 30
CxPageMenu::CxPageMenu(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this) ;
	setFixedWidth(300) ;
	for( int i = 0; i < 300; i++ )
	{
		QToolButton* bt = new QToolButton(this) ;
		bt->setGeometry((i%10)*BTNSZ,(i/10)*BTNSZ,BTNSZ,BTNSZ) ;
		bt->show() ;
		bt->setText(QString("%1").arg(i+6)) ;
		bt->setStyleSheet("QToolButton{background:none;color:blue;}") ;
		m_btnList << bt ;
	}
}

CxPageMenu::~CxPageMenu()
{
}

void CxPageMenu::setCount( int id )
{

}

void CxPageMenu::setCurrentPage( int id )
{

}
