#include <iostream>
#include "context.h"
#include "state.h"
using namespace std;

int main()
{
	Context ctx;
	cout << ctx.StateName() << endl;
	ctx.ChangeState();
	cout << ctx.StateName() << endl;

}
