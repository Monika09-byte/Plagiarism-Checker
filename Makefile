CXX = g++
CXXFLAGS = -Iinclude -std=c++11
SRC = src/main.cpp src/plagiarism.cpp
OUT = plagiarism_checker

all:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT)
