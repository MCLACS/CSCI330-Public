#ifndef FILEWRITER_H
#define FILEWRITER_H

#include <fstream>
#include <string>

using namespace std;

class FileWriter
{
public:
    FileWriter(const char * file);
    FileWriter(const string& s);
    FileWriter(const FileWriter& fw);
    virtual ~FileWriter();
    void writeLine(const char * str);
    void writeLine(const string & str);
    void close();
private:
    ofstream m_output;
    string m_fileName;
};

#endif
