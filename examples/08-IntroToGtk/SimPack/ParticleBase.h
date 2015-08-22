#ifndef PARTICLE_BASE_H
#define PARTICLE_BASE_H

#include <gtkmm/drawingarea.h>
#include "TimeKeeper.h"

class ParticleBase : public TimeKeeper
{
public:
    // units for x,w,w,h should be meteres...
    ParticleBase(double x, double y, double w, double h)
      : m_x(x), m_y(y), m_w(w), m_h(h) {};
    
    virtual ~ParticleBase() {};
    
    double getX() const { return m_x; }
    double getY() const { return m_y; }
    double getW() const { return m_w; }
    double getH() const { return m_h; }

    void setX(double x) { m_x = x; }
    void setY(double y) { m_y = y; }
    void setW(double w) { m_w = w; }
    void setH(double h) { m_h = h; }

    virtual void draw(int win_height, int win_width, 
  		const Cairo::RefPtr<Cairo::Context>& cr) = 0;
    virtual void tick(long t) = 0;

private:
  double m_x;
  double m_y;
  double m_w;
  double m_h;
};

#endif