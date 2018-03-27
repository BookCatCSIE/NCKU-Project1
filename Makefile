player:play.o
	g++ play.o -o player
play.o:play.cpp
	g++ -c play.cpp
clean:
	rm play *.o
