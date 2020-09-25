#ifndef CXPAGELABEL_H
#define CXPAGELABEL_H

#include <QLabel>

class CxPageLabel : public QLabel
{
	Q_OBJECT

public:
	CxPageLabel(QWidget *parent);
	~CxPageLabel();
	void setIndex( int id ) ;
	void setSelected( bool on ) ;
	bool isSelected(){ return m_isSelected ; }
signals:
	void __movePage(int) ;
protected:
	void mousePressEvent(QMouseEvent *ev) ;
	void paintEvent(QPaintEvent* event) ;
private:
	int m_index ;
	bool m_isSelected ;
};

#endif // CXPAGELABEL_H
