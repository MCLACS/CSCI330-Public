#ifndef TIMEOFF_H
#define TIMEOFF_H

#include "NumDays.h"

class TimeOff
{
private:
  NumDays m_earnedSickDays;
  NumDays m_earnedVacationDays;

public:
  TimeOff();
  void setMonthsWorked(double months);
  double getSickDays() const;
  double getVacationDays() const;
};

#endif
