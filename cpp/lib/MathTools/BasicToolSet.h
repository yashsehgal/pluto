#ifndef _MATH_TOOLS__BASIC_TOOL_SET_CPP_MACRO___
#define _MATH_TOOLS__BASIC_TOOL_SET_CPP_MACRO___


/**
 * Global declarations
 * 
 */

#define PI 3.1415916

/**
 * This is the c++ version of BasicToolSet module
 * This is the most basic module of Pluto framework which contains the 
 * basic math tools and functions.

* ! This module is for user development use and does not conatains any out-sourced data.

* Todo: To develop user friendly coding feature using basic class and function methods
* Todo: Use inner function interchange to do specific tests

* This is our main class for Basic Tools Set method of MathTools code bundle package
* The class method has all the useful functions and methods that the user can use throughout this module.

  The list of all the functions inside this class method
  * Todo: Addition function
    - normal addition
    - array submission
    - addition of boolean values
  * Todo: Subtraction function
    - normal subtraction
    - array subtraction
  * Todo: Product function
    - normal product finding
    - vector product computer
    - array production computer
  * Todo: Divide function
    - normal division
    - array elemental division method
    - production of boolean values
  * Todo: Percentage function
    - calculates percentage with the given number value
    - calculates the percentage with the help of an array
    - computes average quantaties from the given array
  * Todo: Maximum and Minimum value computer
    - computes minimum value
    - computes maximum value
    - computes both max. and min. values from a given array list
*/
#include <iostream>
#include <string>
class BasicToolSet
{
private:
  char *command{};

public:
  explicit BasicToolSet(const char *command = "basic")
  {
    if (std::strcmp(command, "advanced") != 0)
    {
      // code for advanced feature option
    }
    else {
        std::cout << "Choose an option from basic or advanced" << std::endl;
    }
  }
  static double addNum(int num1, int num2)
  {
    return num1 + num2;
  }
  static double addNum(float num1, float num2)
  {
    return num1 + num2;
  }
  static double addNum(double num1, double num2)
  {
    return num1 + num2;
  }
  static double addArrayNumbers(const int *test_array, int size)
  {
    double total = 0;
    for (  int i = 0; i < size; i++)
    {
      total += test_array[i];
    }
    return total;
  }
  static double addArrayNumbers(const float *test_array, int size)
  {
    double total = 0;
    for (  int i = 0; i < size; i++)
    {
      total += test_array[i];
    }
    return total;
  }
  static double addArrayNumbers(const double *test_array, int size)
  {
    double sum = 0;
    for (  int i = 0; i < size; i++)
    {
      sum += test_array[i];
    }
    return sum;
  }
  static bool addBoolean(bool input1, bool input2)
  {
    return input1 + input2;
  }
  static bool addBooleanList(const bool *input_list, int size)
  {
    bool result = false;
    for (int i = 0; i < size; i++)
    {
      result = result + input_list[i];
    }
    return result;
  }

  static std::string getPercentage(double number)
  {
    // std::string percentageString = number + '%';
    // return ;
    std::string numberString = std::to_string(number);
    std::string percentageSymbol = "%";

    return numberString + percentageSymbol;
  }
  static std::string getPercentage(int number)
  {
    // std::string percentageString = number + '%';
    // return ;
    std::string numberString = std::to_string(number);
    std::string percentageSymbol = "%";

    return numberString + percentageSymbol;
  }
  static std::string getPercentage(float number)
  {
    // std::string percentageString = number + '%';
    // return ;
    std::string numberString = std::to_string(number);
    std::string percentageSymbol = "%";

    return numberString + percentageSymbol;
  }

