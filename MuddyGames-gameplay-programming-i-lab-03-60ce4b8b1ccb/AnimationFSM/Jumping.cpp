#include <Jumping.h>
#include <Climbing.h>
#include <Idle.h>
#include <Attacking.h>
#include <Left.h>
#include <Right.h>
#include <string>
#include <Windows.h>

void Jumping::idle(PlayerFSM* a)
{
	std::cout << "Jumping -> Idle" << std::endl;
	Beep(523, 500); // 523 hertz (C5) for 500 milliseconds  
	a->setCurrent(new Idle());
	delete this;
}
void Jumping::climbing(PlayerFSM* a)
{
	std::cout << "Jumping -> Climbing" << std::endl;
	Beep(523, 500); // 523 hertz (C5) for 500 milliseconds  
	a->setCurrent(new Climbing());
	delete this;
}

void Jumping::attacking(PlayerFSM* a)
{
	std::cout << "Jumping -> Attacking" << std::endl;
	Beep(523, 500); // 523 hertz (C5) for 500 milliseconds  
	a->setCurrent(new Attacking());
	delete this;
}


void Jumping::right(PlayerFSM * a)
{
	std::cout << "Jumping -> Right" << std::endl;
	Beep(523, 500); // 523 hertz (C5) for 500 milliseconds  
	a->setCurrent(new Right());
	delete this;
}

void Jumping::left(PlayerFSM * a)
{
	std::cout << "Jumping -> Left" << std::endl;
	Beep(523, 500); // 523 hertz (C5) for 500 milliseconds  
	a->setCurrent(new Left());
	delete this;
}