/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "cxchapterlist.h"
#include "cxcolorwidget.h"
#include "cxpagelabel.h"
#include "cxreslistwidget.h"
#include "cxtextedit.h"

QT_BEGIN_NAMESPACE

class Ui_Form_MainWindow
{
public:
    QGridLayout *gridLayout;
    QWidget *w_blank;
    QGridLayout *gridLayout_7;
    QLabel *lbl_status;
    QWidget *w_main;
    QGridLayout *gridLayout_5;
    QWidget *widget_6;
    QGridLayout *gridLayout_6;
    QWidget *w_text_control;
    QGridLayout *gridLayout_8;
    QToolButton *tb_center;
    QToolButton *tb_underline;
    QToolButton *tb_left;
    QToolButton *tb_pdf;
    QToolButton *tb_italic;
    QToolButton *tb_print;
    QToolButton *tb_bold;
    QFontComboBox *cb_font;
    QToolButton *tb_right;
    QToolButton *tb_save;
    QToolButton *tb_font_inc;
    QToolButton *tb_undo;
    QComboBox *cb_fontsize;
    QToolButton *tb_redo;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *tb_font_dec;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    CxColorWidget *w_highlightcolor;
    CxColorWidget *w_textcolor;
    CxColorWidget *w_backgroundcolor;
    QWidget *widget_9;
    QGridLayout *gridLayout_12;
    QWidget *widget_10;
    QWidget *widget_4;
    QGridLayout *gridLayout_13;
    QWidget *w_pagination;
    QGridLayout *gridLayout_15;
    CxPageLabel *lb_page_2;
    CxPageLabel *lb_page_3;
    CxPageLabel *lb_page_4;
    QSpacerItem *horizontalSpacer_5;
    CxPageLabel *lb_page_1;
    QToolButton *tb_prev_page;
    QToolButton *tb_next_page;
    QToolButton *tb_show_page;
    CxPageLabel *lb_page_5;
    QWidget *widget_12;
    QGridLayout *gridLayout_14;
    CxTextEdit *textEdit;
    QWidget *w_content;
    QGridLayout *gridLayout_9;
    QWidget *widget;
    QGridLayout *gridLayout_10;
    QToolButton *tb_upload;
    QToolButton *tb_create_text;
    QWidget *widget_2;
    QGridLayout *gridLayout_11;
    QWidget *w_res_1;
    QGridLayout *gridLayout_17;
    QToolButton *tb_res_1;
    QWidget *w_res_2;
    QGridLayout *gridLayout_18;
    QToolButton *tb_res_2;
    QWidget *widget_3;
    QGridLayout *gridLayout_16;
    CxResListWidget *lw_res_1;
    CxResListWidget *lw_res_2;
    QWidget *w_top;
    QGridLayout *gridLayout_2;
    QWidget *widget_5;
    QGridLayout *gridLayout_3;
    QToolButton *tb_menu_file;
    QToolButton *tb_menu_text;
    QSpacerItem *horizontalSpacer;
    QToolButton *tb_add_chapter;
    QWidget *w_chapter_control;
    QGridLayout *gridLayout_4;
    CxChapterList *lw_chapter_list;
    QToolButton *tb_prev_chapter;
    QToolButton *tb_start;
    QToolButton *tb_next_chapter;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *Form_MainWindow)
    {
        if (Form_MainWindow->objectName().isEmpty())
            Form_MainWindow->setObjectName(QStringLiteral("Form_MainWindow"));
        Form_MainWindow->resize(1401, 728);
        Form_MainWindow->setMaximumSize(QSize(11111, 11111));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/icon/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Form_MainWindow->setWindowIcon(icon);
        Form_MainWindow->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background:#c3c3c3;\n"
"}"));
        gridLayout = new QGridLayout(Form_MainWindow);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        w_blank = new QWidget(Form_MainWindow);
        w_blank->setObjectName(QStringLiteral("w_blank"));
        w_blank->setMaximumSize(QSize(16777215, 40));
        w_blank->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background:#c3c3c3;\n"
