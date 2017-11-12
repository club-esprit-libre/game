
prog:game.o 
	g++ -o prog game.c -lSDLmain -lSDL -lSDL_mixer -lSDL_image -lSDL_ttf -g
game.o:game.c
	g++ -c game.c -g

