#ifndef ATTACKING_H
#define ATTACKING_H

#include <State.h>

class Attacking : public State
{
public:
	Attacking() {};
	~Attacking() {};
	void idle(PlayerFSM* a);
	void jumping(PlayerFSM* a);
	void climbing(PlayerFSM* a);
};

#endif // !IDLE_H