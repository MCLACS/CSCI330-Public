#include "NumDays.h"

NumDays::NumDays(double hours) : m_hours(hours)
{
  setHours(hours);
}

double NumDays::getHours() const
{
  return m_hours;
}

double NumDays::getDays() const
{
  return m_days;
}

void NumDays::setHours(double hours)
{
  m_hours = hours;
  m_days = m_hours/8.0;
}

void NumDays::setDays(double days)
{
  m_days = days;
  m_hours = m_days*8.0;
}

NumDays NumDays::operator+(const NumDays& other) const
{
  NumDays temp(getHours() + other.getHours());
  return temp;
}

NumDays NumDays::operator-(const NumDays& other) const
{
  NumDays temp(getHours() - other.getHours());
  return temp;
}

NumDays & NumDays::operator++()
{
    setHours(getHours()+1);
    return *(this);
}

NumDays NumDays::operator++(int i)
{
  NumDays temp(getHours());
  setHours(getHours()+1);
  return temp;
}

NumDays NumDays::operator--()
{
  setHours(getHours()-1);
  return *this;
}

NumDays NumDays::operator--(int i)
{
  NumDays temp(getHours());
  setHours(getHours()-1);
  return temp;
}
