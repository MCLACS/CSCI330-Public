#ifndef PARTICLE_PLAYGROUND_H
#define PARTICLE_PLAYGROUND_H

#include <gtkmm/drawingarea.h>
#include <vector>
#include "ParticleBase.h"
#include "TimeKeeper.h"

using namespace std;

class ParticlePlayground : public Gtk::DrawingArea, public TimeKeeper
{
public:
	ParticlePlayground();
  	virtual ~ParticlePlayground();
  	void add(ParticleBase* p);
  	virtual void tick(long t);

protected:

	virtual bool on_draw(const Cairo::RefPtr<Cairo::Context>& cr);

private:

	vector<ParticleBase*> m_particles;
};

#endif