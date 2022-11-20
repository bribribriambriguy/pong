
# pong
pong &lt; 100 lines with raylib

# make sure you have raylib compiled into standard directorys
# how to install raylib https://github.com/raysan5/raylib/wiki/Working-on-GNU-Linux

# make build directory and go into build directory
mkdir build && cd build

# generate makefile with cmake
cmake ../

# compile everything with make
make

# run
./pong
