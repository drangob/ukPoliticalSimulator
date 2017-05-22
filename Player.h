/*
 * Player.h
 *
 *  Created on: 19 May 2017
 *      Author: dan
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include "Person.h"

class Player: Person {
public:
	using Person::Person;
	virtual ~Player();
	void die() override;
};

#endif /* PLAYER_H_ */