  static double subtractNum(double num1, double num2)
  {
    return num1 - num2;
  }
  static double subtractNum(int num1, int num2)
  {
    return num1 - num2;
  }
  static double subtractNum(float num1, float num2)
  {
    return num1 - num2;
  }
  static double subtractArrayNumbers(const double *array_list, int size)
  {
    double negTotal = 0;
    for (  int i = 0; i < size; i++)
    {
      negTotal -= array_list[i];
    }
    return negTotal;
  }
  static double subtractArrayNumbers(const int *array_list, int size)
  {
    double negTotal = 0;
    for (  int i = 0; i < size; i++)
    {
      negTotal -= array_list[i];
    }
    return negTotal;
  }
  static double subtractArrayNumbers(const float *array_list, int size)
  {
    double negTotal = 0;
    for (  int i = 0; i < size; i++)
    {
      negTotal -= array_list[i];
    }
    return negTotal;
  }
  static double productNum(double num1, double num2)
  {
    return num1 * num2;
  }
  static double productNum(int num1, int num2)
  {
    return num1 * num2;
  }
  static double productNum(float num1, float num2)
  {
    return num1 * num2;
  }
  static double productArrayNumbers(const double *array_list, int size)
  {
    double result = 1;
    for (  int i = 0; i < size; i++)
    {
      result *= array_list[i];
    }
    return result;
  }
  static double productArrayNumbers(const int *array_list, int size)
  {
    double result = 1;
    for (  int i = 0; i < size; i++)
    {
      result *= array_list[i];
    }
    return result;
  }
  static double productArrayNumbers(const float *array_list, int size)
  {
    double result = 1;
    for (  int i = 0; i < size; i++)
    {
      result *= array_list[i];
    }
    return result;
  }
  static bool productBoolean(bool input1, bool input2)
  {
    return input1 * input2;
  }
  static bool productBooleanList(const bool *input_list, int size)
  {
    bool result = true;
    for (  int i = 0; i < size; i++)
    {
      result = result * input_list[i];
    }
    return result;
  }

  static double divideNum(double num1, double num2)
  {
    try {
      if (num2 == 0) throw num2;
      return num1 / num2;
    }
    catch (int ex) {
      std::cout << "DivisionByZeroError" << std::endl;
      // return 0;
    }
    // return num1 / num2;
  }
  static double divideNum(int num1, int num2)
  {
    try {
      if (num2 == 0) throw num2;
      return num1 / num2;
    }
    catch (int ex) {
      std::cout << "DivisionByZeroError" << std::endl;
      // return 0;
    }
    // return ((double)num1 / (double )num2);
  }
  static double divideNum(float num1, float num2)
  {
    try {
      if (num2 == 0) throw num2;
      return num1 / num2;
    }
    catch (float ex) {
      std::cout << "DivisionByZeroError" << std::endl;
    }
    // return num1 / num2;
  }

  static double divideArrayNumbers(const double *array_list, int size)
  {
    double total = 1;
    for (  int i = 0; i < size; i++)
    {
      try {
        if (total == 0) throw total;
        total /= array_list[i] / total;
      }
      catch (double ex) {
        total /= array_list[i] / 1;
      }
      // total /= array_list[i] / total;
    }
    return total;
  }
  static double divideArrayNumbers(const int *array_list, int size)
  {
    double total = 1;
    for (  int i = 0; i < size; i++)
    {
      // total /= array_list[i] / total;
      try {
        if (total == 0) throw total;
        total /= array_list[i] / total;
      }
      catch (int ex) {
        total /= array_list[i] / 1;
      }
    }
    return total;
  }
  static double divideArrayNumbers(const float *array_list, int size)
  {
    double total = 1;
    for (  int i = 0; i < size; i++)
    {
      // total /= array_list[i] / total;
      try {
        if (total == 0) throw total;
        total /= array_list[i] / total;
      } catch (float ex) {
        total /= array_list[i] / 1;
      }
    }
    return total;
  }

  static std::string computePercentageFromArray(double number, const double *array_list, int size)
  {
    double total = 0;
    for (  int i = 0; i < size; i++)
    {
      total += array_list[i];
    }
    double result = (number / total) * 100;

    std::string numberStringFormat = std::to_string(result);
    std::string percentageSymbol = "%";

    return numberStringFormat + percentageSymbol;
  }
  static std::string computePercentageFromArray(int number, const int *array_list, int size)
  {
    double total = 0;
    for (  int i = 0; i < size; i++)
    {
      total += array_list[i];
    }
    double result = (number / total) * 100;

    std::string numberStringFormat = std::to_string(result);
    std::string percentageSymbol = "%";

    return numberStringFormat + percentageSymbol;
  }
  static std::string computePercentageFromArray(float number, const float *array_list, int size)
  {
    double total = 0;
    for (  int i = 0; i < size; i++)
    {
      total += array_list[i];
    }
    double result = (number / total) * 100;

    std::string numberStringFormat = std::to_string(result);
    std::string percentageSymbol = "%";

    return numberStringFormat + percentageSymbol;
  }

  static double computeMinimum(double num1, double num2)
  {
    if (num1 < num2)
    {
      return num1;
    }
    else if (num1 > num2)
    {
      return num2;
    }
  }
  static double computeMinimum(int num1, int num2)
  {
    if (num1 < num2)
    {
      return num1;
    }
    else if (num1 > num2)
    {
      return num2;
    }
  }
  static double computeMinimum(float num1, float num2)
  {
    if (num1 < num2)
    {
      return num1;
    }
    else if (num1 > num2)
    {
      return num2;
    }
  }

