#include "unity.h"
#include "vcu/state_machine.h"

void setUp(void)
{
  
}

void tearDown(void)
{
}

void test_hej(void)
{
  TEST_ASSERT_EQUAL(hello_world(), 10);
}

int main(int argc, char const *argv[])
{
    UNITY_BEGIN();
    RUN_TEST(test_hej);
    return UNITY_END();
}
