#include "cxpagelabel.h"
#include <QPainter>

CxPageLabel::CxPageLabel(QWidget *parent)
	: QLabel(parent)
{
	m_isSelected = false ;
}

CxPageLabel::~CxPageLabel()
{

}

void CxPageLabel::setIndex( int id )
{
	m_index = id ;
	repaint() ;
}

void CxPageLabel::paintEvent(QPaintEvent* event)
{
	QPainter painter(this); 
	painter.setPen(Qt::blue) ;
	painter.setFont(QFont("Impact",24)) ;
	painter.drawText(0,0,width(),height(),Qt::AlignCenter,QString("%1").arg(m_index)) ;
	painter.setBrush(Qt::blue) ;
	painter.setPen(Qt::NoPen) ;
	if( m_isSelected ) painter.drawRect(0,height()-5,width(),5) ;
}

void CxPageLabel::mousePressEvent(QMouseEvent *ev)
{
	emit __movePage(m_index) ;
}

void CxPageLabel::setSelected( bool on )
{
	m_isSelected = on ;
	repaint() ;
}