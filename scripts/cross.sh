#!/usr/bin/env bash
export CC=aarch64-linux-gnu-gcc
echo $1
cat $1
source $1

cmake -B ${BUILD_DIR} ${CMAKE_OPTS[@]}
cd ${BUILD_DIR}; make -j; cd ..
