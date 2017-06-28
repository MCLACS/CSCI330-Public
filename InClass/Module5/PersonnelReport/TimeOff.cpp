#include "TimeOff.h"

TimeOff::TimeOff() : m_earnedSickDays(0), m_earnedVacationDays(0)
{
}

void TimeOff::setMonthsWorked(double months)
{
  m_earnedSickDays.setHours(8*months);
  m_earnedVacationDays.setHours(12*months);
}

double TimeOff::getSickDays() const
{
  return m_earnedSickDays.getDays();
}

double TimeOff::getVacationDays() const
{
  return m_earnedVacationDays.getDays();
}