"}"));
        gridLayout_7 = new QGridLayout(w_blank);
        gridLayout_7->setSpacing(0);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        lbl_status = new QLabel(w_blank);
        lbl_status->setObjectName(QStringLiteral("lbl_status"));
        lbl_status->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(lbl_status, 0, 0, 1, 1);


        gridLayout->addWidget(w_blank, 1, 0, 1, 1);

        w_main = new QWidget(Form_MainWindow);
        w_main->setObjectName(QStringLiteral("w_main"));
        w_main->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background:#c3c3c3;\n"
"}"));
        gridLayout_5 = new QGridLayout(w_main);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        widget_6 = new QWidget(w_main);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        gridLayout_6 = new QGridLayout(widget_6);
        gridLayout_6->setSpacing(0);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        w_text_control = new QWidget(widget_6);
        w_text_control->setObjectName(QStringLiteral("w_text_control"));
        w_text_control->setMaximumSize(QSize(16777215, 40));
        gridLayout_8 = new QGridLayout(w_text_control);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setHorizontalSpacing(5);
        gridLayout_8->setVerticalSpacing(0);
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        tb_center = new QToolButton(w_text_control);
        buttonGroup = new QButtonGroup(Form_MainWindow);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(tb_center);
        tb_center->setObjectName(QStringLiteral("tb_center"));
        tb_center->setMinimumSize(QSize(40, 40));
        tb_center->setMaximumSize(QSize(40, 40));
        tb_center->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:white;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/icon/textcenter.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_center->setIcon(icon1);
        tb_center->setIconSize(QSize(32, 32));
        tb_center->setCheckable(true);

        gridLayout_8->addWidget(tb_center, 0, 11, 1, 1);

        tb_underline = new QToolButton(w_text_control);
        tb_underline->setObjectName(QStringLiteral("tb_underline"));
        tb_underline->setMinimumSize(QSize(40, 40));
        tb_underline->setMaximumSize(QSize(40, 40));
        tb_underline->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:white;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/icon/textunder.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_underline->setIcon(icon2);
        tb_underline->setIconSize(QSize(32, 32));
        tb_underline->setCheckable(true);

        gridLayout_8->addWidget(tb_underline, 0, 9, 1, 1);

        tb_left = new QToolButton(w_text_control);
        buttonGroup->addButton(tb_left);
        tb_left->setObjectName(QStringLiteral("tb_left"));
        tb_left->setMinimumSize(QSize(40, 40));
        tb_left->setMaximumSize(QSize(40, 40));
        tb_left->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:white;\n"
"}"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/res/icon/textleft.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_left->setIcon(icon3);
        tb_left->setIconSize(QSize(32, 32));
        tb_left->setCheckable(true);

        gridLayout_8->addWidget(tb_left, 0, 10, 1, 1);

        tb_pdf = new QToolButton(w_text_control);
        tb_pdf->setObjectName(QStringLiteral("tb_pdf"));
        tb_pdf->setMinimumSize(QSize(40, 40));
        tb_pdf->setMaximumSize(QSize(40, 40));
        tb_pdf->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:white;\n"
"}"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/res/icon/exportpdf.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_pdf->setIcon(icon4);
        tb_pdf->setIconSize(QSize(32, 32));

        gridLayout_8->addWidget(tb_pdf, 0, 18, 1, 1);

        tb_italic = new QToolButton(w_text_control);
        tb_italic->setObjectName(QStringLiteral("tb_italic"));
        tb_italic->setMinimumSize(QSize(40, 40));
        tb_italic->setMaximumSize(QSize(40, 40));
        tb_italic->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:white;\n"
"}"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/res/icon/textitalic.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_italic->setIcon(icon5);
        tb_italic->setIconSize(QSize(32, 32));
        tb_italic->setCheckable(true);

        gridLayout_8->addWidget(tb_italic, 0, 8, 1, 1);

        tb_print = new QToolButton(w_text_control);
        tb_print->setObjectName(QStringLiteral("tb_print"));
        tb_print->setMinimumSize(QSize(40, 40));
        tb_print->setMaximumSize(QSize(40, 40));
        tb_print->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:white;\n"
