#ifndef PERSONNELREPORT_H
#define PERSONNELREPORT_H

#include <iostream>
#include "TimeOff.h"
#include <string>

using namespace std;

class PersonnelReport
{
private:
  string m_name;
  string m_id;
  TimeOff m_timeOff;

public:
  PersonnelReport(const string& name, const string& id, double months);
  friend ostream& operator <<(ostream& out, const PersonnelReport& rpt);
};

#endif
