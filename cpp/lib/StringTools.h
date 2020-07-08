#ifndef _STRING_TOOLS_MODULE__
#define _STRING_TOOLS_MODULE__

class StringTools {
  private:
  public:
  int getStringLength(char *testString) {
    int length = 0;
    while(testString[length] != '\0') {++length;}
    return (int)length;
  }
  int getWordCount(char *testString) {
    int length = 0;
    int numberOfWords = 0;
    while(testString[length] != '\0') {++length;}
    for(unsigned int count = 0; count < length; count++) {
      if (testString[count] == '\t' || testString[count] == ' ' || testString[count] == '\0') {
        ++numberOfWords;
      }
    }
    return (int)numberOfWords;
  }
  int getStringCount(char * testString, char * word) {
    int wordCount = 0;
    int length = 0;
    int wordLength = 0;

    // computing word length
    while(word[wordLength] != '\0') {++wordLength;}
    // computing main test_string length
    while(testString[length] != '\0') {++length;}
    for(unsigned int count = 0; count < length; count++) {
      while(testString[count] != '\0') {
        for(unsigned int i = 0; i < wordLength; i++) {
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
  int getSymbolCount(char * testString, char * symbol) {
    int length = 0;
    int symbolCount = 0;
    int symbolLength = 1;

    // computing testString length
    while(testString[length] != '\0') {++length;}
    for(unsigned int count = 0; count < length; count++) {
      int indexValue = symbolLength - 1;
      if(testString[count] == symbol[indexValue]) {++symbolCount;}
    }
    return (int)symbolCount;
  }

  char * connectStrings(char * testString, char * joinableString) {
    int lengthOfTestString = 0;
    int lengthOfJoinableString = 0;
    while(testString[lengthOfTestString] != '\0') {++lengthOfTestString;}
    while(joinableString[lengthOfJoinableString] != '\0') {++lengthOfJoinableString;}
    // int testStringLength = lengthOfTestString;
    // int joinableStringLength = lengthOfJoinableString;
    // const int totalLength = joinableStringLength + testStringLength;
    char joinedString[1000];     // this is causing an error case due to the explicit usage of const int operation
    int currentIndex = 0;
    for(unsigned int count = 0; count < lengthOfTestString; count++) {
      joinedString[count] = testString[count];
      currentIndex++;
    }
    for(unsigned int count = 0; count < lengthOfJoinableString; count++) {
      joinedString[count + currentIndex] = joinableString[count];
      currentIndex++;
    }
  }

  protected:
};

#endif  // _STRING_TOOLS_MODULE__