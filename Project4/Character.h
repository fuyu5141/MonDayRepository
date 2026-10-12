#pragma once
using namespace std;
#include <string>


class Character
{
private:
	string name;
public:
	Character(string name);

	string Getname();

	virtual void Attack();

};

