#include "../lib/Unity/src/unity.h"
#include "../src/tuple.h"

void setUp() {}
void tearDown() {}

void test_tuple_with_w1_is_point(void) {
  Tuple a = tuple(4.3, -4.2, 3.1, 1.0);
  TEST_ASSERT_EQUAL_DOUBLE(4.3, a.x);
  TEST_ASSERT_EQUAL_DOUBLE(-4.2, a.y);
  TEST_ASSERT_EQUAL_DOUBLE(3.1, a.z);
  TEST_ASSERT_EQUAL_DOUBLE(1.0, a.w);
  TEST_ASSERT_TRUE(is_point(a));
  TEST_ASSERT_FALSE(is_vector(a));
}

void test_tuple_with_w0_is_vector(void) {
  Tuple a = tuple(4.3, -4.2, 3.1, 0.0);
  TEST_ASSERT_EQUAL_DOUBLE(4.3, a.x);
  TEST_ASSERT_EQUAL_DOUBLE(-4.2, a.y);
  TEST_ASSERT_EQUAL_DOUBLE(3.1, a.z);
  TEST_ASSERT_EQUAL_DOUBLE(0.0, a.w);
  TEST_ASSERT_TRUE(is_vector(a));
  TEST_ASSERT_FALSE(is_point(a));
}

void test_point_creates_tuples_with_w1(void) {
  Tuple p = point(4, -4, 3);
  Tuple expected = tuple(4, -4, 3, 1);
  TEST_ASSERT_EQUAL_MEMORY(&expected, &p, sizeof(Tuple));
}

void test_vector_creates_tuples_with_w0(void) {
  Tuple v = vector(4, -4, 3);
  Tuple expected = tuple(4, -4, 3, 0);
  TEST_ASSERT_EQUAL_MEMORY(&expected, &v, sizeof(Tuple));
}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_tuple_with_w1_is_point);
  RUN_TEST(test_tuple_with_w0_is_vector);
  RUN_TEST(test_point_creates_tuples_with_w1);
  RUN_TEST(test_vector_creates_tuples_with_w0);
  return UNITY_END();
}