"}"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/res/icon/fileprint.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_print->setIcon(icon6);
        tb_print->setIconSize(QSize(32, 32));

        gridLayout_8->addWidget(tb_print, 0, 19, 1, 1);

        tb_bold = new QToolButton(w_text_control);
        tb_bold->setObjectName(QStringLiteral("tb_bold"));
        tb_bold->setMinimumSize(QSize(40, 40));
        tb_bold->setMaximumSize(QSize(40, 40));
        tb_bold->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:white;\n"
"}"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/res/icon/textbold.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_bold->setIcon(icon7);
        tb_bold->setIconSize(QSize(32, 32));
        tb_bold->setCheckable(true);

        gridLayout_8->addWidget(tb_bold, 0, 7, 1, 1);

        cb_font = new QFontComboBox(w_text_control);
        cb_font->setObjectName(QStringLiteral("cb_font"));
        cb_font->setMinimumSize(QSize(0, 40));
        cb_font->setMaximumSize(QSize(16777215, 40));
        cb_font->setStyleSheet(QLatin1String("QFontComboBox\n"
"{\n"
"background:white;\n"
"}"));

        gridLayout_8->addWidget(cb_font, 0, 2, 1, 1);

        tb_right = new QToolButton(w_text_control);
        buttonGroup->addButton(tb_right);
        tb_right->setObjectName(QStringLiteral("tb_right"));
        tb_right->setMinimumSize(QSize(40, 40));
        tb_right->setMaximumSize(QSize(40, 40));
        tb_right->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:white;\n"
"}"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/res/icon/textright.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_right->setIcon(icon8);
        tb_right->setIconSize(QSize(32, 32));
        tb_right->setCheckable(true);

        gridLayout_8->addWidget(tb_right, 0, 12, 1, 1);

        tb_save = new QToolButton(w_text_control);
        tb_save->setObjectName(QStringLiteral("tb_save"));
        tb_save->setMinimumSize(QSize(40, 40));
        tb_save->setMaximumSize(QSize(40, 40));
        tb_save->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:white;\n"
"}"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/res/icon/filesave.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_save->setIcon(icon9);
        tb_save->setIconSize(QSize(32, 32));

        gridLayout_8->addWidget(tb_save, 0, 20, 1, 1);

        tb_font_inc = new QToolButton(w_text_control);
        tb_font_inc->setObjectName(QStringLiteral("tb_font_inc"));
        tb_font_inc->setMinimumSize(QSize(40, 40));
        tb_font_inc->setMaximumSize(QSize(40, 40));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        tb_font_inc->setFont(font);
        tb_font_inc->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:white;\n"
"}"));

        gridLayout_8->addWidget(tb_font_inc, 0, 4, 1, 1);

        tb_undo = new QToolButton(w_text_control);
        tb_undo->setObjectName(QStringLiteral("tb_undo"));
        tb_undo->setMinimumSize(QSize(40, 40));
        tb_undo->setMaximumSize(QSize(40, 40));
        tb_undo->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:white;\n"
"}"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/res/icon/editundo.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_undo->setIcon(icon10);
        tb_undo->setIconSize(QSize(32, 32));

        gridLayout_8->addWidget(tb_undo, 0, 0, 1, 1);

        cb_fontsize = new QComboBox(w_text_control);
        cb_fontsize->setObjectName(QStringLiteral("cb_fontsize"));
        cb_fontsize->setMinimumSize(QSize(0, 40));
        cb_fontsize->setMaximumSize(QSize(60, 40));
        cb_fontsize->setStyleSheet(QLatin1String("QComboBox\n"
"{\n"
"background:white;\n"
"}"));

        gridLayout_8->addWidget(cb_fontsize, 0, 3, 1, 1);

        tb_redo = new QToolButton(w_text_control);
        tb_redo->setObjectName(QStringLiteral("tb_redo"));
        tb_redo->setMinimumSize(QSize(40, 40));
        tb_redo->setMaximumSize(QSize(40, 40));
        tb_redo->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:white;\n"
