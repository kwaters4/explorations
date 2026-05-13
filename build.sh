#!/bin/bash

set -x

mkdir -p build; cd build

cmake ../ --fresh
cmake --build .

cd ../
