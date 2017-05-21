/*
 * World.h
 *
 *  Created on: 21 May 2017
 *      Author: thomas
 */

#ifndef WORLD_H_
#define WORLD_H_

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
	double Time;
};


#endif /* WORLD_H_ */
