CC=clang
CFLAGS=-std=c23

INSTALL_FILES=README.md index.html

all: install

install: index.html build
	mv $^

$(INSTALL_FILES): gen
	./gen

gen: gen.c bella.c

build:
	mkdir build

clean:
	rm -f gen
