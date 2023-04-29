#include "3dviewer.h"

void rotator(object_s* object, double deg, int rotator) {
  deg *= M_PI / 180;
  int adder1 = 0, adder2 = 0;
  if (rotator == XAxis) {
    adder1 = YAxis;
    adder2 = ZAxis;
  } else if (rotator == YAxis) {
    adder1 = XAxis;
    adder2 = ZAxis;
  } else if (rotator == ZAxis) {
    adder1 = XAxis;
    adder2 = YAxis;
  }
  for (int i = 0; i < 3 * object->v_counter; i += 3) {
    double tmp1 = object->v_array[i + adder1];
    double tmp2 = object->v_array[i + adder2];
    object->v_array[i + adder1] = tmp1 * cos(deg) - tmp2 * sin(deg);
    object->v_array[i + adder2] = tmp1 * sin(deg) + tmp2 * cos(deg);
  }
}

void shifter(object_s* object, delta delta, int shifterflag) {
  for (int i = 0; i < object->v_counter * 3; i += 3) {
    if (shifterflag == XAxis) object->v_array[i] += delta.dx;
    if (shifterflag == YAxis) object->v_array[i + 1] += delta.dy;
    if (shifterflag == ZAxis) object->v_array[i + 2] += delta.dz;
  }
}

void scaler(object_s* object, double scale) {
  for (int i = 0; i < object->v_counter * 3; i++) {
    object->v_array[i] *= scale;
  }
}

void normalizer(object_s* object) {
  double xmin = object->v_array[0];
  double xmax = object->v_array[0];
  double ymin = object->v_array[1];
  double ymax = object->v_array[1];
  for (int i = 3; i < object->v_counter * 3; i += 3) {
    if (object->v_array[i] < xmin) xmin = object->v_array[i];
    if (object->v_array[i] > xmax) xmax = object->v_array[i];
    if (object->v_array[i + 1] < ymin) ymin = object->v_array[i + 1];
    if (object->v_array[i + 1] > ymax) ymax = object->v_array[i + 1];
  }
  double x_ratio = xmax / 100;
  double y_ratio = ymax / 100;
  double scaler = x_ratio > y_ratio ? 1 / x_ratio : 1 / y_ratio;
  for (int i = 0; i < object->v_counter * 3; i++) object->v_array[i] *= scaler;
}