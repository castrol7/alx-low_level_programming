#!/bin/bash

# Compile all .c files into object files
gcc -c *.c

# Create a static library from the object files
ar rcs liball.a *.o

# Clean up the object files
rm *.o

# Display a message to indicate that the library was created
echo "Static library liball.a created from all .c files in the current directory."

