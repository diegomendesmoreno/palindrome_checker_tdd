#include <stdio.h>
#include "Unity/src/unity.h"
#include "palindrome.h"

void setUp(void)
{
    ;// Need to be here for Unity
}

void tearDown(void)
{
    ;// Need to be here for Unity
}

/* Critérios de aceite: Verdadeiros */
void test_1_palindrome_check(void)
{
    char word[100] = "Rotator";
    bool_t result = palindrome_check(word);
    TEST_ASSERT_TRUE(result);
}

void test_2_palindrome_check(void)
{
    char word[100] = "bob";
    bool_t result = palindrome_check(word);
    TEST_ASSERT_TRUE(result);
}

void test_3_palindrome_check(void)
{
    char word[100] = "madam";
    bool_t result = palindrome_check(word);
    TEST_ASSERT_TRUE(result);
}

void test_4_palindrome_check(void)
{
    char word[100] = "mAlAyAlam";
    bool_t result = palindrome_check(word);
    TEST_ASSERT_TRUE(result);
}

void test_5_palindrome_check(void)
{
    char word[100] = "1";
    bool_t result = palindrome_check(word);
    TEST_ASSERT_TRUE(result);
}

void test_6_palindrome_check(void)
{
    char word[100] = "Able was I, ere I saw Elba";
    bool_t result = palindrome_check(word);
    TEST_ASSERT_TRUE(result);
}

void test_7_palindrome_check(void)
{
    char word[100] = "Madam I'm Adam";
    bool_t result = palindrome_check(word);
    TEST_ASSERT_TRUE(result);
}

void test_8_palindrome_check(void)
{
    char word[100] = "Step on no pets.";
    bool_t result = palindrome_check(word);
    TEST_ASSERT_TRUE(result);
}

void test_9_palindrome_check(void)
{
    char word[100] = "Top spot!";
    bool_t result = palindrome_check(word);
    TEST_ASSERT_TRUE(result);
}

void test_10_palindrome_check(void)
{
    char word[100] = "02/02/2020";
    bool_t result = palindrome_check(word);
    TEST_ASSERT_TRUE(result);
}

/* Critérios de aceite: Falsos */
void test_11_palindrome_check(void)
{
    char word[100] = "xyz";
    bool_t result = palindrome_check(word);
    TEST_ASSERT_FALSE(result);
}

void test_12_palindrome_check(void)
{
    char word[100] = "elephant";
    bool_t result = palindrome_check(word);
    TEST_ASSERT_FALSE(result);
}

void test_13_palindrome_check(void)
{
    char word[100] = "Country";
    bool_t result = palindrome_check(word);
    TEST_ASSERT_FALSE(result);
}

void test_14_palindrome_check(void)
{
    char word[100] = "Top . post!";
    bool_t result = palindrome_check(word);
    TEST_ASSERT_FALSE(result);
}

void test_15_palindrome_check(void)
{
    char word[100] = "Wonderful-fool";
    bool_t result = palindrome_check(word);
    TEST_ASSERT_FALSE(result);
}

void test_16_palindrome_check(void)
{
    char word[100] = "Wild imagination!";
    bool_t result = palindrome_check(word);
    TEST_ASSERT_FALSE(result);
}

int main(void)
{
    UNITY_BEGIN();

    /* Critérios de aceite: Verdadeiros */
    RUN_TEST(test_1_palindrome_check);
    RUN_TEST(test_2_palindrome_check);
    RUN_TEST(test_3_palindrome_check);
    RUN_TEST(test_4_palindrome_check);
    RUN_TEST(test_5_palindrome_check);
    RUN_TEST(test_6_palindrome_check);
    RUN_TEST(test_7_palindrome_check);
    RUN_TEST(test_8_palindrome_check);
    RUN_TEST(test_9_palindrome_check);
    RUN_TEST(test_10_palindrome_check);

    /* Critérios de aceite: Falsos */
    RUN_TEST(test_11_palindrome_check);
    RUN_TEST(test_12_palindrome_check);
    RUN_TEST(test_13_palindrome_check);
    RUN_TEST(test_14_palindrome_check);
    RUN_TEST(test_15_palindrome_check);
    RUN_TEST(test_16_palindrome_check);

    return UNITY_END();
}
