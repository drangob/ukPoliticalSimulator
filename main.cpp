#include "World.h"

#include <string>
#include <iostream>

using namespace std;

//main method for game running, processing in World, display done here
int main(int argc, char const *argv[]) {

	//Find out if user would like to load game
	cout<<"Would you like to load game? type 'y' or 'n'" << endl;

	bool *stupidUser = new bool;
	//User is stupid if they can't type a y or n
	*stupidUser=true;
	bool loadGame;
	string userInput;

	while (*stupidUser){
		cin >> userInput;
		if(userInput=="y"){
			*stupidUser=false;
			loadGame=true;
		}
		else if(userInput=="n"){
			*stupidUser=false;
			loadGame=false;
		}
		else{
			cout<< "That was not a 'y' or an 'n', try again"<< endl;
		}
	}

	World *world = new World(loadGame);

	//Might as well keep using stupidUser
	*stupidUser=true;
	while(*stupidUser){
		world->ClockTick(stupidUser);
	}
	delete world;
}
