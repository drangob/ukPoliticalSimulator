/*
 * Player.cpp
 *
 *  Created on: 19 May 2017
 *      Author: dan
 */

#include <iostream>
#include <string>

#include "Player.h"
#include "Person.h"

using namespace std;


int Player::die(){
	//Death
	cout << "You have died a the age of " << getAge() << endl;
}

Player::~Player() {
	// TODO Auto-generated destructor stub
}
