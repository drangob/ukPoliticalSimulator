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
	//Check if the game needs to be loaded or not
	if(loadGame) LoadGame();
	else NewGame();
}

//The current 1/4 year
double Time;

//Create the
Player World::*player;

//Returns the current time
double World::GetTime(){
	return Time;
}

//Creates the new World
void World::NewGame(){
	//Set start date
	Time = 1985;

	//Set the name
	cout << "What is your name?" << endl;
	string name;
	cin >> name;

	//get gender
	bool isMale;
	bool stupidUser=true;
	string userInput;
	cout << "Are you a male?" << endl;
	while (stupidUser){
		cin >> userInput;
		if(userInput=="y"){
			stupidUser=false;
			isMale=true;
		}
		else if(userInput=="n"){
			stupidUser=false;
			isMale=false;
		}
		else{
			cout<< "That was not a 'y' or an 'n', try again"<< endl;
		}

	//Set up player object with given details
	this->player = new Player(name,10,isMale);
	}

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
			cout<< "That was not a 'y' or an 'n', try again"<< endl;
		}
	}

}

