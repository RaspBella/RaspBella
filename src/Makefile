CC=clang-19
CFLAGS=-std=c23 -Wall -Wextra

../docs/index.html ../README.md: ../docs gen
	./gen

gen: gen.o bella.o

%.o: %.c user.h

../docs:
	mkdir ../docs

clean:
	rm -fr gen $(wildcard *.o) ../docs ../README.md
