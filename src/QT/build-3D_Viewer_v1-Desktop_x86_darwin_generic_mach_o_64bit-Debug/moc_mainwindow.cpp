/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../3D_Viewer_v1/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[48];
    char stringdata0[495];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 19), // "on_openfile_clicked"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 29), // "on_doubleSpinBox_valueChanged"
QT_MOC_LITERAL(62, 4), // "arg1"
QT_MOC_LITERAL(67, 24), // "on_rotate_x_valueChanged"
QT_MOC_LITERAL(92, 24), // "on_rotate_y_valueChanged"
QT_MOC_LITERAL(117, 24), // "on_rotate_z_valueChanged"
QT_MOC_LITERAL(142, 21), // "on_mov_x_valueChanged"
QT_MOC_LITERAL(164, 21), // "on_mov_y_valueChanged"
QT_MOC_LITERAL(186, 21), // "on_mov_z_valueChanged"
QT_MOC_LITERAL(208, 21), // "on_screen_bmp_clicked"
QT_MOC_LITERAL(230, 22), // "on_screen_jpeg_clicked"
QT_MOC_LITERAL(253, 14), // "on_gif_clicked"
QT_MOC_LITERAL(268, 9), // "takeFrame"
QT_MOC_LITERAL(278, 27), // "on_background_color_clicked"
QT_MOC_LITERAL(306, 25), // "on_vertices_color_clicked"
QT_MOC_LITERAL(332, 21), // "on_line_color_clicked"
QT_MOC_LITERAL(354, 25), // "on_line_size_valueChanged"
QT_MOC_LITERAL(380, 25), // "on_vert_size_valueChanged"
QT_MOC_LITERAL(406, 25), // "on_vert_type_valueChanged"
QT_MOC_LITERAL(432, 5), // "value"
QT_MOC_LITERAL(438, 24), // "on_linetype_valueChanged"
QT_MOC_LITERAL(463, 31) // "on_projection_type_valueChanged"

    },
    "MainWindow\0on_openfile_clicked\0\0"
    "on_doubleSpinBox_valueChanged\0arg1\0"
    "on_rotate_x_valueChanged\0"
    "on_rotate_y_valueChanged\0"
    "on_rotate_z_valueChanged\0on_mov_x_valueChanged\0"
    "on_mov_y_valueChanged\0on_mov_z_valueChanged\0"
    "on_screen_bmp_clicked\0on_screen_jpeg_clicked\0"
    "on_gif_clicked\0takeFrame\0"
    "on_background_color_clicked\0"
    "on_vertices_color_clicked\0"
    "on_line_color_clicked\0on_line_size_valueChanged\0"
    "on_vert_size_valueChanged\0"
    "on_vert_type_valueChanged\0value\0"
    "on_linetype_valueChanged\0"
    "on_projection_type_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  134,    2, 0x08,    1 /* Private */,
       3,    1,  135,    2, 0x08,    2 /* Private */,
       5,    1,  138,    2, 0x08,    4 /* Private */,
       6,    1,  141,    2, 0x08,    6 /* Private */,
       7,    1,  144,    2, 0x08,    8 /* Private */,
       8,    1,  147,    2, 0x08,   10 /* Private */,
       9,    1,  150,    2, 0x08,   12 /* Private */,
      10,    1,  153,    2, 0x08,   14 /* Private */,
      11,    0,  156,    2, 0x08,   16 /* Private */,
      12,    0,  157,    2, 0x08,   17 /* Private */,
      13,    0,  158,    2, 0x08,   18 /* Private */,
      14,    0,  159,    2, 0x08,   19 /* Private */,
      15,    0,  160,    2, 0x08,   20 /* Private */,
      16,    0,  161,    2, 0x08,   21 /* Private */,
      17,    0,  162,    2, 0x08,   22 /* Private */,
      18,    1,  163,    2, 0x08,   23 /* Private */,
      19,    1,  166,    2, 0x08,   25 /* Private */,
      20,    1,  169,    2, 0x08,   27 /* Private */,
      22,    1,  172,    2, 0x08,   29 /* Private */,
      23,    1,  175,    2, 0x08,   31 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int,   21,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_openfile_clicked(); break;
        case 1: _t->on_doubleSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->on_rotate_x_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->on_rotate_y_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->on_rotate_z_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->on_mov_x_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->on_mov_y_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->on_mov_z_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->on_screen_bmp_clicked(); break;
        case 9: _t->on_screen_jpeg_clicked(); break;
        case 10: _t->on_gif_clicked(); break;
        case 11: _t->takeFrame(); break;
        case 12: _t->on_background_color_clicked(); break;
        case 13: _t->on_vertices_color_clicked(); break;
        case 14: _t->on_line_color_clicked(); break;
        case 15: _t->on_line_size_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->on_vert_size_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->on_vert_type_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->on_linetype_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->on_projection_type_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 20;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
