/*
 * graphics.cpp
 *
 * Graphics Class
 * Holds all information dealing with graphics for the game
 *
 *  Created on: Mar 22, 2017
 *      Author: camtorr95
 */

#include "graphics.h"
#include <SDL2/SDL.h>

Graphics::Graphics() {
	SDL_CreateWindowAndRenderer(1080, 720, 0, &this->_window, &this->_renderer);
	SDL_SetWindowTitle(this->_window, "My Cavestory");
}

Graphics::~Graphics() {
	SDL_DestroyWindow(this->_window);
}
