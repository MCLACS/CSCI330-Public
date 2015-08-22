#include "SimpleParticle.h"
#include "SimApp.h"
#include <iostream>

using namespace std;

void SimpleParticle::draw(int win_height, int win_width, 
  const Cairo::RefPtr<Cairo::Context>& cr)
{
	double xpix = getX() / SimApp::getMetersPerPixel();
	double ypix = getY() / SimApp::getMetersPerPixel();
	double wpix = getW() / SimApp::getMetersPerPixel();
	double hpix = getH() / SimApp::getMetersPerPixel();

	cr->save();

	cr->set_line_width(1.0);

	cr->set_source_rgba(0.0, 0.0, 0.8, 0.6);
	cr->arc(xpix, ypix, wpix / 2.0, 0.0, 2.0 * M_PI);
	cr->fill_preserve();
	cr->stroke();

	cr->restore();
}

void SimpleParticle::tick(long t)
{
}
