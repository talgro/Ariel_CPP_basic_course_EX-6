CXX=clang++-5.0
CXXFLAGS=-std=c++17 

all: Index.o IllegalCharException.o IllegalCoordinateException.o Board.o

IllegalCoordinateException.o: IllegalCoordinateException.h IllegalCoordinateException.cpp
	$(CXX) $(CXXFLAGS) -c IllegalCoordinateException.cpp -o IllegalCoordinateException.o

IllegalCharException.o: IllegalCharException.h IllegalCharException.cpp
	$(CXX) $(CXXFLAGS) -c IllegalCharException.cpp -o IllegalCharException.o

Board.o: Board.cpp Board.h IllegalCharException.h IllegalCoordinateException.h Index.hpp
	$(CXX) $(CXXFLAGS) -c Board.cpp -o Board.o

Index.o: Index.cpp Index.hpp
	$(CXX) $(CXXFLAGS) -c Index.cpp -o Index.o


clean:
	rm *.o a.out

buildAndRun: all main.o
	$(CXX) $(CXXFLAGS) IllegalCoordinateException.o IllegalCharException.o main.o Board.o Index.o
	./a.out
