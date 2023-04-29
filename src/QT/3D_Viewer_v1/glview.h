#ifndef GLVIEW_H
#define GLVIEW_H
#define GL_SILENCE_DEPRECATION
#include <QColorDialog>
#include <QFileDialog>
#include <QMouseEvent>
#include <QOpenGLFunctions>
#include <QSettings>
#include <QtOpenGL>
#include <QtOpenGLWidgets/QOpenGLWidget>
#include <QtWidgets/QWidget>
#include <qcolor.h>

extern "C" {
#include "../../C_Backend/3dviewer.h"
}

class glview : public QOpenGLWidget, protected QOpenGLFunctions {
  Q_OBJECT
public:
  glview(QWidget *parent = nullptr);
  ~glview();
  void initializeGL() override;
  void paintGL() override;
  void mousePressEvent(QMouseEvent *) override;
  void mouseMoveEvent(QMouseEvent *) override;
  void projection_processing();
  void vert_processing();
  void line_processing();
  QColor BackgroundColor;
  QColor LineColor;
  QColor VerticesColor;
  object_s object;
  delta delta_xyz;
  int projtype;
  int linesize;
  int vertsize;
  int vert_type;
  int line_type;

private:
  QPoint mPos;
  float Xroad;
  float Yroad;
  float Zroad;
  double x, y;
};

#endif // GLVIEW_H
