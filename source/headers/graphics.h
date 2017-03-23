/*
 * graphics.h
 *
 *  Created on: Mar 22, 2017
 *      Author: camtorr95
 */

#ifndef HEADERS_GRAPHICS_H_
#define HEADERS_GRAPHICS_H_

struct SDL_Window;
struct SDL_Renderer;

class Graphics {
public:
	Graphics();
	~Graphics();
private:
	SDL_Window *_window;
	SDL_Renderer *_renderer;
};

#endif /* HEADERS_GRAPHICS_H_ */
