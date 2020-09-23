/*
 * main.cpp
 *
 *  Created on: Sep 20, 2020
 *      Author: pwilk
 */

#include <SDL2/SDL.h>

#define WINDOW_WIDTH 	640
#define WINDOW_HEIGHT	480


int main(int argc, char* argv[])
{
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
		printf("Error Initializing SDL");

	SDL_Window* window = 	SDL_CreateWindow("Snake by Viapunk", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WINDOW_WIDTH, WINDOW_HEIGHT, 0);
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	SDL_Surface*  surface =	SDL_GetWindowSurface(window);

	SDL_FillRect(surface, NULL, SDL_MapRGB(surface->format, 0x00, 0x00, 0x00));

	SDL_UpdateWindowSurface(window);
	SDL_Delay(5000);

	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);

}
