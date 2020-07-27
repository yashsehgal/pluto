#ifndef _MATH_TOOLS__BOOLEAN_ALGEBRA__
#define _MATH_TOOLS__BOOLEAN_ALGEBRA__

#include <iostream>

class BooleanAlgebra {
  private:
  static bool permission;
  public:
  explicit BooleanAlgebra(bool activation) {
      permission = activation;
  }
  static bool addBoolean(const bool input1, const bool input2) {
      if (permission) return input1 + input2;
      else BooleanAlgebra::handleActivationError();
  }
  static bool productBoolean(const bool input1, const bool input2) {
      if (permission) return input1 * input2;
      else BooleanAlgebra::handleActivationError();
  }
  static bool getCompliment(const bool input) {
      if (permission) return !input;
      else BooleanAlgebra::handleActivationError();
  }
  static void handleActivationError() {
    std::cout << "MethodNotActivated: Error Handler Says" << std::endl;
  }
  protected:
};

//BooleanAlgebra::BooleanAlgebra(bool activation) {
//  if (activation) permission = activation;
//  else permission = false;
//}

//bool BooleanAlgebra::addBoolean(const bool input1, const bool input2) {
//  if (permission) return input1 + input2;
//  else BooleanAlgebra::handleActivationError();
//}
//bool BooleanAlgebra::productBoolean(const bool input1, const bool input2) {
//  if (permission) return input1 * input2;
//  else BooleanAlgebra::handleActivationError();
//}
//bool BooleanAlgebra::getCompliment(const bool input) {
//  if (permission) return !input;
//  else BooleanAlgebra::handleActivationError();
//}


#endif // _MATH_TOOLS__BOOLEAN_ALGEBRA__