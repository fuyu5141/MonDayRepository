#include<iostream>
#include"Character.h"
using namespace std;
int main(void)
{
	Character character ("‚ ‚ ‚ ‚ ");
	cout << character.Getname() << endl;

	character.Attack();
	return 0;
}