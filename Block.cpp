/*
 * Block.cpp
 *
 *  Created on: Sep 20, 2020
 *      Author: pwilk
 */


#include "Block.h"


Block::Block()
{
	rect->w = Width;
	rect->h = Height;
}

Block::~Block(){
	delete rect;
}

void Block::SetColor(Uint8 red, Uint8 green, Uint8 blue)
{
	r = red;
	g = green;
	b = blue;
}

void Block::OnRender(SDL_Renderer* renderer){
	SDL_SetRenderDrawColor(renderer, r, g, b, 0);
	SDL_RenderFillRect(renderer, rect);
}

