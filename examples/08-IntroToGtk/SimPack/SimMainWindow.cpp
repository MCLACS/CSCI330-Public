#include "SimMainWindow.h"
#include "SimApp.h"

bool SimMainWindow::on_key_press_event(GdkEventKey* event)
{
	if(event->keyval == GDK_KEY_i)
	{
        zoomIn();
		return true;
	}
	else if(event->keyval == GDK_KEY_o)
	{
        zoomOut();
		return true;
	}
	else
	{
		return Gtk::Window::on_key_press_event(event);
	}
}
