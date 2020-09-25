/*
 * App_Rendering.cpp
 *
 *  Created on: Sep 23, 2020
 *      Author: pwilk
 */

#include "App.h"
#include "Block.h"

void App::OnRender()
{
	for(std::vector<Block>::iterator it = Snake.begin(); it != Snake.end(); ++it)
	{
		it->OnRender(renderer);
	}
}


