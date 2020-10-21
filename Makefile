CC="gcc"
LIBS="-lraylib"

build: src/main.c src/pertti.c
	$(CC) src/main.c src/pertti.c $(LIBS) -o main

