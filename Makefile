CC := g++
SRCDIR := src
BUILDDIR := build
TARGET := main.out
CFLAGS := -g -Wall -O3 -std=c++11 -I include/

all: main

intruso:
	$(CC) $(CFLAGS) -c intruso.cpp -o intruso.o
	
main: intruso
	$(CC) $(CFLAGS) intruso.o main.cpp -o $(TARGET)

clean:
	$(RM) -r $(BUILDDIR)/* $(TARGET)