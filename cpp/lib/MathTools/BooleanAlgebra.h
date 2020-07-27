#ifndef _MATH_TOOLS__BOOLEAN_ALGEBRA__
#define _MATH_TOOLS__BOOLEAN_ALGEBRA__

class BooleanAlgebra {
  private:
  bool permission;
  public:
  explicit BooleanAlgebra(const bool);
  static const bool addBoolean(const bool input1, const bool input2) {
    return input1 + input2;
  }
  protected:
};

explicit BooleanAlgebra::BooleanAlgebra(bool activation = false) {
  if (activation == true) permission = activation;
}


#endif // _MATH_TOOLS__BOOLEAN_ALGEBRA__