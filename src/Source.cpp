#include"../headers/Config.h"
#include"SDL3/SDL.h"

string EndLine = "\n\n";

int main(int argc, char *argv[]) {

	cout << "hi";


	if (!SDL_Init(SDL_INIT_VIDEO)) {

		cout << "SDL could not initialize: " << SDL_GetError();
	}
	else {
		cout << "SDL initialize Correctly" << EndLine;
	}


	return 0;
}
