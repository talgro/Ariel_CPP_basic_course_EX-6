CXX=clang++-5.0
CXXFLAGS=-std=c++17 

all: Board.o Index.o IllegalCharException.o IllegalCoordinateException.o 

Board.o: Board.cpp Board.h IllegalCharException.hpp IllegalCoordinateException.hpp Index.hpp
	$(CXX) $(CXXFLAGS) -c Board.cpp -o Board.o

Index.o: Index.cpp Index.hpp
	$(CXX) $(CXXFLAGS) -c Piece.cpp -o Piece.o

main.o: main.cpp Board.h IllegalCharException.hpp IllegalCoordinateException.hpp 
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

IllegalCoordinateException.o: IllegalCoordinateException.hpp
	$(CXX) $(CXXFLAGS) -c IllegalCoordinateException.cpp -o IllegalCoordinateException.o
	
IllegalCharException.o: IllegalCharException.hpp
	$(CXX) $(CXXFLAGS) -c IllegalCharException.cpp -o IllegalCharException.o

clean:
	rm *.o a.out

buildAndRun: all main.o
	$(CXX) $(CXXFLAGS) Board.o Index.o IllegalCoordinateException.o IllegalCharException.o main.o
	./a.out
