#include <unity.h>
#include <unity_internals.h>
#include "Ascii.c"

#define PROJECT_NAME "LINUX_ACTIVITIES"

/* Prototypes for all the test functions */

void ADD(int, char*)

/* Required by the unity test framework */
void setUp(void) 
{
}
/* Required by the unity test framework */
void tearDown(void)
 {
 }

void ADD(int, char*)
{
    TEST_ASSERT_EQUAL("NIMITHA",add);
}

int main(void)
{
    UNITY_BEGIN();
     RUN_TEST(test_add);
 
    return UNITY_END();
}