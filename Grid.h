/*
 * grid.h
 *
 *  Created on: Sep 20, 2020
 *      Author: pwilk
 */

#ifndef GRID_H_
#define GRID_H_

#include <SDL2/SDL.h>

class Grid{
public:
	Grid(int w, int h);
	~Grid();

	void OnRender(SDL_Renderer* renderer);
private:
	int width;
	int height;
};



#endif /* GRID_H_ */
