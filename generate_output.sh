#!/bin/bash
# This script is used to comple and generate CSV file for julia and mandelbrot programs.

# Display the current directory
SCRIPT=$(readlink -f "$0")
SCRIPTPATH=$(dirname "$SCRIPT")
echo "The prorgram is running from following directory: " $SCRIPTPATH

# Compile the programs
(cd C-JuliaSets && make julia)
(cd Cpp-Mandelbrot && make mandelbrot)

# Run the programs
(cd C-JuliaSets && ./julia -2 2 -2 2 1000 1000 -1.037 0.17 > juliaset.csv)
(cd Cpp-Mandelbrot && ./mandelbrot -2 2 -2 2 1000 1000 > mandelbrot.csv)
