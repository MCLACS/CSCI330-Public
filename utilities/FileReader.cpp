#include "FileReader.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

FileReader::FileReader(const char * file)
{
    m_input.open(file);
    if (!m_input.is_open())
        throw "Error: file not found";
}

FileReader::~FileReader()
{
    if (m_input.is_open())
        m_input.close();
}

bool FileReader::endOfFile()
{
  string line("");
  getline(m_input, m_lastLine);
  return (m_input.eof());
}

string FileReader::readString()
{
    return m_lastLine;
}

int FileReader::readInt()
{
    return atoi(m_lastLine.c_str());
}

double FileReader::readDouble()
{
    return atof(m_lastLine.c_str());
}
