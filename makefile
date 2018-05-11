CXX=clang++-5.0
CXXFLAGS=-std=c++17 

all: Coordinate.o IllegalCharException.o IllegalCoordinateException.o Board.o DummyPlayers.o TicTacToe.o Champion.o

IllegalCoordinateException.o: IllegalCoordinateException.h IllegalCoordinateException.cpp
	$(CXX) $(CXXFLAGS) -c IllegalCoordinateException.cpp -o IllegalCoordinateException.o

IllegalCharException.o: IllegalCharException.h IllegalCharException.cpp
	$(CXX) $(CXXFLAGS) -c IllegalCharException.cpp -o IllegalCharException.o

Board.o: Board.cpp Board.h IllegalCharException.h IllegalCoordinateException.h Coordinate.hpp
	$(CXX) $(CXXFLAGS) -c Board.cpp -o Board.o

Coordinate.o: Coordinate.cpp Coordinate.hpp
	$(CXX) $(CXXFLAGS) -c Coordinate.cpp -o Coordinate.o

DummyPlayers.o: Player.h DummyPlayers.h DummyPlayers.cpp
	$(CXX) $(CXXFLAGS) -c DummyPlayers.cpp -o DummyPlayers.o

TicTacToe.o: TicTacToe.h Board.h Player.h Coordinate.h TicTacToe.cpp
	$(CXX) $(CXXFLAGS) -c TicTacToe.cpp -o TicTacToe.o

Champion.o: Player.h Champion.h Board.h Champion.o
	$(CXX) $(CXXFLAGS) -c Champion.cpp -o Champion.o


clean:
	rm *.o a.out

buildAndRun: all main.o
	$(CXX) $(CXXFLAGS) IllegalCoordinateException.o IllegalCharException.o main.o Board.o Coordinate.o DummyPlayers.o TicTacToe.o Champion.o
	./a.out
