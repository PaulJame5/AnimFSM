#include <Left.h>
#include <Attacking.h>
#include <Climbing.h>
#include <Jumping.h>
#include <Right.h>
#include <Idle.h>
#include <Windows.h>
#include <string>

void Left::idle(PlayerFSM* a)
{
	std::cout << "Left -> Idle" << std::endl;
	Beep(523, 500); // 523 hertz (C5) for 500 milliseconds  
	a->setCurrent(new Idle());
	delete this;
}
void Left::jumping(PlayerFSM* a)
{
	std::cout << "Left -> Jump" << std::endl;
	Beep(523, 500); // 523 hertz (C5) for 500 milliseconds  
	a->setCurrent(new Jumping());
	delete this;
}


void Left::attacking(PlayerFSM* a)
{
	std::cout << "Left -> Attacking" << std::endl;
	Beep(523, 500); // 523 hertz (C5) for 500 milliseconds  
	a->setCurrent(new Attacking());
	delete this;
}

void Left::climbing(PlayerFSM* a)
{
	std::cout << "Left -> Climbing" << std::endl;
	Beep(523, 500); // 523 hertz (C5) for 500 milliseconds  
	a->setCurrent(new Climbing());
	delete this;
}

void Left::right(PlayerFSM * a)
{
	std::cout << "Left -> Right" << std::endl;
	Beep(523, 500); // 523 hertz (C5) for 500 milliseconds  
	a->setCurrent(new Right());
	delete this;
}

