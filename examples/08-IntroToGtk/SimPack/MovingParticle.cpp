#include "MovingParticle.h"
#include "SimApp.h"
#include <iostream>

using namespace std;

void MovingParticle::draw(int win_height, int win_width, 
  const Cairo::RefPtr<Cairo::Context>& cr)
{
  double xpix = getX() / SimApp::getMetersPerPixel();
  double ypix = getY() / SimApp::getMetersPerPixel();
  double wpix = getW() / SimApp::getMetersPerPixel();
  double hpix = getH() / SimApp::getMetersPerPixel();

  cr->save();

  cr->set_line_width(1.0);

  cr->set_source_rgba(0.8, 0.0, 0.0, 0.6);
   
  double topLeftX = xpix-(wpix/2.0);
  double topLeftY = ypix-(hpix/2.0);
  double topRightX = xpix+(wpix/2.0);
  double topRightY = ypix-(hpix/2.0);  
  double botLeftX = xpix-(wpix/2.0);
  double botLeftY = ypix+(hpix/2.0);
  double botRightX = xpix+(wpix/2.0);
  double botRightY = ypix+(hpix/2.0);  

  cr->move_to(topLeftX, topLeftY);
  cr->line_to(topRightX, topRightY);
  cr->line_to(botRightX, botRightY);
  cr->line_to(botLeftX, botLeftY);
  cr->line_to(topLeftX, topLeftY);

  cr->fill_preserve();
  cr->stroke();

  cr->restore();
}

void MovingParticle::tick(long t)
{
	double deltaX = ((getVX() / SimApp::getMetersPerPixel()) * SimApp::getSecPerTick());
	double deltaY = ((getVY() / SimApp::getMetersPerPixel()) * SimApp::getSecPerTick());

	setX(getX() + deltaX);
	setY(getY() + deltaY);
}
