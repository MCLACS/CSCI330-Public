#ifndef FILEREADER_H
#define FILEREADER_H

#include <fstream>
#include <string>

using namespace std;

class FileReader
{
public:
    FileReader(const char * file);
    FileReader(const string& s);
    FileReader(const FileReader& fr);
    virtual ~FileReader();
    bool next();
    string readString();
    int readInt();
    double readDouble();

private:
    ifstream m_input;
    string m_lastLine;
    string m_fileName;
};

#endif
