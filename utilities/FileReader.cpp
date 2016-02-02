#include "FileReader.h"
#include <iostream>
#include <cstdlib>

using namespace std;

FileReader::FileReader(const FileReader& fr)
  : m_fileName(fr.m_fileName), m_input(), m_lastLine()
{
  m_input.open(m_fileName.c_str());
}

FileReader::FileReader(const string& s) : m_fileName(s), m_input(), m_lastLine()
{
  m_input.open(m_fileName.c_str());
  if (!m_input.is_open())
      throw "Error: file not found";
}

FileReader::FileReader(const char * s) : m_fileName(s), m_input(), m_lastLine()
{
    m_input.open(m_fileName.c_str());
    if (!m_input.is_open())
        throw "Error: file not found";
}

FileReader::~FileReader()
{
    if (m_input.is_open())
        m_input.close();
}

bool FileReader::next()
{
  string line("");
  getline(m_input, m_lastLine);
  return (!m_input.eof());
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
