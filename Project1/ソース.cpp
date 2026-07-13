#include <iostream>
#include<cstdlib>
#include<ctime>
#include "ƒwƒbƒ_[.h"
using namespace std;

int main(void)
{
	int exp = 0;
	int level = 1;

	srand((unsigned int)time(NULL));

	while (true)
	{
		Game(exp, level);
	}

	return 0;
}