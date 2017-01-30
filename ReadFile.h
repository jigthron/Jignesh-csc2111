#if !defined READ_FILE
#define READ_FILE

#include "Text.h"

#include <fstream>
using namespace std;

class ReadFile
{
  Private:
     ifstream input_file;
     bool _eof;
     bool closed;
  Public:
    ReadFile(const char* file_name);
    ~ReadFile(ReadFile* rf);
    String* readLine(ReadFile* rf);
    bool eof(ReadFile* rf);
    void close(ReadFile* rf);
};



#endif
