COMPILER = g++
SOURCES = main.cpp 
TARGET_NAME = main.exe
CPP_STANDARD = 20

all:
	$(COMPILER) $(SOURCES) -o $(TARGET_NAME) -std=c++$(CPP_STANDARD) -Wall -Werror -Wpedantic -Wextra
