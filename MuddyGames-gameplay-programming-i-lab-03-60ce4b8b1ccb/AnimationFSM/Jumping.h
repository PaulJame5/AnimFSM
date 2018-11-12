#ifndef JUMPING_H
#define JUMPING_H

#include <State.h>

class Jumping : public State
{
public:
	Jumping() {};
	~Jumping() {};
	void idle(PlayerFSM* a);
	void climbing(PlayerFSM* a);
	void attacking(PlayerFSM* a);
	void left(PlayerFSM* a);
	void right(PlayerFSM* a);
};

#endif // !IDLE_H