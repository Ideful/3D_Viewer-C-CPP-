#include "3dviewer.h"

void v_f_parser(char *filename, object_s *object) {
  object->v_array = (double *)calloc(object->v_counter * 3, sizeof(double));
  object->f_array = calloc(2 * object->f_counter, sizeof(int));
  FILE *f_path = NULL;
  f_path = fopen(filename, "r");
  char *line = NULL;
  size_t line_len = 0;
  int counter = 0;
  int array_ctr = 0;
  if (f_path) {
    while (getline(&line, &line_len, f_path) != EOF) {
      if (line[0] == 'v' && line[1] == ' ') {
        line++;
        sscanf(line, "%lf %lf %lf\n", &object->v_array[counter],
               &object->v_array[counter + 1], &object->v_array[counter + 2]);
        line--;
        // int x = 0;
        // sscanf(line,"%c %lf %lf
        // %lf\n",&x,&object->v_array[counter],&object->v_array[counter+1],&object->v_array[counter+2]);
        counter += 3;
      } else if (line[0] == 'f' && line[1] == ' ') {
        int cur_dig_num = 0, freeer = 0;
        line++, freeer++;
        int dig_amount = dig_in_f_str(line);
        while (*line != '\0' && *line != EOF) {
          if (*(line - 1) == ' ' && isdigit(*line)) {
            int dig = 0;
            while (isdigit(*line)) {
              dig = dig * 10 + (*line - '0');
              line++, freeer++;
            }
            if (cur_dig_num == 0) {
              object->f_array[array_ctr++] = dig - 1;
            } else if (cur_dig_num > 0 && (cur_dig_num < dig_amount - 1)) {
              object->f_array[array_ctr++] = dig - 1;
              object->f_array[array_ctr++] = dig - 1;
            } else if (cur_dig_num == dig_amount - 1) {
              object->f_array[array_ctr++] = dig - 1;
              object->f_array[array_ctr++] = dig - 1;
              object->f_array[array_ctr] =
                  object->f_array[array_ctr + 1 - dig_amount * 2];
              if (array_ctr < object->f_counter * 2) array_ctr++;
            }
            cur_dig_num++;
          }
          line++, freeer++;
        }
        line -= freeer;
      }
    }
    free(line);
    fclose(f_path);
  }
}
