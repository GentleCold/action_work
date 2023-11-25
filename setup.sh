#!/bin/bash

if [ ! -d bin ]; then
	mkdir bin
fi

if [ ! -d build ]; then
	mkdir build
fi

if [ ! -d lib ]; then
	mkdir lib/shared lib/static
fi

cd build
cmake ..
make -j4

cd ../bin
./test_all

cd ../
