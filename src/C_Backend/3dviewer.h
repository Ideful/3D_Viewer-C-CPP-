#include <ctype.h>
#include <math.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// setlocale(LC_ALL, "en-US");
// setlocale(LC_NUMERIC, "C");

typedef struct {
  int f_counter;
  int v_counter;
  int* f_array;
  double* v_array;
} object_s;

typedef struct {
  double dx;
  double dy;
  double dz;
} delta;

enum { XAxis, YAxis, ZAxis };

object_s parser(char* str, object_s* object);
void v_f_counter(char* filename, object_s* object);
void v_f_parser(char* filename, object_s* object);
int dig_in_f_str(char* line);

void rotator(object_s* object, double deg, int rotator);
void shifter(object_s* object, delta delta, int shifterflag);
void scaler(object_s* object, double scale);
void normalizer(object_s* object);