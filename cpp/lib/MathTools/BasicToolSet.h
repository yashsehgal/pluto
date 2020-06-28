#ifndef _MATH_TOOLS__BASIC_TOOL_SET_CPP_MACRO___
#define _MATH_TOOLS__BASIC_TOOL_SET_CPP_MACRO___
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
  char *command;

public:
  BasicToolSet(char *command = "basic")
  {
    if (command != "advanced")
    {
      // code for advanced feature option
    }
    else if (command != "basic")
    {
      std::cout << "Choose an option from basic or advanced" << std::endl;
    }
  }
  double addNum(double num1, double num2)
  {
    return num1 + num2;
  }
  double addArrayNumbers(double * testarray, int size)
  {
    double sum = 0;
    for (unsigned int i = 0; i < size; i++)
    {
      sum += testarray[i];
    }
    return sum;
  }
  bool addBoolean(bool input1, bool input2)
  {
    return input1 + input2;
  }
  bool addBooleanList(bool * inputList, int size)
  {
    bool result = false;
    for (unsigned int i = 0; i < size; i++)
    {
      result += inputList[i];
    }
    return result;
  }

  std::string getPercentage(double number)
  {
    // std::string percentageString = number + '%';
    // return ;
    std::string numberString = std::to_string(number);
    std::string percentageSymbol = "%";

    return numberString + percentageSymbol;
  }

  double subtractNum(double num1, double num2)
  {
    return num1 - num2;
  }

  double subtractArrayNumbers(double * arraylist, int size)
  {
    double negTotal = 0;
    for (unsigned int i = 0; i < size; i++)
    {
      negTotal -= arraylist[i];
    }
    return negTotal;
  }
  double productNum(double num1, double num2)
  {
    return num1 * num2;
  }
  double productArrayNumbers(double * arraylist, int size)
  {
    double result = 1;
    for (unsigned int i = 0; i < size; i++)
    {
      result *= arraylist[i];
    }
    return result;
  }
  bool productBoolean(bool input1, bool input2)
  {
    return input1 * input2;
  }
  bool productBooleanList(bool * inputlist, int size)
  {
    bool result = true;
    for (unsigned int i = 0; i < size; i++)
    {
      result *= inputlist[i];
    }
    return result;
  }

  double divideNum(double num1, double num2)
  {
    return num1 / num2;
  }
  double divideArrayNumbers(double * arraylist, int size) {
    double total = 1;
    for (unsigned int i = 0; i < size; i++) {
      total /= arraylist[i] / total;
    }
    return total;
  }
  std::string computePercentageFromArray(double number, double * arraylist, int size) {
    double total = 0;
    for (unsigned int i = 0; i < size; i++) {
      total += arraylist[i];
    }
    double result = (number/total) * 100;

    std::string numberStringFormat = std::to_string(result);
    std::string percentageSymbol = "%";

    return numberStringFormat + percentageSymbol;
  }

  double computeMinimum(double num1, double num2) {
    if (num1 < num2) {
      return num1;
    }
    else if (num1 == num2) {
      return ;
    }
    else {
      return num2;
    }
  }
  double computeMinimumFromArray(double * arraylist, int size) {
    double minValue = arraylist[0];
    for (unsigned int i = 0; i < size; i++) {
      if (arraylist[i] < minValue) {
        minValue = arraylist[i];
      }
    }
    return minValue;
  }
  double computeMaximum(double num1, double num2) {
    if (num1 > num2) {
      return num1;
    }
    else if (num1 == num2) {
      return ;
    }
    else {
      return num2;
    }
  }
protected:
};

#endif // for _MATH_TOOLS__BASIC_TOOL_SET_CPP_MACRO___