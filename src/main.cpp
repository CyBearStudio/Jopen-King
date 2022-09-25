#include "config.h"
#include <iostream>
#include <SFML/Graphics.hpp>


int main(int argc, char* argv[]) {

  // Code adapted from the SFML 2 "Window" example.

  std::cout << "Version " << myproject_VERSION_MAJOR << "." << myproject_VERSION_MINOR << std::endl;

  sf::Window App(sf::VideoMode(800, 600), "Jopen-King");

  while (App.isOpen()) {
    sf::Event Event;
    while (App.pollEvent(Event)) {
      if (Event.type == sf::Event::Closed)
	App.close();
    }
    App.display();
  }

  return 0;

}
