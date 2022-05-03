#!/bin/bash
set -e -o pipefail

echo "Building..." && g++ -std="c++14" -g -O2 "Main.cpp" "fg.cpp" -o "Main" && echo "Running..." && "./Main"
