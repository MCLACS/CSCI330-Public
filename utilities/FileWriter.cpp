#include "FileWriter.h"
#include <iostream>
#include <fstream>

using namespace std;

FileWriter::FileWriter(const FileWriter& fw)
  : m_fileName(fw.m_fileName), m_output()
{
  m_output.open(m_fileName.c_str());
}

FileWriter::FileWriter(const string& s) : m_fileName(s), m_output()
{
  m_output.open(m_fileName.c_str());
  if (!m_output.is_open())
      throw "Error: cannot open file for writing";
}

FileWriter::FileWriter(const char * s) : m_fileName(s), m_output()
{
  m_output.open(m_fileName.c_str());
  if (!m_output.is_open())
      throw "Error: cannot open file for writing";
}

FileWriter::~FileWriter()
{
  if (m_output.is_open())
    m_output.close();
}

void FileWriter::writeLine(const char * str)
{
  m_output << str << endl;
}

void FileWriter::writeLine(const string & str)
{
  m_output << str << endl;
}

void FileWriter::writeLine(int i)
{
  m_output << i << endl;
}

void FileWriter::write(const char * str)
{
  m_output << str;
}

void FileWriter::write(const string & str)
{
  m_output << str;
}

void FileWriter::write(int i)
{
  m_output << i;
}

void FileWriter::close()
{
  m_output.close();
}
