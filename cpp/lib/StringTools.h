#ifndef _STRING_TOOLS_MODULE__
#define _STRING_TOOLS_MODULE__

#include <string>

class StringTools {
  private:
  public:
  static int getStringLength(const char *testString) {
    int length = 0;
    while(testString[length] != '\0') {++length;}
    return (int)length;
  }
  static int getWordCount(const char *testString) {
    int length = 0;
    int numberOfWords = 0;
    while(testString[length] != '\0') {++length;}
    for( int count = 0; count < length; count++) {
      if (testString[count] == '\t' || testString[count] == ' ' || testString[count] == '\0') {
        ++numberOfWords;
      }
    }
    return (int)numberOfWords + 1;
  }
  static int getStringCount(const char * testString, const char * word) {
    int wordCount = 0;
    int length = 0;
    int wordLength = 0;

    // computing word length
    while(word[wordLength] != '\0') {++wordLength;}
    // computing main test_string length
    while(testString[length] != '\0') {++length;}
    for( int count = 0; count < length; count++) {
      while(testString[count] != '\0') {
        for( int i = 0; i < wordLength; i++) {
          if(testString[i] != word[i]) {
            ++wordCount;
          } else {
              break;
            }
        }
      }
    }
    return (int)wordCount;
  }
  static int getSymbolCount(const char * testString, const char * symbol) {
    int length = 0;
    int symbolCount = 0;
    int symbolLength = 1;

    // computing testString length
    while(testString[length] != '\0') {++length;}
    for( int count = 0; count < length; count++) {
      int indexValue = symbolLength - 1;
      if(testString[count] == symbol[indexValue]) {++symbolCount;}
    }
    return (int)symbolCount;
  }

  static char * connectStrings(const char * testString, const char * joinableString) {
    int lengthOfTestString = 0;
    int lengthOfJoinableString = 0;
    while(testString[lengthOfTestString] != '\0') {++lengthOfTestString;}
    while(joinableString[lengthOfJoinableString] != '\0') {++lengthOfJoinableString;}
    // int testStringLength = lengthOfTestString;
    // int joinableStringLength = lengthOfJoinableString;
    // const int totalLength = joinableStringLength + testStringLength;
    char joinedString[100];     // this is causing an error case due to the explicit usage of const int operation
    int currentIndex = 0;
    for( int count = 0; count < lengthOfTestString; count++) {
      joinedString[count] = testString[count];
      currentIndex++;
    }
    for( int count = 0; count < lengthOfJoinableString; count++) {
      joinedString[count + currentIndex] = joinableString[count];
      currentIndex++;
    }
    return joinedString;
  }

  static void copyString(char *(&testString), const char * stringToCopy) {
    int testStringLength = 0;
    while(testString[testStringLength] != '\0') {++testStringLength;}
    int stringToCopyLength = 0;
    while(stringToCopy[stringToCopyLength] != '\0') {++stringToCopyLength;}

    // now we have lengths of all the strings
    for( int count = 0; count < testStringLength; count++) {
      testString[count] = '\0';
    }
    testStringLength = 0;
    for( int count = 0; count < stringToCopyLength; count++) {
      testString[count] = stringToCopy[count];
      ++testStringLength;
    }
  }

  static int getCapitalLetterCount(const char * testString) {
    int length = getStringLength(testString);
    int numberOfCapitalLetters = 0;
    for( int count = 0; count < length; count++) {
      if(std::isupper(testString[count])) {
        numberOfCapitalLetters++;
      }
    }
    return (int)numberOfCapitalLetters;
  }
  static int getLowerLetterCount(const char * testString) {
    int length = getStringLength(testString);
    int numberOfLowerLetter = 0;
    for( int count = 0; count < length; count++) {
      if(std::islower(testString[count])) {
        numberOfLowerLetter++;
      }
    }
  }

  static bool compareString(const char * testString, const char * sourceString) {
    int vecCount = 0;
    if(std::strlen(testString) == std::strlen(sourceString)) {
      for( int count = 0; count < (signed int)std::strlen(testString); count++) {
        if(testString[count] == sourceString[count]) ++vecCount;
        else break;
      }
    }
      return std::strlen(testString) == vecCount && std::strlen(sourceString) == vecCount;
  }
  
  protected:
};

#endif  // _STRING_TOOLS_MODULE__