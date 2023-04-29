#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), gif(nullptr), timer(new QTimer),
      ui(new Ui::MainWindow)

{
  ui->setupUi(this);
  settings = new QSettings("21sc", "3dviewer", this);
  load_settings();
}

MainWindow::~MainWindow() {
  save_settings();
  delete ui;
}

void MainWindow::on_openfile_clicked() {
  ui->display_widget->object = {0, 0, NULL, NULL};
  path = QFileDialog::getOpenFileName(this, "open a file", "/",
                                      tr("Objects Files (*.obj)"));
  QByteArray tmp = path.toLocal8Bit();
  char *charpath = tmp.data();
  if (charpath != 0) {
    parser(charpath, &(ui->display_widget->object));
    normalizer(&(ui->display_widget->object));
    std::string name = path.toStdString();
    std::string base_filename = name.substr(name.find_last_of("/\\") + 1);
    QString output = QString::fromStdString(base_filename);
    ui->displayer->setText("File name: " + output);
    output = QString::number(ui->display_widget->object.f_counter);
    ui->displayer->setText(ui->displayer->toPlainText() +
                           "\nFacets amount: " + output);
    output = QString::number(ui->display_widget->object.v_counter);
    ui->displayer->setText(ui->displayer->toPlainText() +
                           "\nVerticies amount: " + output);
  }
}

void MainWindow::on_doubleSpinBox_valueChanged(double arg1) {
  scaler(&(ui->display_widget->object), 1 / old_zoom * arg1);
  ui->display_widget->update();
  old_zoom = arg1;
}

void MainWindow::on_rotate_x_valueChanged(double arg1) {
  introtator = 0;
  rotator(&(ui->display_widget->object), arg1 - ex_rot_x, introtator);
  ui->display_widget->update();
  ex_rot_x = arg1;
}

void MainWindow::on_rotate_y_valueChanged(double arg1) {
  introtator = 1;
  rotator(&(ui->display_widget->object), arg1 - ex_rot_y, introtator);
  ui->display_widget->update();
  ex_rot_y = arg1;
}

void MainWindow::on_rotate_z_valueChanged(double arg1) {
  introtator = 2;
  rotator(&(ui->display_widget->object), arg1 - ex_rot_z, introtator);
  ui->display_widget->update();
  ex_rot_z = arg1;
}

void MainWindow::on_mov_x_valueChanged(double arg1) {
  intshifter = 0;
  ui->display_widget->delta_xyz.dx = arg1 - oldpos_x;
  shifter(&(ui->display_widget->object), ui->display_widget->delta_xyz,
          intshifter);
  ui->display_widget->update();
  oldpos_x = arg1;
}

void MainWindow::on_mov_y_valueChanged(double arg1) {
  intshifter = 1;
  ui->display_widget->delta_xyz.dy = arg1 - oldpos_y;
  shifter(&(ui->display_widget->object), ui->display_widget->delta_xyz,
          intshifter);
  ui->display_widget->update();
  oldpos_y = arg1;
}

void MainWindow::on_mov_z_valueChanged(double arg1) {
  intshifter = 2;
  ui->display_widget->delta_xyz.dz = arg1 - oldpos_z;
  shifter(&(ui->display_widget->object), ui->display_widget->delta_xyz,
          intshifter);
  ui->display_widget->update();
  oldpos_z = arg1;
}

//##########################        p2
//#################################################################

void MainWindow::on_background_color_clicked() {
  ui->display_widget->BackgroundColor = QColorDialog::getColor();
}

void MainWindow::on_line_color_clicked() {
  ui->display_widget->LineColor = QColorDialog::getColor();
}

void MainWindow::on_vertices_color_clicked() {
  ui->display_widget->VerticesColor = QColorDialog::getColor();
}

void MainWindow::on_line_size_valueChanged(int arg1) {
  ui->display_widget->linesize = arg1;
  ui->display_widget->update();
}

void MainWindow::on_vert_size_valueChanged(int arg1) {
  ui->display_widget->vertsize = arg1;
  ui->display_widget->update();
}

void MainWindow::on_vert_type_valueChanged(int value) {
  ui->display_widget->vert_type = value;
  ui->display_widget->update();
}

void MainWindow::on_linetype_valueChanged(int value) {
  ui->display_widget->line_type = value;
  ui->display_widget->update();
}

