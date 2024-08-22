#!/bin/bash

set -e

rm -rf `pwd`/build/*
cd `pwd`/build &&
    cmake .. &&
    make

cd ..

cp -r `pwd`/src/include `pwd`/lib

sudo cp `pwd`/lib/*.a /usr/lib
sudo cp -r `pwd`/lib/include/* /usr/include/mprpc