/*
 * World.h
 *
 *  Created on: 21 May 2017
 *      Author: thomas
 */

#ifndef WORLD_H_
#define WORLD_H_

#include "Person.h"
#include "Player.h"
#include "Family.h"

class World {
public:
	World(bool loadGame);
	virtual ~World();
	void ClockTick();
	double GetTime();
private:
	void NewGame();
	void LoadGame();
	void SaveGame();
	Player *player;
	double Time;
};


#endif /* WORLD_H_ */
