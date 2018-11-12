#ifndef CLIMBING_H
#define CLIMBING_H

#include <State.h>

class Climbing : public State
{
public:
	Climbing() {};
	~Climbing() {};
	void idle(PlayerFSM* a);
	void jumping(PlayerFSM* a);
	void left(PlayerFSM* a);
	void right(PlayerFSM* a);
};

#endif // !IDLE_H