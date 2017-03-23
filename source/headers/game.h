/*
 * game.h
 *
 *  Created on: Mar 22, 2017
 *      Author: camtorr95
 */

#ifndef HEADERS_GAME_H_
#define HEADERS_GAME_H_

class Graphics;

class Game {
public:
	Game();
	~Game();
private:
	void gameLoop();
	void draw(Graphics &graphics);
	void update(float elapsedTime);
};

#endif /* HEADERS_GAME_H_ */
