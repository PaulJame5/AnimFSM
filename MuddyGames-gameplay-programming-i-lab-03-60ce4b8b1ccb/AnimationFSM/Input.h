#ifndef INPUT_H
#define INPUT_H
class Input
{
public:
	Input();
	~Input();

	enum Action
	{
		IDLE,
		UP,
		LEFT,
		RIGHT,
		F1,
		F2
	};

	void setCurrent(Action);
	Action getCurrent();

private:
	Action m_current;
};
#endif