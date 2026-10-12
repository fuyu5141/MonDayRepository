#include "Character.h"
#include<iostream>
using namespace std;


Character::Character(string name)
{
	this->name = name;
}

string Character::Getname()
{
	return name;
}

void Character::Attack()
{
	cout << name << "UŒ‚I" << endl;
}