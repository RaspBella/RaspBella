CC=clang
CFLAGS=-std=c23

INSTALL_FILES=README.md index.html

all: install

install: index.html docs
	mv $^

$(INSTALL_FILES): gen
	./gen

gen: gen.c bella.c

docs:
	mkdir docs

clean:
	rm -f gen
