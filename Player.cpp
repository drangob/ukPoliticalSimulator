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

Player::Player() {
	// TODO Auto-generated constructor stub
	Person newDude("Billy Bloggs",2,true,110);
	cout<<newDude.getName()<<endl;
	cout<<"test"<<endl;

}

Player::~Player() {
	// TODO Auto-generated destructor stub
}
