/*
 * main.cpp
 *
 *  Created on: Sep 20, 2020
 *      Author: pwilk
 */

#include <SDL2/SDL.h>
#include "App.h"

#define WINDOW_WIDTH 	640
#define WINDOW_HEIGHT	480


int main(int argc, char* argv[])
{
	App game = App();

	game.OnInit(WINDOW_WIDTH, WINDOW_HEIGHT);

	Uint32 color = 0xFFFFFFFF;

	SDL_FillRect(surface, NULL, color);
	SDL_UpdateWindowSurface(window);

	SDL_Event e;
	bool quit = false;
	while (!quit) {
	    while (SDL_PollEvent(&e)) {
	        if (e.type == SDL_QUIT) {
	            quit = true;
	        }
	    }
	}

	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);

	return 0;

}
