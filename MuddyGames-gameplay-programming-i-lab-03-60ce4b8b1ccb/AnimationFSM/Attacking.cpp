#include <Attacking.h>
#include <Climbing.h>
#include <Jumping.h>
#include <Idle.h>
#include <Windows.h>
#include <string>

void Attacking::idle(PlayerFSM* a)
{
	std::cout << "Attacking -> Idle" << std::endl; 
	Beep(523, 500); // 523 hertz (C5) for 500 milliseconds  
	a->setCurrent(new Idle());
	delete this;
}
void Attacking::jumping(PlayerFSM* a)
{
	std::cout << "Attacking -> Jump" << std::endl;
	Beep(523, 500); // 523 hertz (C5) for 500 milliseconds  
	a->setCurrent(new Jumping());
	delete this;
}

void Attacking::climbing(PlayerFSM * a)
{
	std::cout << "Attacking -> Climbing" << std::endl;
	Beep(523, 500); // 523 hertz (C5) for 500 milliseconds  
	a->setCurrent(new Climbing());
	delete this;
}
