#include <Right.h>
#include <Attacking.h>
#include <Climbing.h>
#include <Jumping.h>
#include <Left.h>
#include <Idle.h>
#include <string>
#include <Windows.h>

void Right::idle(PlayerFSM* a)
{
	std::cout << "Right -> Idle" << std::endl;
	Beep(523, 500); // 523 hertz (C5) for 500 milliseconds  
	a->setCurrent(new Idle());
	delete this;
}
void Right::jumping(PlayerFSM* a)
{
	std::cout << "Right -> Jump" << std::endl;
	Beep(523, 500); // 523 hertz (C5) for 500 milliseconds  
	a->setCurrent(new Jumping());
	delete this;
}


void Right::attacking(PlayerFSM* a)
{
	std::cout << "Right -> Attacking" << std::endl;
	Beep(523, 500); // 523 hertz (C5) for 500 milliseconds  
	a->setCurrent(new Attacking());
	delete this;
}

void Right::climbing(PlayerFSM* a)
{
	std::cout << "Right -> Climbing" << std::endl;
	Beep(523, 500); // 523 hertz (C5) for 500 milliseconds  
	a->setCurrent(new Climbing());
	delete this;
}

void Right::left(PlayerFSM * a)
{
	std::cout << "Right -> Left" << std::endl;
	Beep(523, 500); // 523 hertz (C5) for 500 milliseconds  
	a->setCurrent(new Right());
	delete this;
}

