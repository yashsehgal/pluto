//#pragma clang diagnostic push
//#pragma ide diagnostic ignored "cppcoreguidelines-narrowing-conversions"
#include "main.h"
#include <iostream>

class TesterMain{
private:
//    BasicToolSet basicToolSet;
public:
    static void audit_functions() {
        const char * testString = "helloworld";
        std::cout << "GetStringLength logs> " << StringTools::getStringLength(testString) << std::endl;
        const char * wordCountString = "hello people and human";
        std::cout << "GetWordCount Logs> " << StringTools::getWordCount(wordCountString) << std::endl;
        const char * str1 = "Hey I am Yash Sehgal. I am a developer and Designer";
        const char * str2 = "am";
//        std::cout << "GetStringCount Logs> " << StringTools::getStringCount(str1, str2) << std::endl;
        const char * _str1 = "@yashsehgal";
        const char * _symbol = "@";
        std::cout << "GetSymbolCount Logs> " << StringTools::getSymbolCount(_str1, _symbol) << std::endl;
        const char * str_1 = "yash";
        const char * str_2 = "yassh";
        std::cout << "CompareString Logs> " << StringTools::compareString(str_1, str_2) << std::endl;
    }
};

int main() {
    TesterMain::audit_functions();
    return 0;
}

//#pragma clang diagnostic pop