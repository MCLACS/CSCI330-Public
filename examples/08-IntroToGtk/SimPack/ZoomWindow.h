#ifndef ZOOM_WIN_H
#define ZOOM_WIN_H

#include "SimMainWindow.h"

class ZoomWindow : public SimMainWindow
{
public:
 	ZoomWindow() : SimMainWindow() {};
  	virtual ~ZoomWindow() {};

protected:
	virtual void zoomIn(); 
	virtual void zoomOut();

};

#endif