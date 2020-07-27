#ifndef _MATH_TOOLS__BOOLEAN_ALGEBRA__
#define _MATH_TOOLS__BOOLEAN_ALGEBRA__

class BooleanAlgebra {
  private:
  static bool permission;
  public:
  explicit BooleanAlgebra(const bool);
  static const bool addBoolean(const bool, const bool);
  static const bool productBoolean(const bool, const bool);
  static const bool getCompliment(const bool);
  static void handleActivationError() {
    std::cout << "MethodNotActivated: Error Handler Says" << std::endl;
  }
  protected:
};

explicit BooleanAlgebra::BooleanAlgebra(bool activation = false) {
  if (activation == true) permission = activation;
}

const bool BooleanAlgebra::addBoolean(const bool input1, const bool input2) {
  if (permission == true) return input1 + input2;
  else BooleanAlgebra::handleActivationError();
}
const bool BooleanAlgebra::productBoolean(const bool input1, const bool input2) {
  if (permission == true) return input1 * input2;
  else BooleanAlgebra::handleActivationError();
}
const bool BooleanAlgebra::getCompliment(const bool input) {
  if (permission == true) return !input;
  else BooleanAlgebra::handleActivationError();
}


#endif // _MATH_TOOLS__BOOLEAN_ALGEBRA__