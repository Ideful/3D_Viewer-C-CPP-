#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#define no_vert 0
#define circ_vert 1
#define sq_vert 2

#include "../external_libs/gifimage/qgifimage.h"
#include <QFileDialog>
#include <QMainWindow>
#include <QTime>
#include <glview.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();
  QString path;
  QSettings *settings;
  void save_settings();
  void load_settings();

private slots:
  void on_openfile_clicked();

  void on_doubleSpinBox_valueChanged(double arg1);

  void on_rotate_x_valueChanged(double arg1);

  void on_rotate_y_valueChanged(double arg1);

  void on_rotate_z_valueChanged(double arg1);

  void on_mov_x_valueChanged(double arg1);

  void on_mov_y_valueChanged(double arg1);

  void on_mov_z_valueChanged(double arg1);

  void on_screen_bmp_clicked();

  void on_screen_jpeg_clicked();

  void on_gif_clicked();

  void takeFrame();

  void on_background_color_clicked();

  void on_vertices_color_clicked();

  void on_line_color_clicked();

  void on_line_size_valueChanged(int arg1);

  void on_vert_size_valueChanged(int arg1);

  void on_vert_type_valueChanged(int value);

  void on_linetype_valueChanged(int value);

  void on_projection_type_valueChanged(int value);

private:
  int frames;
  QGifImage *gif;
  QTimer *timer;
  Ui::MainWindow *ui;
  int intshifter;
  int introtator;
  double oldpos_x = 0;
  double oldpos_y = 0;
  double oldpos_z = 0;
  double old_zoom = 1;
  double ex_rot_x = 0;
  double ex_rot_y = 0;
  double ex_rot_z = 0;
};
#endif // MAINWINDOW_H
