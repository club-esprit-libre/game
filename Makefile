sdltest:	main.cpp
	g++ -I /usr/include/SDL main.cpp -o main -lSDL 
	./sdltest

clean:
	rm sdltest
