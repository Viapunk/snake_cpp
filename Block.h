/*
 * Block.h
 *
 *  Created on: Sep 20, 2020
 *      Author: pwilk
 */

#ifndef BLOCK_H_
#define BLOCK_H_

#include <SDL2/SDL.h>
#include <vector>
#include <iostream>

class Block
{
	Block(int x, int y);
	~Block();

	void SetColor(Uint8 r, Uint8 g, Uint8 b);
	void OnRender(SDL_Renderer* renderer);

public:

	SDL_Rect* rect;

private:
	int Width={20};
	int Height={20};
	Uint8 r, g, b;

};

#endif /* BLOCK_H_ */
