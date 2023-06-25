# Jopen-King
Open source replica of the Jump King game.

The game is coded in C++11.

## Dependencies

[<img src="https://www.sfml-dev.org/images/logo.png">](https://www.sfml-dev.org/index.php)

## Resources

[SFML Wiki](https://github.com/SFML/SFML/wiki)

[SFML Documentation](https://www.sfml-dev.org/documentation/2.5.1/)

[SFML Tutorials](https://www.sfml-dev.org/tutorials/2.5/)

## How to compile

Using [CMAke](https://cmake.org "cmake.org") to compile is recommended.

**Having access to the repository is needed.**

### Cloning with HTTP

**Github identification is required when cloning with HTTP.**

```
git clone https://github.com/CyBearStudio/Jopen-King.git
cd within_darkness
mkdir build
cd build
cmake ..
cmake --build .
```

### Cloning with SSH

**Github SSH key setup is required when cloning with SSH.**

```
git clone git@github.com:CyBearStudio/Jopen-King.git
cd within_darkness
mkdir build
cd build
cmake ..
cmake --build .
```

**Don't forget to copy res folder at the root of the executable.**

## Folder structure


[__include/__](include/) contains the header files

[__res/__](res/) contains the resources of the game (textures, audio, etc...)

[__src/__](src/) contains the source files
