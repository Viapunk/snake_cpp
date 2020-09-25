/*
 * App.h
 *
 *  Created on: Sep 22, 2020
 *      Author: pwilk
 */

#include <SDL2/SDL.h>
#include <vector>
#include "Block.h"

class App{
public:

	App();
	~App();

	void OnInit(int width, int height);
	void OnEvent();
	void OnRender();

public:
	SDL_Event* event = NULL;
	SDL_Window* window = NULL;
	SDL_Renderer* renderer = NULL;
	SDL_Surface* surface = NULL;
	std::vector<Block> Snake;

};

