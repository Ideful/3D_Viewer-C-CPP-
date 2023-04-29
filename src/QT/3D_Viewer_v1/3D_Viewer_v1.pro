QT       += core gui opengl openglwidgets core

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../../C_Backend/affine_transformations.c \
    ../../C_Backend/helpers.c \
    ../../C_Backend/parser.c \
    ../../C_Backend/v_f_creator.c \
    ../external_libs/3rdParty/giflib/dgif_lib.c \
    ../external_libs/3rdParty/giflib/egif_lib.c \
    ../external_libs/3rdParty/giflib/gif_err.c \
    ../external_libs/3rdParty/giflib/gif_font.c \
    ../external_libs/3rdParty/giflib/gif_hash.c \
    ../external_libs/3rdParty/giflib/gifalloc.c \
    ../external_libs/3rdParty/giflib/quantize.c \
    ../external_libs/gifimage/doc/snippets/doc_src_qtgifimage.cpp \
    ../external_libs/gifimage/qgifimage.cpp \
    ../external_libs/gifimage/tests/test.c \
    glview.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    ../../C_Backend/3dviewer.h \
    ../external_libs/3rdParty/giflib/gif_hash.h \
    ../external_libs/3rdParty/giflib/gif_lib.h \
    ../external_libs/3rdParty/giflib/gif_lib_private.h \
    ../external_libs/gifimage/qgifglobal.h \
    ../external_libs/gifimage/qgifimage.h \
    ../external_libs/gifimage/qgifimage_p.h \
    glview.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

SUBDIRS += \
    ../external_libs/gifimage/doc/snippets/doc_src_qtgifimage.pro \
    ../external_libs/gifimage/doc/snippets/doc_src_qtgifimage.pro \
    ../external_libs/gifimage/gifimage.pro \
    ../external_libs/gifimage/gifimage.pro

DISTFILES += \
    ../external_libs/3rdParty/giflib.pri \
    ../external_libs/3rdParty/giflib/AUTHORS \
    ../external_libs/3rdParty/giflib/COPYING \
    ../external_libs/3rdParty/giflib/README \
    ../external_libs/gifimage/doc/qtgifimage.qdocconf \
    ../external_libs/gifimage/doc/src/examples.qdoc \
    ../external_libs/gifimage/doc/src/index.qdoc \
    ../external_libs/gifimage/doc/src/qtgifimage.qdoc \
    ../external_libs/gifimage/doc/src/usage.qdoc \
    ../external_libs/gifimage/qtgifimage.pri