"}"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/res/icon/editredo.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_redo->setIcon(icon11);
        tb_redo->setIconSize(QSize(32, 32));

        gridLayout_8->addWidget(tb_redo, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_3, 0, 13, 1, 1);

        tb_font_dec = new QToolButton(w_text_control);
        tb_font_dec->setObjectName(QStringLiteral("tb_font_dec"));
        tb_font_dec->setMinimumSize(QSize(40, 40));
        tb_font_dec->setMaximumSize(QSize(40, 40));
        tb_font_dec->setFont(font);
        tb_font_dec->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:white;\n"
"}"));

        gridLayout_8->addWidget(tb_font_dec, 0, 5, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_2, 0, 17, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_4, 0, 6, 1, 1);

        w_highlightcolor = new CxColorWidget(w_text_control);
        w_highlightcolor->setObjectName(QStringLiteral("w_highlightcolor"));
        w_highlightcolor->setMinimumSize(QSize(45, 0));
        w_highlightcolor->setMaximumSize(QSize(45, 16777215));

        gridLayout_8->addWidget(w_highlightcolor, 0, 15, 1, 1);

        w_textcolor = new CxColorWidget(w_text_control);
        w_textcolor->setObjectName(QStringLiteral("w_textcolor"));
        w_textcolor->setMinimumSize(QSize(45, 0));
        w_textcolor->setMaximumSize(QSize(45, 16777215));

        gridLayout_8->addWidget(w_textcolor, 0, 14, 1, 1);

        w_backgroundcolor = new CxColorWidget(w_text_control);
        w_backgroundcolor->setObjectName(QStringLiteral("w_backgroundcolor"));
        w_backgroundcolor->setMinimumSize(QSize(45, 0));
        w_backgroundcolor->setMaximumSize(QSize(45, 16777215));

        gridLayout_8->addWidget(w_backgroundcolor, 0, 16, 1, 1);


        gridLayout_6->addWidget(w_text_control, 0, 0, 1, 1);

        widget_9 = new QWidget(widget_6);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        gridLayout_12 = new QGridLayout(widget_9);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        widget_10 = new QWidget(widget_9);
        widget_10->setObjectName(QStringLiteral("widget_10"));
        widget_10->setMinimumSize(QSize(100, 0));
        widget_10->setMaximumSize(QSize(100, 16777215));

        gridLayout_12->addWidget(widget_10, 0, 0, 1, 1);

        widget_4 = new QWidget(widget_9);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background:#ababab;\n"
"}"));
        gridLayout_13 = new QGridLayout(widget_4);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        w_pagination = new QWidget(widget_4);
        w_pagination->setObjectName(QStringLiteral("w_pagination"));
        w_pagination->setMinimumSize(QSize(0, 80));
        w_pagination->setMaximumSize(QSize(16777215, 80));
        w_pagination->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background:white;\n"
