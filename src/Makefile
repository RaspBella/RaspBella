CC=clang
CFLAGS=-std=c23

INSTALL_FILES=README.md index.html

all: install clean

install: $(INSTALL_FILES)
	mv $^ ../

$(INSTALL_FILES): gen
	./gen

gen: gen.c bella.c

clean:
	rm -f gen
