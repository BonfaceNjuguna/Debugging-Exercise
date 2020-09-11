#pragma once

#include "Entity.h"
class Zergling : public Entity
{
public:
	Zergling();
	Zergling(int h);
	~Zergling();

	int attack();
	void takeDamage(int damage);

};