"}"));
        gridLayout_15 = new QGridLayout(w_pagination);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        lb_page_2 = new CxPageLabel(w_pagination);
        lb_page_2->setObjectName(QStringLiteral("lb_page_2"));
        lb_page_2->setMinimumSize(QSize(25, 50));
        lb_page_2->setMaximumSize(QSize(25, 50));
        QFont font1;
        font1.setFamily(QStringLiteral("Impact"));
        font1.setPointSize(28);
        lb_page_2->setFont(font1);
        lb_page_2->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(lb_page_2, 0, 2, 1, 1);

        lb_page_3 = new CxPageLabel(w_pagination);
        lb_page_3->setObjectName(QStringLiteral("lb_page_3"));
        lb_page_3->setMinimumSize(QSize(25, 50));
        lb_page_3->setMaximumSize(QSize(25, 50));
        lb_page_3->setFont(font1);
        lb_page_3->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(lb_page_3, 0, 3, 1, 1);

        lb_page_4 = new CxPageLabel(w_pagination);
        lb_page_4->setObjectName(QStringLiteral("lb_page_4"));
        lb_page_4->setMinimumSize(QSize(25, 50));
        lb_page_4->setMaximumSize(QSize(25, 50));
        lb_page_4->setFont(font1);
        lb_page_4->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(lb_page_4, 0, 4, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_15->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        lb_page_1 = new CxPageLabel(w_pagination);
        lb_page_1->setObjectName(QStringLiteral("lb_page_1"));
        lb_page_1->setMinimumSize(QSize(25, 50));
        lb_page_1->setMaximumSize(QSize(25, 50));
        lb_page_1->setFont(font1);
        lb_page_1->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(lb_page_1, 0, 1, 1, 1);

        tb_prev_page = new QToolButton(w_pagination);
        tb_prev_page->setObjectName(QStringLiteral("tb_prev_page"));
        tb_prev_page->setMinimumSize(QSize(30, 50));
        tb_prev_page->setMaximumSize(QSize(30, 50));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/res/icon/Actions-go-previous-view-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_prev_page->setIcon(icon12);
        tb_prev_page->setIconSize(QSize(50, 50));

        gridLayout_15->addWidget(tb_prev_page, 0, 6, 1, 1);

        tb_next_page = new QToolButton(w_pagination);
        tb_next_page->setObjectName(QStringLiteral("tb_next_page"));
        tb_next_page->setMinimumSize(QSize(30, 50));
        tb_next_page->setMaximumSize(QSize(30, 50));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/res/icon/Actions-go-next-view-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_next_page->setIcon(icon13);
        tb_next_page->setIconSize(QSize(100, 100));

        gridLayout_15->addWidget(tb_next_page, 0, 7, 1, 1);

        tb_show_page = new QToolButton(w_pagination);
        tb_show_page->setObjectName(QStringLiteral("tb_show_page"));
        tb_show_page->setEnabled(true);
        tb_show_page->setMinimumSize(QSize(50, 50));
        tb_show_page->setMaximumSize(QSize(50, 50));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/res/icon/more_page_btn_diasbled.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_show_page->setIcon(icon14);
        tb_show_page->setIconSize(QSize(50, 50));

        gridLayout_15->addWidget(tb_show_page, 0, 8, 1, 1);

        lb_page_5 = new CxPageLabel(w_pagination);
        lb_page_5->setObjectName(QStringLiteral("lb_page_5"));
        lb_page_5->setMinimumSize(QSize(25, 50));
        lb_page_5->setMaximumSize(QSize(25, 50));
        lb_page_5->setFont(font1);
        lb_page_5->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(lb_page_5, 0, 5, 1, 1);


        gridLayout_13->addWidget(w_pagination, 0, 0, 1, 1);

        widget_12 = new QWidget(widget_4);
        widget_12->setObjectName(QStringLiteral("widget_12"));
        gridLayout_14 = new QGridLayout(widget_12);
        gridLayout_14->setSpacing(0);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        gridLayout_14->setContentsMargins(0, 0, 0, 0);
        textEdit = new CxTextEdit(widget_12);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);
        textEdit->setStyleSheet(QLatin1String("QTextEdit\n"
"{\n"
"background:white;\n"
"}"));

        gridLayout_14->addWidget(textEdit, 0, 0, 1, 1);


        gridLayout_13->addWidget(widget_12, 1, 0, 1, 1);


        gridLayout_12->addWidget(widget_4, 0, 1, 1, 1);


        gridLayout_6->addWidget(widget_9, 1, 0, 1, 1);


        gridLayout_5->addWidget(widget_6, 0, 0, 1, 1);

        w_content = new QWidget(w_main);
        w_content->setObjectName(QStringLiteral("w_content"));
        w_content->setMinimumSize(QSize(300, 0));
        w_content->setMaximumSize(QSize(300, 16777215));
        gridLayout_9 = new QGridLayout(w_content);
        gridLayout_9->setSpacing(0);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(w_content);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 40));
        widget->setMaximumSize(QSize(16777215, 40));
        gridLayout_10 = new QGridLayout(widget);
        gridLayout_10->setSpacing(0);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        tb_upload = new QToolButton(widget);
        tb_upload->setObjectName(QStringLiteral("tb_upload"));
        sizePolicy.setHeightForWidth(tb_upload->sizePolicy().hasHeightForWidth());
        tb_upload->setSizePolicy(sizePolicy);

        gridLayout_10->addWidget(tb_upload, 0, 0, 1, 1);

        tb_create_text = new QToolButton(widget);
        tb_create_text->setObjectName(QStringLiteral("tb_create_text"));
        sizePolicy.setHeightForWidth(tb_create_text->sizePolicy().hasHeightForWidth());
        tb_create_text->setSizePolicy(sizePolicy);

        gridLayout_10->addWidget(tb_create_text, 0, 1, 1, 1);


        gridLayout_9->addWidget(widget, 0, 0, 1, 1);

        widget_2 = new QWidget(w_content);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(0, 70));
        widget_2->setMaximumSize(QSize(16777215, 70));
        gridLayout_11 = new QGridLayout(widget_2);
        gridLayout_11->setSpacing(0);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        w_res_1 = new QWidget(widget_2);
        w_res_1->setObjectName(QStringLiteral("w_res_1"));
        w_res_1->setStyleSheet(QStringLiteral("QWidget{background:#fff200;}"));
        gridLayout_17 = new QGridLayout(w_res_1);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        gridLayout_17->setContentsMargins(15, 10, 15, 10);
        tb_res_1 = new QToolButton(w_res_1);
        tb_res_1->setObjectName(QStringLiteral("tb_res_1"));
        sizePolicy.setHeightForWidth(tb_res_1->sizePolicy().hasHeightForWidth());
        tb_res_1->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamily(QStringLiteral("Impact"));
        font2.setPointSize(20);
        tb_res_1->setFont(font2);
        tb_res_1->setStyleSheet(QLatin1String("QToolButton{\n"
"border-style:solid;\n"
"border-width:1px;\n"
"border-color:black;\n"
"}"));

        gridLayout_17->addWidget(tb_res_1, 0, 0, 1, 1);


        gridLayout_11->addWidget(w_res_1, 0, 0, 1, 1);

        w_res_2 = new QWidget(widget_2);
        w_res_2->setObjectName(QStringLiteral("w_res_2"));
        gridLayout_18 = new QGridLayout(w_res_2);
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        gridLayout_18->setContentsMargins(15, 10, 15, 10);
        tb_res_2 = new QToolButton(w_res_2);
        tb_res_2->setObjectName(QStringLiteral("tb_res_2"));
        sizePolicy.setHeightForWidth(tb_res_2->sizePolicy().hasHeightForWidth());
        tb_res_2->setSizePolicy(sizePolicy);
        tb_res_2->setFont(font2);
        tb_res_2->setStyleSheet(QLatin1String("QToolButton{\n"
"color:#7f7f7f;\n"
"border-style:solid;\n"
"border-width:1px;\n"
"border-color:black;\n"
"}"));

        gridLayout_18->addWidget(tb_res_2, 0, 0, 1, 1);


        gridLayout_11->addWidget(w_res_2, 0, 1, 1, 1);


        gridLayout_9->addWidget(widget_2, 1, 0, 1, 1);

        widget_3 = new QWidget(w_content);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        gridLayout_16 = new QGridLayout(widget_3);
        gridLayout_16->setSpacing(0);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        gridLayout_16->setContentsMargins(0, 0, 0, 0);
        lw_res_1 = new CxResListWidget(widget_3);
        lw_res_1->setObjectName(QStringLiteral("lw_res_1"));
        sizePolicy.setHeightForWidth(lw_res_1->sizePolicy().hasHeightForWidth());
        lw_res_1->setSizePolicy(sizePolicy);
        lw_res_1->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout_16->addWidget(lw_res_1, 0, 0, 1, 1);

        lw_res_2 = new CxResListWidget(widget_3);
        lw_res_2->setObjectName(QStringLiteral("lw_res_2"));
        sizePolicy.setHeightForWidth(lw_res_2->sizePolicy().hasHeightForWidth());
        lw_res_2->setSizePolicy(sizePolicy);
        lw_res_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout_16->addWidget(lw_res_2, 1, 0, 1, 1);


        gridLayout_9->addWidget(widget_3, 2, 0, 1, 1);


        gridLayout_5->addWidget(w_content, 0, 1, 1, 1);


        gridLayout->addWidget(w_main, 3, 0, 1, 1);

        w_top = new QWidget(Form_MainWindow);
        w_top->setObjectName(QStringLiteral("w_top"));
        w_top->setMinimumSize(QSize(0, 40));
        w_top->setMaximumSize(QSize(16777215, 40));
        w_top->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:#919191;\n"
