/*
 * grid.cpp
 *
 *  Created on: Sep 20, 2020
 *      Author: pwilk
 */

#include "Grid.h"
#include <cassert>

Grid::Grid(int w, int h){
	assert(w % 20 == 0 && h % 2 == 0);
	width  = w;
	height = h;
}

void Grid::OnRender(SDL_Renderer* renderer)
{
	for (int x=1; x<=width; x+=19){
		SDL_RenderDrawLine(renderer, x, 0, x, height);
		x++;
	}
	for (int y=1; y<=height; y+=19)
	{
		SDL_RenderDrawLine(renderer, 0, y, 0, width);
		y++;
	}
}
