#ifndef SIM_MAIN_WIN_H
#define SIM_MAIN_WIN_H

#include <gtkmm.h>

class SimMainWindow : public Gtk::Window
{
public:
 	SimMainWindow()
  	{
		add_events(Gdk::KEY_PRESS_MASK);
  	}
  	virtual ~SimMainWindow() {};

protected:
	virtual void zoomIn() {};
	virtual void zoomOut() {};

private:
	virtual bool on_key_press_event(GdkEventKey* event);
};

#endif