"}"));
        gridLayout_2 = new QGridLayout(w_top);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_5 = new QWidget(w_top);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setMinimumSize(QSize(140, 40));
        widget_5->setMaximumSize(QSize(16777215, 40));
        widget_5->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"border: 1px solid black;\n"
"}"));
        gridLayout_3 = new QGridLayout(widget_5);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        tb_menu_file = new QToolButton(widget_5);
        tb_menu_file->setObjectName(QStringLiteral("tb_menu_file"));
        sizePolicy.setHeightForWidth(tb_menu_file->sizePolicy().hasHeightForWidth());
        tb_menu_file->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setFamily(QStringLiteral("Impact"));
        font3.setPointSize(14);
        tb_menu_file->setFont(font3);
        tb_menu_file->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"border:0px;\n"
"}"));

        gridLayout_3->addWidget(tb_menu_file, 0, 0, 1, 1);

        tb_menu_text = new QToolButton(widget_5);
        tb_menu_text->setObjectName(QStringLiteral("tb_menu_text"));
        sizePolicy.setHeightForWidth(tb_menu_text->sizePolicy().hasHeightForWidth());
        tb_menu_text->setSizePolicy(sizePolicy);
        tb_menu_text->setFont(font3);
        tb_menu_text->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"border:0px;\n"
