#ifndef Right_H
#define Right_H

#include <State.h>

class Right : public State
{
public:
	Right() {};
	~Right() {};
	void idle(PlayerFSM* a);
	void jumping(PlayerFSM* a);
	void attacking(PlayerFSM* a);
	void climbing(PlayerFSM* a);
	void left(PlayerFSM* a);
};

#endif // !RIGHT_H