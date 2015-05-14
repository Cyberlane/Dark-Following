#include <iostream>

using namespace std;

#include "Game.h"

int main(int argc, char**argv)
{
	Game* game = new Game();
	cout << "Hello! The game "<< game->GetName() <<" has been instantiated." << endl;
	return 0;
}