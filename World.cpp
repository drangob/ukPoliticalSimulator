/*
 * World.cpp
 *
 *  Created on: 21 May 2017
 *      Author: thomas
 */
#include "World.h"
#include <iostream>
#include <string>
#include <chrono>
#include <thread>

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

//Advances time and ages population, returns quitGame as true if the user chooses to quit.
void World::ClockTick(bool *quitGame){
	//Move clock forwards
	Time+=0.25;
	//print current year
	cout<<"Year: "<<this->GetTime()<<endl;

	//Following code makes the system sleep for half a second
    using namespace std::chrono_literals;
    auto start = std::chrono::high_resolution_clock::now();
    //Edit this line to adjust sleep time
    std::this_thread::sleep_for(0.5s);
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> elapsed = end-start;

    //print player name and age
    cout << player->getName() << " is " << player->getAge() << " years old";
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

