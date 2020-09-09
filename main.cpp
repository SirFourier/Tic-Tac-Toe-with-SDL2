/* Tic-Tac-Toe using SDL2 */
#include <iostream>
#include <SDL.h>

int main(int argc, char* argcv[])
{
	const int windowWidth = 400;
	const int windowHeight = 400;

	// Initalise SDL video subsystem
	if (SDL_Init(SDL_INIT_VIDEO) != 0)
	{
		std::cout << "SDL could not intialise! Error: " << SDL_GetError() << std::endl;
		return -1;
	}

	// Create window
	SDL_Window* window = SDL_CreateWindow("Sudoku", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, windowWidth, windowHeight, SDL_WINDOW_SHOWN);
	if (window == nullptr)
	{
		std::cout << "SDL could not create window! Error: " << SDL_GetError() << std::endl;
		return -1;
	}

	// Create renderer
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
	if (renderer == nullptr)
	{
		std::cout << "SDL could not create renderer! Error: " << SDL_GetError() << std::endl;
		return -1;
	}

	// Loop variables
	bool stop = false;
	SDL_Event event;

	while (!stop)
	{
		// Handle events on queue
		while (SDL_PollEvent(&event) != 0)
		{
			// Handle quiting
			if (event.type == SDL_QUIT)
			{
				stop = true;
			}
		}
	}

}