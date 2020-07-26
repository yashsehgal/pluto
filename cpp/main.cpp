//#pragma clang diagnostic push
//#pragma ide diagnostic ignored "cppcoreguidelines-narrowing-conversions"
#include "main.h"
#include <iostream>

class TesterMain{
private:
//    BasicToolSet basicToolSet;
public:
    static void audit_functions() {
        double resultHandler;
        resultHandler = BasicToolSet::addNum(1, 2);
        std::cout << "> " << resultHandler << std::endl;
        resultHandler = BasicToolSet::addNum(1.23, 2.3);
        std::cout << "> " << resultHandler << std::endl;
        std::cout << "> " << resultHandler << std::endl;
        resultHandler = BasicToolSet::subtractNum(5, 3);
        std::cout << "> " << resultHandler << std::endl;
        resultHandler = BasicToolSet::subtractNum(5.4, 5.6);
        std::cout << "> " << resultHandler << std::endl;
        resultHandler = BasicToolSet::productNum(3, 5);
        std::cout << "> " << resultHandler << std::endl;
    }
};

int main() {
    TesterMain::audit_functions();
    return 0;
}

//#pragma clang diagnostic pop