#ifndef CONTEXT_H
#define CONTEXT_H

#include "state.h"
#include <string>
using namespace std;

class Context
{
	StateDay *m_state;
public:
	Context(StateDay* a_state = nullptr) 
	{
		m_state = new StateMorning;
	}

	void ChangeState()
	{
		if(m_state) {
			StateDay* state = m_state->GetNextState();
			delete m_state;
			m_state = state;
		}
	}

	string StateName()
	{
		return m_state->GetName();
	}
};

#endif
