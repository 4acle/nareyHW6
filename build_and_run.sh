#!/bin/bash

# Compile the C++ source code
g++ -o myCopier myCopier.cpp

# Check if compilation was successful
if [ $? -eq 0 ]; then
    echo "Compilation successful."

    # Run the compiled program with command-line arguments
    ./myCopier "$1" "$2"

    # Check if the program execution was successful
    if [ $? -eq 0 ]; then
        echo "Program execution successful."
    else
        echo "Error: Program execution failed."
    fi
else
    echo "Error: Compilation failed."
fi

