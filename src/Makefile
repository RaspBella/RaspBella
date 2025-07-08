CC=clang-19
CFLAGS=-std=c23 -Wall -Wextra

INSTALL_FILES=README.md index.html

all: install

install: index.html README.md ../docs
	mv README.md ..
	mv index.html ../docs

$(INSTALL_FILES): gen
	./gen

gen: gen.c bella.c

../docs:
	mkdir ../docs

clean:
	rm -fr gen ../docs ../README.md
