#ifndef STATE_H
#define STATE_H

#include <iostream>
#include <typeinfo>

#include <Input.h>
#include <PlayerFSM.h>
#include <Debug.h>


class State
{
public:

	static int rowAnim; // int used for setting a number based on state in animation

	virtual void handleInput() {}

	virtual void update() {}

	virtual void idle(PlayerFSM* a)
	{
		DEBUG_MSG("State::Idling");
	}
	virtual void jumping(PlayerFSM* a)
	{
		DEBUG_MSG("State::Jumping");
	}
	virtual void climbing(PlayerFSM* a)
	{
		DEBUG_MSG("State::Climbing");
	}
	virtual void attacking(PlayerFSM* a)
	{
		DEBUG_MSG("State::Attacking");
	}

	virtual void right(PlayerFSM* a)
	{
		DEBUG_MSG("State::Right");
	}
	virtual void left(PlayerFSM* a)
	{
		DEBUG_MSG("State::Left");
	}
};

#endif // ! ANIMATION_H

