#include <check.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../C_Backend/3dviewer.h"

START_TEST(test_1) {
    // char str[] = "./C_Backend/test.c";
    char str[] = "./obj/cube.obj";
    object_s qwe = {0};
    parser(str,&qwe);
    ck_assert_int_eq(qwe.f_counter,24);
    ck_assert_int_eq(qwe.v_counter,8);
    ck_assert_double_eq(qwe.v_array[0],-1);
    ck_assert_double_eq(qwe.f_array[0],0);
    delta delta = {0};
    normalizer(&qwe);
    rotator(&qwe,0,XAxis);
    rotator(&qwe,0,YAxis);
    rotator(&qwe,0,ZAxis);
    shifter(&qwe,delta,XAxis);
    shifter(&qwe,delta,YAxis);
    shifter(&qwe,delta,ZAxis);
    scaler(&qwe,1);
    free(qwe.f_array);
    free(qwe.v_array);
}
END_TEST

Suite *tests() {
  Suite *s = suite_create("TEST");
  TCase *tc = tcase_create("all test");
  tcase_add_test(tc, test_1);
  suite_add_tcase(s, tc);
  return s;
}

int main(void) {
  int nf = 0;
  Suite *suite = tests();
  SRunner *test_1 = srunner_create(suite);
  srunner_set_fork_status(test_1, CK_NOFORK);
  srunner_run_all(test_1, CK_NORMAL);
  nf += srunner_ntests_failed(test_1);
  srunner_free(test_1);
  return nf == 0 ? 0 : 1;
}
