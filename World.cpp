/*
 * World.cpp
 *
 *  Created on: 21 May 2017
 *      Author: thomas
 */
#include "World.h"
#include <iostream>
#include <string>

#include "Person.h"
#include "Player.h"
#include "Family.h"

using namespace std;

World::World(bool loadGame) {
	//I'm using this syntax because I like it and I know you hate it!
	if(loadGame==true)LoadGame();
	else NewGame();
	// TODO Auto-generated constructor stub

}

//The current 1/4 year
double Time;

//Returns the current time
double GetTime(){
	return Time;
}

//Creates the new World
void World::NewGame(){
	//TODO Generate the people and player
	Time = 1985;
}
//Loads the game
void World::LoadGame(){
	//TODO Load the people, player and current time

}
void World::SaveGame(){
	//TODO Implement save game
	cout<<"SAVED!"<<endl;
}

//Advances time and ages population
void World::ClockTick(){
	Time+=0.25;

}

World::~World() {
	//Check if player would like to save
	cout << "Would you like to save your game?(y/n)" << endl;

	//
	bool stupidUser=true;
	string userInput;

	while (stupidUser){
		cin >> userInput;

		if(userInput=="y"){
			SaveGame();
			stupidUser=false;
		}
		else if(userInput=="n"){
			stupidUser=false;
		}
		else{
			cout<< "That was not a y or an n, try again"<< endl;
		}
	}

}

