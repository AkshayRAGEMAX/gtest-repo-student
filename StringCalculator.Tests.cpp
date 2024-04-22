#include "StringCalculator.h"
#include <gtest/gtest.h>

TEST(StringCalculatorTestSuite,GivenEmptyStringZeroIsExpected){
    //Arrange
    StringCalculator objUnderTest;
    string input="";
    int expectedValue=0;
    //Act
   int actualValue=  objUnderTest.Add(input);
    //Assert
    ASSERT_EQ(actualValue,expectedValue);
}
TEST(StringCalculatorTestSuite,GivenZeroEmptyStringZeroIsExpected){
    //Arrange
    StringCalculator objUnderTest;
    string input="0";
    int expectedValue=0;
    //Act
   int actualValue=  objUnderTest.Add(input);
    //Assert
    ASSERT_EQ(actualValue,expectedValue);
}
TEST(StringCalculatorTestSuite,when_passed_two_comma_delimited_numbers){
    //Arrange
    StringCalculator objUnderTest;
    string input="1,2";
    int expectedValue=3;
    //Act
   int actualValue=  objUnderTest.Add(input);
    //Assert
    ASSERT_EQ(actualValue,expectedValue);
}
TEST(StringCalculatorTestSuite,when_passed_multiple_comma_delimited_numbers){
    //Arrange
    StringCalculator objUnderTest;
    string input="1,2,3";
    int expectedValue=6;
    //Act
   int actualValue=  objUnderTest.Add(input);
    //Assert
    ASSERT_EQ(actualValue,expectedValue);
}
TEST(StringCalculatorTestSuite,when_delimited_with_newline_and_comma){
    //Arrange
    StringCalculator objUnderTest;
    string input="1\n2,3";
    int expectedValue=6;
    //Act
   int actualValue=  objUnderTest.Add(input);
    //Assert
    ASSERT_EQ(actualValue,expectedValue);
}
TEST(StringCalculatorTestSuite,returns_the_sum_based_on_that_delimiter){
    //Arrange
    StringCalculator objUnderTest;
    string input="//;\n1;2";
    int expectedValue=3;
    //Act
   int actualValue=  objUnderTest.Add(input);
    //Assert
    ASSERT_EQ(actualValue,expectedValue);
}
TEST(StringCalculatorTestSuite,throws_an_exception_listing_invalid_values){
    //Arrange
    StringCalculator objUnderTest;
    string input="1,-2,-4,5";
    int expectedValue=0;
    //Act
   int actualValue=  objUnderTest.Add(input);
    //Assert
    ASSERT_EQ(actualValue,expectedValue);
}
TEST(StringCalculatorTestSuite,when_passed_numbers_over_1000){
    //Arrange
    StringCalculator objUnderTest;
    string input="42,1001,3";
    int expectedValue=45;
    //Act
   int actualValue=  objUnderTest.Add(input);
    //Assert
    ASSERT_EQ(actualValue,expectedValue);
}
 TEST(StringCalculatorTestSuite,when_passed_multiple_multicharacter_delimiters){
    //Arrange
    StringCalculator objUnderTest;
    string input="//[**][%^]\n4**1%^9";
    int expectedValue=14;
    //Act
   int actualValue=  objUnderTest.Add(input);
    //Assert
    ASSERT_EQ(actualValue,expectedValue);
}
