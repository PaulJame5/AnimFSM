#include <Climbing.h>
#include <Jumping.h>
#include <Idle.h>
#include <Left.h>
#include <Right.h>
#include <Windows.h>
#include <string>

void Climbing::idle(PlayerFSM* a)
{
	std::cout << "Climbing -> Idle" << std::endl;
	Beep(523, 500); // 523 hertz (C5) for 500 milliseconds  
	a->setCurrent(new Idle());
	delete this;
}
void Climbing::jumping(PlayerFSM* a)
{
	std::cout << "Climbing -> Jump" << std::endl;
	Beep(523, 500); // 523 hertz (C5) for 500 milliseconds  
	a->setCurrent(new Jumping());
	delete this;
}

void Climbing::right(PlayerFSM * a)
{
	std::cout << "Climbing -> Right" << std::endl;
	Beep(523, 500); // 523 hertz (C5) for 500 milliseconds  
	a->setCurrent(new Right());
	delete this;
}

void Climbing::left(PlayerFSM * a)
{
	std::cout << "Climbing -> Left" << std::endl;
	Beep(523, 500); // 523 hertz (C5) for 500 milliseconds  
	a->setCurrent(new Left());
	delete this;
}
