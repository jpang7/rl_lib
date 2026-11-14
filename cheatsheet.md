# cpp lunar controller

# pretty lander
https://gymnasium.farama.org/index.html for pictures
# python
create conda environment for lunar lander
`conda create -n lunar-rl python=3.11 -y`
switch to lunar
`conda activate lunar-rl`
install gym libraries
`python -m pip install "gymnasium[box2d]"`
launch demo (but no picture :()
`python -m gymnasium.envs.box2d.lunar_lander`

# Hello world
Use this to build and run the binary
`clang++ -std=c++20 -Wall -Wextra -g main.cpp -o rl`
`-Wall -Wextra -g` are compiler flags
`main.cpp` is the file i wanna compile
`-o rl` names the executable
`./rl` to run the executable

# goal
custom cpp rl engine library for self learning

# to do
learn iostream