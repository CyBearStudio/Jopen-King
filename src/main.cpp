#include "Game.h"
#include <SFML/Graphics.hpp>


int main(int argc, char* argv[]) {

  Game game; // creating a new game object

  std::cout << "Version " << myproject_VERSION_MAJOR << "." << myproject_VERSION_MINOR << std::endl;

  game.init(); // initializing the game
  game.run(); // running the game

  return 0;
}
