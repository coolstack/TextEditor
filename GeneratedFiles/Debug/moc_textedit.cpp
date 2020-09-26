/****************************************************************************
** Meta object code from reading C++ file 'textedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../textedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'textedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TextEdit_t {
    QByteArrayData data[30];
    char stringdata[319];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_TextEdit_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_TextEdit_t qt_meta_stringdata_TextEdit = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 14),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 12),
QT_MOC_LITERAL(4, 38, 15),
QT_MOC_LITERAL(5, 54, 13),
QT_MOC_LITERAL(6, 68, 20),
QT_MOC_LITERAL(7, 89, 5),
QT_MOC_LITERAL(8, 95, 10),
QT_MOC_LITERAL(9, 106, 4),
QT_MOC_LITERAL(10, 111, 10),
QT_MOC_LITERAL(11, 122, 10),
QT_MOC_LITERAL(12, 133, 12),
QT_MOC_LITERAL(13, 146, 12),
QT_MOC_LITERAL(14, 159, 13),
QT_MOC_LITERAL(15, 173, 14),
QT_MOC_LITERAL(16, 188, 6),
QT_MOC_LITERAL(17, 195, 6),
QT_MOC_LITERAL(18, 202, 16),
QT_MOC_LITERAL(19, 219, 12),
QT_MOC_LITERAL(20, 232, 2),
QT_MOC_LITERAL(21, 235, 5),
QT_MOC_LITERAL(22, 241, 16),
QT_MOC_LITERAL(23, 258, 13),
QT_MOC_LITERAL(24, 272, 1),
QT_MOC_LITERAL(25, 274, 1),
QT_MOC_LITERAL(26, 276, 13),
QT_MOC_LITERAL(27, 290, 5),
QT_MOC_LITERAL(28, 296, 16),
QT_MOC_LITERAL(29, 313, 4)
    },
    "TextEdit\0onStartNewBook\0\0onAddChapter\0"
    "onSelectChapter\0onTextChanged\0"
    "onSliderValueChanged\0onPdf\0onMovePage\0"
    "page\0onPrevPage\0onNextPage\0onUploadFile\0"
    "onCreateText\0onContentPlus\0onContentMinus\0"
    "onUndo\0onRedo\0onChapterChanged\0"
    "onPreChanged\0id\0isAdd\0onContentChanged\0"
    "onSwapChapter\0s\0e\0onMoveContent\0index\0"
    "QListWidgetItem*\0item\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TextEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  114,    2, 0x08,
       3,    0,  115,    2, 0x08,
       4,    1,  116,    2, 0x08,
       5,    0,  119,    2, 0x08,
       6,    1,  120,    2, 0x08,
       7,    0,  123,    2, 0x08,
       8,    1,  124,    2, 0x08,
      10,    0,  127,    2, 0x08,
      11,    0,  128,    2, 0x08,
      12,    0,  129,    2, 0x08,
      13,    0,  130,    2, 0x08,
      14,    0,  131,    2, 0x08,
      15,    0,  132,    2, 0x08,
      16,    0,  133,    2, 0x08,
      17,    0,  134,    2, 0x08,
      18,    0,  135,    2, 0x08,
      19,    2,  136,    2, 0x08,
      22,    1,  141,    2, 0x08,
      23,    2,  144,    2, 0x08,
      26,    2,  149,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   20,   21,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   24,   25,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 28,   27,   29,

       0        // eod
};

void TextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TextEdit *_t = static_cast<TextEdit *>(_o);
        switch (_id) {
        case 0: _t->onStartNewBook(); break;
        case 1: _t->onAddChapter(); break;
        case 2: _t->onSelectChapter((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onTextChanged(); break;
        case 4: _t->onSliderValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->onPdf(); break;
        case 6: _t->onMovePage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->onPrevPage(); break;
        case 8: _t->onNextPage(); break;
        case 9: _t->onUploadFile(); break;
        case 10: _t->onCreateText(); break;
        case 11: _t->onContentPlus(); break;
        case 12: _t->onContentMinus(); break;
        case 13: _t->onUndo(); break;
        case 14: _t->onRedo(); break;
        case 15: _t->onChapterChanged(); break;
        case 16: _t->onPreChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 17: _t->onContentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->onSwapChapter((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->onMoveContent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject TextEdit::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TextEdit.data,
      qt_meta_data_TextEdit,  qt_static_metacall, 0, 0}
};


const QMetaObject *TextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TextEdit.stringdata))
        return static_cast<void*>(const_cast< TextEdit*>(this));
    return QWidget::qt_metacast(_clname);
}

int TextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
