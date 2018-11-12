#ifndef Left_H
#define Left_H

#include <State.h>

class Left : public State
{
public:
	Left() {};
	~Left() {};
	void idle(PlayerFSM* a);
	void jumping(PlayerFSM* a);
	void attacking(PlayerFSM* a);
	void climbing(PlayerFSM* a);
	void right(PlayerFSM* a);
};

#endif // !LEFT_H