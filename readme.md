# Crummy
Crummy is a pixel physics simulator created with flecs and raylib.

<p align="center"><img src="https://github.com/alexjodonnell/crummy/blob/master/docs/paradise.gif" width="514" height="534" /></p>
(this gif has a reduced framerate)

## Goals
The goal of this project is to experiment with data driven programming for game development.

## To build 
I aim to make the build process a bit more smooth but for now the project can be built as follows:
- Make folders called lib and build in the project root
    - `mkdir lib build`
- Dependencies are built from source. Probably going to clean this up later on because it can be quite a pain for fresh setups.
- Flecs is an excellent entity component system.
- To handle cross platform rendering and audio, raylib is used which is another excellent library that makes game development in C fun.
- Go to the lib directory and clone flecs and raylib from github
    - `cd lib`
    - `git clone https://github.com/SanderMertens/flecs`
    - `git clone https://github.com/raysan5/raylib`
- To build,
    - `cd build`
    - `camke ..`
    - `make`
- Finally, to run
    - `./crummy`
