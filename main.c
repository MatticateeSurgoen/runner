// Using standard, SDL, SDL_image, SDL_mixer, stdlib, 
// stdbool, string, math

#include <stdio.h>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

struct gameTexture
{
	// The actual hardware texture 
	SDL_Texture* mTexture;

	// image dimensions
	int mWidth;
	int mHeight;
};
