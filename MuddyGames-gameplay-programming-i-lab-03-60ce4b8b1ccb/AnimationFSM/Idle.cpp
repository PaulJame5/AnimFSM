#include <Idle.h>
#include <Jumping.h>
#include <Climbing.h>
#include <Attacking.h>
#include <Left.h>
#include <Right.h>
#include <Windows.h>
#include <string>

void Idle::handleInput() {}
void Idle::update() {}

void Idle::jumping(PlayerFSM* a)
{
	std::cout << "Idle -> Jumping" << std::endl;
	Beep(5000, 500);
	a->setCurrent(new Jumping());
	delete this;
}
void Idle::climbing(PlayerFSM* a)
{
	std::cout << "Idle -> Climbing" << std::endl;
	Beep(5000, 500);
	a->setCurrent(new Climbing());
	delete this;
}
void Idle::attacking(PlayerFSM* a)
{
	std::cout << "Idle -> Attacking" << std::endl;
	Beep(5000, 500);
	a->setCurrent(new Attacking());
	delete this;
}


void Idle::right(PlayerFSM * a)
{
	std::cout << "Idle -> Right" << std::endl;
	a->setCurrent(new Right());
	delete this;
}

void Idle::left(PlayerFSM * a)
{
	std::cout << "Idle -> Left" << std::endl;
	a->setCurrent(new Left());
	delete this;
}