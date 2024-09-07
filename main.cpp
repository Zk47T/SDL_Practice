#include <iostream>

#include <SDL2/SDL.h>

using namespace std;

int main()
{
    SDL_Window* window = nullptr;
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        cout << "SDL could not be init " << SDL_GetError();
    }
    else
    {
        cout << "SDL Ready\n";
    }
    
    
    window = SDL_CreateWindow("Hello", 0 , 250, 640,480, SDL_WINDOW_SHOWN);
    if (window == NULL)
    {
        cout<< "Could not create window " <<SDL_GetError();
        return 1;
    }

    bool gameIsRunning = true;

    while(gameIsRunning)
    {
        SDL_Event event;
        //Start our event loop
        while (SDL_PollEvent(&event))
        {
            //Handle each specific event
            if(event.type == SDL_QUIT)
            {
                gameIsRunning = false;
            }
        }
        
    }

    SDL_DestroyWindow(window);
    
    SDL_Quit();

    return 0;
}
