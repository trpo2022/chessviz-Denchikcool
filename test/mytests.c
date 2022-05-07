#include <ctest.h>
#include <libchess/check_move.h>
#include <libchess/enum.h>
#include <libchess/fill_table.h>
#include <libchess/find_position_black.h>
#include <libchess/find_position_white.h>
#include <libchess/input.h>
#include <libchess/move.h>
#include <libchess/print_table.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

CTEST(ctest, write1)
{
    ASSERT_EQUAL(1, check_move("e2-e4 e7-5e"));
}

CTEST(ctest, write2)
{
    ASSERT_EQUAL(0, check_move("e2-e4 e7-e5"));
}