"}"));

        gridLayout_3->addWidget(tb_menu_text, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget_5, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 2, 1, 1);

        tb_add_chapter = new QToolButton(w_top);
        tb_add_chapter->setObjectName(QStringLiteral("tb_add_chapter"));
        tb_add_chapter->setMinimumSize(QSize(140, 40));
        tb_add_chapter->setMaximumSize(QSize(16777215, 40));
        tb_add_chapter->setFont(font3);
        tb_add_chapter->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:#fff200;\n"
"}"));

        gridLayout_2->addWidget(tb_add_chapter, 0, 1, 1, 1);


        gridLayout->addWidget(w_top, 0, 0, 1, 1);

        w_chapter_control = new QWidget(Form_MainWindow);
        w_chapter_control->setObjectName(QStringLiteral("w_chapter_control"));
        w_chapter_control->setMaximumSize(QSize(16777215, 60));
        gridLayout_4 = new QGridLayout(w_chapter_control);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        lw_chapter_list = new CxChapterList(w_chapter_control);
        lw_chapter_list->setObjectName(QStringLiteral("lw_chapter_list"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lw_chapter_list->sizePolicy().hasHeightForWidth());
        lw_chapter_list->setSizePolicy(sizePolicy1);
        lw_chapter_list->setMinimumSize(QSize(0, 50));
        lw_chapter_list->setMaximumSize(QSize(16777215, 50));
        lw_chapter_list->setStyleSheet(QLatin1String("QListWidget\n"
"{\n"
"border:none;\n"
"}"));
        lw_chapter_list->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        lw_chapter_list->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout_4->addWidget(lw_chapter_list, 0, 2, 1, 1);

        tb_prev_chapter = new QToolButton(w_chapter_control);
        tb_prev_chapter->setObjectName(QStringLiteral("tb_prev_chapter"));
        tb_prev_chapter->setMinimumSize(QSize(100, 50));
        tb_prev_chapter->setMaximumSize(QSize(16777215, 50));
        tb_prev_chapter->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:#e9e9e9;\n"
"}"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/res/icon/prev.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_prev_chapter->setIcon(icon15);
        tb_prev_chapter->setIconSize(QSize(50, 50));

        gridLayout_4->addWidget(tb_prev_chapter, 0, 0, 1, 1);

        tb_start = new QToolButton(w_chapter_control);
        tb_start->setObjectName(QStringLiteral("tb_start"));
        tb_start->setMinimumSize(QSize(100, 50));
        tb_start->setFont(font2);
        tb_start->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:#fff75b;\n"
"}"));

        gridLayout_4->addWidget(tb_start, 0, 1, 1, 1);

        tb_next_chapter = new QToolButton(w_chapter_control);
        tb_next_chapter->setObjectName(QStringLiteral("tb_next_chapter"));
        tb_next_chapter->setMinimumSize(QSize(100, 50));
        tb_next_chapter->setMaximumSize(QSize(16777215, 50));
        tb_next_chapter->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:#e9e9e9;\n"
