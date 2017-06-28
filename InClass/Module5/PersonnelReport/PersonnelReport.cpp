#include "PersonnelReport.h"

PersonnelReport::PersonnelReport(const string& name,
  const string& id, double months) : m_name(name), m_id(id), m_timeOff()
{
  m_timeOff.setMonthsWorked(months);
}

ostream& operator <<(ostream & out, const PersonnelReport& rpt)
{
  out << rpt.m_name << " (" << rpt.m_id << ") Days Off:"
    << rpt.m_timeOff.getSickDays() << " Sick Days: "
    << rpt.m_timeOff.getVacationDays();
  return out;
}
