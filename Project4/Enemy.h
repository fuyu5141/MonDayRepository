#pragma once
#include<string>
#include"Character.h"
class Enemy : public Character
{
public:
	Enemy(string name);
	void Attack() override;

};