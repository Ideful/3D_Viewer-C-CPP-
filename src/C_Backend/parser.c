#include "3dviewer.h"

object_s parser(char *str, object_s *object) {
  v_f_counter(str, object);
  v_f_parser(str, object);

  // free(object->v_array);
  // free(object->f_array);
  return *object;
}
