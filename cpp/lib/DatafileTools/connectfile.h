#ifndef _CONNECT_FILE__SPEECH_TOOLS__
#define _CONNECT_FILE__SPEECH_TOOLS__

#include <iostream>
#include <string>
#include <fstream.h>

class ConnectFile {
  private:
  char * fileMode;
  char * fileType;
  int length;
  int wordCount;
  char * filename;
  bool fileAvailability;
  
  public:
  ConnectFile() {
    filename = '\0';
  }
  ConnectFile(char * filename, char * fileMode = "in", char * fileType = "bin") {
    if (filename == '\0') {
      std::cout << "Please give the file name in order to open it!" << std::endl;
    }
    else if (checkFileStatus(filename, fileMode, fileType)) {

    }
  }
  bool checkFileStatus(char * filename, char * mode, char * type) {
    if (mode == "in") {
      if (type == "bin") {
        ifstream fileObject;
        fileObject.open(filename, ios::in | ios::bin);
      }
      else if (type == "ate") {
        ifstream fileObject;
      }
    }
  }
  protected:
};

#endif // _CONNECT_FILE__SPEECH_TOOLS__