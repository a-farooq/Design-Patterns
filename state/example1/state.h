#ifndef STATE_H
#define STATE_H

#include <string>
using namespace std;

class StateDay
{
	public:
		virtual StateDay* GetNextState()=0;
		virtual string GetName() = 0;

		virtual ~StateDay()
		{
		}
};

class StateMorning : public StateDay
{
	StateDay* m_state;

public:
	string GetName()
	{
		return "Morning"; 
	}
	StateDay* GetNextState();
};


class StateEvening : public StateDay
{
public:
	string GetName()
	{
		return "Evening";
	}
	StateDay* GetNextState();
};

#endif