"}"));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/res/icon/next.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_next_chapter->setIcon(icon16);
        tb_next_chapter->setIconSize(QSize(50, 50));

        gridLayout_4->addWidget(tb_next_chapter, 0, 3, 1, 1);


        gridLayout->addWidget(w_chapter_control, 2, 0, 1, 1);


        retranslateUi(Form_MainWindow);

        QMetaObject::connectSlotsByName(Form_MainWindow);
    } // setupUi

    void retranslateUi(QWidget *Form_MainWindow)
    {
        Form_MainWindow->setWindowTitle(QApplication::translate("Form_MainWindow", "Form", 0));
        lbl_status->setText(QApplication::translate("Form_MainWindow", "TextLabel", 0));
        tb_center->setText(QApplication::translate("Form_MainWindow", "A-", 0));
        tb_underline->setText(QApplication::translate("Form_MainWindow", "U", 0));
        tb_left->setText(QApplication::translate("Form_MainWindow", "A-", 0));
        tb_pdf->setText(QApplication::translate("Form_MainWindow", "A-", 0));
        tb_italic->setText(QApplication::translate("Form_MainWindow", "I", 0));
        tb_print->setText(QApplication::translate("Form_MainWindow", "A-", 0));
        tb_bold->setText(QApplication::translate("Form_MainWindow", "B", 0));
        tb_right->setText(QApplication::translate("Form_MainWindow", "A-", 0));
        tb_save->setText(QApplication::translate("Form_MainWindow", "A-", 0));
        tb_font_inc->setText(QApplication::translate("Form_MainWindow", "A+", 0));
        tb_undo->setText(QApplication::translate("Form_MainWindow", "...", 0));
        tb_redo->setText(QApplication::translate("Form_MainWindow", "...", 0));
        tb_font_dec->setText(QApplication::translate("Form_MainWindow", "A-", 0));
        lb_page_2->setText(QApplication::translate("Form_MainWindow", "2", 0));
        lb_page_3->setText(QApplication::translate("Form_MainWindow", "3", 0));
        lb_page_4->setText(QApplication::translate("Form_MainWindow", "4", 0));
        lb_page_1->setText(QApplication::translate("Form_MainWindow", "1", 0));
        tb_prev_page->setText(QApplication::translate("Form_MainWindow", "...", 0));
        tb_next_page->setText(QApplication::translate("Form_MainWindow", "...", 0));
        tb_show_page->setText(QApplication::translate("Form_MainWindow", "...", 0));
        lb_page_5->setText(QApplication::translate("Form_MainWindow", "5", 0));
        tb_upload->setText(QApplication::translate("Form_MainWindow", "UPLOAD FILE", 0));
        tb_create_text->setText(QApplication::translate("Form_MainWindow", "CREATE TEXT", 0));
        tb_res_1->setText(QApplication::translate("Form_MainWindow", "CONTENT+", 0));
        tb_res_2->setText(QApplication::translate("Form_MainWindow", "CONTENT-", 0));
        tb_menu_file->setText(QApplication::translate("Form_MainWindow", "FILE", 0));
        tb_menu_text->setText(QApplication::translate("Form_MainWindow", "TEXT", 0));
        tb_add_chapter->setText(QApplication::translate("Form_MainWindow", "+ ADD CHAP", 0));
        tb_prev_chapter->setText(QApplication::translate("Form_MainWindow", "<-", 0));
        tb_start->setText(QApplication::translate("Form_MainWindow", "START", 0));
        tb_next_chapter->setText(QApplication::translate("Form_MainWindow", "->", 0));
    } // retranslateUi

};

namespace Ui {
    class Form_MainWindow: public Ui_Form_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