void MainWindow::on_projection_type_valueChanged(int value) {
  ui->display_widget->projtype = value;
  ui->display_widget->update();
}

void MainWindow::save_settings() {

  settings->setValue("bckg_color_R",
                     ui->display_widget->BackgroundColor.redF());
  settings->setValue("bckg_color_G",
                     ui->display_widget->BackgroundColor.greenF());
  settings->setValue("bckg_color_B",
                     ui->display_widget->BackgroundColor.blueF());

  settings->setValue("vert_color_R", ui->display_widget->VerticesColor.redF());
  settings->setValue("vert_color_G",
                     ui->display_widget->VerticesColor.greenF());
  settings->setValue("vert_color_B", ui->display_widget->VerticesColor.blueF());

  settings->setValue("line_color_R", ui->display_widget->LineColor.redF());
  settings->setValue("line_color_G", ui->display_widget->LineColor.greenF());
  settings->setValue("line_color_B", ui->display_widget->LineColor.blueF());

  settings->setValue("vert_size", ui->display_widget->vertsize);
  settings->setValue("line_size", ui->display_widget->linesize);
  settings->setValue("vert_type", ui->display_widget->vert_type);
  settings->setValue("line_type", ui->display_widget->line_type);
  settings->setValue("proj_type", ui->display_widget->projtype);
}

void MainWindow::load_settings() {
  ui->display_widget->BackgroundColor.setRgbF(
      settings->value("bckg_color_R", 0).toFloat(),
      settings->value("bckg_color_G", 0).toFloat(),
      settings->value("bckg_color_B", 0).toFloat());
  ui->display_widget->LineColor.setRgbF(
      settings->value("line_color_R", 255).toFloat(),
      settings->value("line_color_G", 255).toFloat(),
      settings->value("line_color_B", 255).toFloat());
  ui->display_widget->VerticesColor.setRgbF(
      settings->value("vert_color_R", 255).toFloat(),
      settings->value("vert_color_G", 255).toFloat(),
      settings->value("vert_color_B", 255).toFloat());

  ui->vert_size->setValue(settings->value("vert_size", 1).toInt());
  ui->line_size->setValue(settings->value("line_size", 1).toInt());
  ui->vert_type->setValue(settings->value("vert_type", 1).toInt());
  ui->projection_type->setValue(settings->value("proj_type", 0).toInt());
  ui->linetype->setValue(settings->value("line_type", 0).toInt());

  ui->display_widget->vertsize = settings->value("vert_size", 1).toInt();
  ui->display_widget->linesize = settings->value("line_size", 1).toInt();
  ui->display_widget->vert_type = settings->value("vert_type", 1).toInt();
  ui->display_widget->projtype = settings->value("proj_type", 0).toInt();
  ui->display_widget->line_type = settings->value("line_type", 0).toInt();
}

//##########################        p3
//#############################################################

void MainWindow::on_screen_bmp_clicked() {
  QString file = QFileDialog::getSaveFileName(this, "Save as...", "name.bmp",
                                              "BMP (*.bmp)");
  ui->display_widget->grabFramebuffer().save(file, NULL, 100);
}

void MainWindow::on_screen_jpeg_clicked() {
  QString file = QFileDialog::getSaveFileName(this, "Save as...", "name.jpeg",
                                              "JPEG (*.jpeg)");
  ui->display_widget->grabFramebuffer().save(file, NULL, 100);
}

void MainWindow::on_gif_clicked() {
  ui->gif->setDisabled(true);
  gif = new QGifImage;
  timer = new QTimer(this);
  gif->setDefaultDelay(100);
  timer->start(100);
  connect(timer, SIGNAL(timeout()), this, SLOT(takeFrame()));
}

void MainWindow::takeFrame() {
  QImage frame = ui->display_widget->grabFramebuffer();
  gif->addFrame(frame.scaled(640, 480), 0);
  if (gif->frameCount() == 50) {
    timer->stop();
    QString pathGIF = QFileDialog::getSaveFileName(
        this, ("Save as GIF"), "image.gif", "GIF Image Files (*.gif)");
    gif->save(pathGIF);
    delete timer;
    delete gif;
    ui->gif->setEnabled(true);
  }
}
