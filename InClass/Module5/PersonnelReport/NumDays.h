#ifndef NUMDAYS_H
#define NUMDAYS_H

class NumDays
{
private:
  double m_hours;
  double m_days;

public:
  NumDays(double hours);

  double getHours() const;
  double getDays() const;

  void setHours(double hours);
  void setDays(double days);

  NumDays operator+(const NumDays& other) const;
  NumDays operator-(const NumDays& other) const;
  NumDays & operator++();
  NumDays operator++(int i);
  NumDays operator--();
  NumDays operator--(int i);

};

#endif
