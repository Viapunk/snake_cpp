/*
 * App_Init.cpp
 *
 *  Created on: Sep 23, 2020
 *      Author: pwilk
 */

#include <App.h>

App::~App(){
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	delete surface;
}

void App::OnInit(int width, int height)
{
	SDL_Init(SDL_INIT_EVERYTHING);
	window 	 = SDL_CreateWindow("Snake by Viapunk", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_SHOWN);
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	surface  = SDL_GetWindowSurface(window);
}
