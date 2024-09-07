# Compiler and flags
CXX = g++
CXXFLAGS = -g -Wall 

# Libraries to link against
LDFLAGS = -lSDL2

# Source files and target
SRCS = main.cpp
TARGET = main

# Default target to build the program
all: $(TARGET)

# Rule to compile the target
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET) $(LDFLAGS)

# Clean up
clean:
	rm -f $(TARGET)
