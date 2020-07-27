#ifndef _LINEAR_ALGEBRA_MATH_TOOLS__
#define _LINEAR_ALGEBRA_MATH_TOOLS__

#include <iostream>
#include <string>

class LinearAlgebra {
  private:
    char *mode{};
  public:
    explicit LinearAlgebra(char * command = "basic") {
      if (command == "advanced") {
        mode = command;
      }
      else {
        std::cout << "use valid mode!" << std::endl;
      }
    }
    static const double * getCoordinates_XY(const double a1, const double a2,
      const double b1, const double b2, const double c1, const double c2) {
        const double yValue = (((a1 * c2) - (a2 * c1)) / ((a2 * b1) + (a1 * b2)));
        const double xValue = ((c1 - (b1 * yValue)) / a1);
        const double result[] = {xValue, yValue};
        return result;
    }
    static const double * getCoordinates_XY(const int a1, const int a2,
      const int b1, const int b2, const int c1, const int c2) {
      const double yValue = (((a1 * c2) - (a2 * c1)) / ((a2 * b1) + (a1 * b2)));
      const double xValue = ((c1 - (b1 * yValue)) / a1);
      const double result[] = {xValue, yValue};
      return result;
    }
    static const double * getCoordinates_XY(const float a1, const float a2,
      const float b1, const float b2, const float c1, const float c2) {
      const double yValue = (((a1 * c2) - (a2 * c1)) / ((a2 * b1) + (a1 * b2)));
      const double xValue = ((c1 - (b1 * yValue)) / a1);
      const double result[] = {xValue, yValue};
      return result;
      }
    static const std::string getCoordinates(const double a1, const double a2,
      const double b1, const double b2, const double c1, const double c2) {
        const double yValue = (((a1 * c2) - (a2 * c1)) / ((a2 * b1) + (a1 * b2)));
        const double xValue = ((c1 - (b1 * yValue)) / a1);

        // setting the string result statement
        const std::string xValueString = std::to_string(xValue);
        const std::string yValueString = std::to_string(yValue);

        return "[x: " + xValueString + ", y: " + yValueString + "]";
    }
  protected:
};

#endif // _LINEAR_ALGEBRA_MATH_TOOLS__