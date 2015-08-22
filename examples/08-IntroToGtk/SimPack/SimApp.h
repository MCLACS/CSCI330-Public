#ifndef SIMAPP_H
#define SIMAPP_H

#include <gtkmm.h>
#include <string>
#include <iostream>
#include "ParticlePlayground.h"
#include "TimeKeeper.h"
#include "ZoomWindow.h"

class SimApp : public Gtk::Application, public TimeKeeper
{
public:
	SimApp(int argc, char *argv[], string title, int w, int h);
	virtual ~SimApp() { cout << "Sim Window Destroyed" << endl; }
	virtual void tick(long t) { m_playground.tick(t); }

	static double getSecPerTick() { return s_secPerTick; }
	static double getMetersPerPixel() {return s_metersPerPixel; }
	static void setSecPerTick(double s) { s_secPerTick = s; }
	static void setMetersPerPixel(double m) { s_metersPerPixel = m; } 

private:
	static double s_secPerTick;
	static double s_metersPerPixel;

	ParticlePlayground m_playground;
	Glib::RefPtr<Gtk::Application> m_app;
	ZoomWindow m_window;
};

#endif
