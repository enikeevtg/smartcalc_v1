#ifndef SMARTCALC_03_TESTS_TESTS_H_
#define SMARTCALC_03_TESTS_TESTS_H_

#include <check.h>
#include <stdlib.h>

#include "../smart_calc.h"

Suite* test_push(void);
Suite* test_fill_node(void);
Suite* test_move_node(void);
Suite* test_errors_convert_infix_to_RPN(void);

#endif // SMARTCALC_03_TESTS_TESTS_H_