  static double computeMinimumFromArray(const double *array_list, int size)
  {
    double minValue = array_list[0];
    for (  int i = 0; i < size; i++)
    {
      if (array_list[i] < minValue)
      {
        minValue = array_list[i];
      }
    }
    return minValue;
  }
  static double computeMinimumFromArray(const int *array_list, int size)
  {
    double minValue = array_list[0];
    for (  int i = 0; i < size; i++)
    {
      if (array_list[i] < minValue)
      {
        minValue = array_list[i];
      }
    }
    return minValue;
  }
  static double computeMinimumFromArray(const float *array_list, int size)
  {
    double minValue = array_list[0];
    for (  int i = 0; i < size; i++)
    {
      if (array_list[i] < minValue)
      {
        minValue = array_list[i];
      }
    }
    return minValue;
  }

  static double computeMaximum(double num1, double num2)
  {
    if (num1 > num2)
    {
      return num1;
    }
    else if (num1 < num2)
    {
      return num2;
    }
  }
  static double computeMaximum(int num1, int num2)
  {
    if (num1 > num2)
    {
      return num1;
    }
    else if (num1 < num2)
    {
      return num2;
    }
  }
  static double computeMaximum(float num1, float num2)
  {
    if (num1 > num2)
    {
      return num1;
    }
    else if (num1 < num2)
    {
      return num2;
    }
  }

  static double computeMaximumFromArray(const double *array_list, int size)
  {
    double maxValue = array_list[0];
    for (  int i = 0; i < size; i++)
    {
      if (array_list[i] > maxValue)
      {
        maxValue = array_list[i];
      }
    }
    return maxValue;
  }
  static double computeMaximumFromArray(const int *array_list, int size)
  {
    double maxValue = array_list[0];
    for (  int i = 0; i < size; i++)
    {
      if (array_list[i] > maxValue)
      {
        maxValue = array_list[i];
      }
    }
    return maxValue;
  }
  static double computeMaximumFromArray(const float *array_list, int size)
  {
    double maxValue = array_list[0];
    for (  int i = 0; i < size; i++)
    {
      if (array_list[i] > maxValue)
      {
        maxValue = array_list[i];
      }
    }
    return maxValue;
  }

  static double computeRectangleArea(double length, double breadth)
  {
    return length * breadth;
  }
  static double computeRectangleArea(int length, double breadth)
  {
    return length * breadth;
  }
  static double computeRectangleArea(float length, double breadth)
  {
    return length * breadth;
  }

  static double computeRectanglePerimeter(double length, double breadth)
  {
    return 2 * (length + breadth);
  }
  static double computeRectanglePerimeter(int length, double breadth)
  {
    return 2 * (length + breadth);
  }
  static double computeRectanglePerimeter(float length, double breadth)
  {
    return 2 * (length + breadth);
  }

  static double computeSquareArea(double side)
  {
    return side * side;
  }
  static double computeSquareArea(int side)
  {
    return side * side;
  }
  static double computeSquareArea(float side)
  {
    return side * side;
  }
  static double computeSquarePerimeter(double side)
  {
    return 4 * side;
  }
  static double computeSquarePerimeter(int side)
  {
    return 4 * side;
  }
  static double computeSquarePerimeter(float side)
  {
    return 4 * side;
  }
  static double computeCircleCircumference(int radius) {
    return 2 * PI * radius;
  }
  static double computeCircleCircumference(float radius) {
    return 2 * PI * radius;
  }
  static double computeCircleCircumference(double radius) {
    return 2 * PI * radius;
  }
  static double computeCircleArea(int radius) {
    return PI * radius * radius;
  }
  static double computeCircleArea(double radius) {
    return PI * radius * radius;
  }
  static double computeCircleArea(float radius) {
    return PI * radius * radius;
  }
  static bool checkEven(int number)
  {
      return number % 2 == 0;
  }
  static bool checkEven(long int number)
  {
      return number % 2 == 0;
  }
  static bool checkOdd(int number)
  {
      return number % 2 != 0;
  }
  static bool checkOdd(long int number)
  {
      return number % 2 != 0;
  }

protected:
};

#endif // for _MATH_TOOLS__BASIC_TOOL_SET_CPP_MACRO___