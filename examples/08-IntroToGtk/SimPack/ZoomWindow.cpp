#include "ZoomWindow.h"
#include "SimApp.h"

void ZoomWindow::zoomOut() 
{
	SimApp::setMetersPerPixel(SimApp::getMetersPerPixel()+0.1); 
}

void ZoomWindow::zoomIn()
{
	if (SimApp::getMetersPerPixel() > 0.2)
		SimApp::setMetersPerPixel(SimApp::getMetersPerPixel()-0.1); 
}