#!/bin/bash

set -x

mkdir -p build; cd build

export CC=gcc
cmake ../ --fresh
cmake --build .

cd ../
