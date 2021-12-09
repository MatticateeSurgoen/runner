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

/* load texture */
struct LTexture
{
	// The actual hardware texture 
	SDL_Texture* mTexture;

	// image dimensions
	int mWidth;
	int mHeight;
};


/* load From File */
bool LTexture_loadFromFile(struct LTexture*, char*);

/* Load from rendered text */
bool LTexture_loadFromRenderedText(struct LTexture*, char*, SDL_Color);

/* set Color */
void LTexture_setColor(struct LTexture*, Uint8, Uint8, Uint8);

/* set blending mode */
void LTexture_setBlendMode(struct LTexture*, SDL_BlendMode);

/* set alpha modulation */
void LTexture_setAlpha(struct LTexture*, Uint8);

/* get dimension */
int LTexture_getWidth(struct LTexture*);
int LTexture_getHeight(struct LTexture*);



// The application time based timer
struct gTimer
{
	// The clock time when ther timer started
	Uint32 mStartTicks;

	// The ticks stored when the timer was paused
	Uint32 mPausedTicks;

	// The timer status
	bool mPaused;
	bool mStarted;
};

// The various clock actions
void gTimer_start(struct gTimer*);
void gTimer_stop(struct gTimer*);
void gTimer_pause(struct gTimer*);
void gTimer_unpause(struct gTimer*);

// Gets the timer's time
Uint32 gTimer_getTicks(struct gTimer*);

// Checks the status of the timer
bool gTimer_isStarted(struct gTimer*);
bool gTimer_isPaused(struct gTimer*);


