#include <iostream>
#include "state.h"

using namespace std;

	StateDay* StateMorning::GetNextState()
	{
		return new StateEvening;
	}


	StateDay* StateEvening::GetNextState()
	{
		return new StateMorning;
	}
