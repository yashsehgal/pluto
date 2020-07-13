#ifndef _LINEAR_ALGEBRA_MATH_TOOLS__
#define _LINEAR_ALGEBRA_MATH_TOOLS__

#include <iostream>
#include <string>

class LinearAlgebra {
  private:
    char *mode;
  public:
    LinearAlgebra(char * command = "basic") {
      if (mode == "advanced") {
        mode = command;
      }
      else {
        std::cout << "use valid mode!" << std::endl;
      }
    }
    double * getCoordinates_XY(double a1, double a2,
      double b1, double b2, double c1, double c2) {
        double yValue = (((a1 * c2) - (a2 * c1)) / ((a2 * b1) + (a1 * b2)));
        double xValue = ((c1 - (b1 * yValue)) / a1);
        double result[] = {xValue, yValue};
        return result;
    }
    double * getCoordinates_XY(int a1, int a2,
      int b1, int b2, int c1, int c2) {
      double yValue = (((a1 * c2) - (a2 * c1)) / ((a2 * b1) + (a1 * b2)));
      double xValue = ((c1 - (b1 * yValue)) / a1);
      double result[] = {xValue, yValue};
      return result;
    }
    double * getCoordinates_XY(float a1, float a2,
      float b1, float b2, float c1, float c2) {
      double yValue = (((a1 * c2) - (a2 * c1)) / ((a2 * b1) + (a1 * b2)));
      double xValue = ((c1 - (b1 * yValue)) / a1);
      double result[] = {xValue, yValue};
      return result;
      }
    std::string getCoordinates(double a1, double a2,
      double b1, double b2, double c1, double c2) {
        double yValue = (((a1 * c2) - (a2 * c1)) / ((a2 * b1) + (a1 * b2)));
        double xValue = ((c1 - (b1 * yValue)) / a1);

        // setting the string result statement
        std::string xValueString = std::to_string(xValue);
        std::string yValueString = std::to_string(yValue);

        return "[x: " + xValueString + ", y: " + yValueString + "]";
    }
  protected:
};

#endif // _LINEAR_ALGEBRA_MATH_TOOLS__