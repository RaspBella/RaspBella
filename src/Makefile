CC=clang-19
CFLAGS=-std=c23 -Wall -Wextra

../docs/index.html ../README.md: ../docs gen
	./gen

gen: gen.c bella.c

../docs:
	mkdir ../docs

clean:
	rm -fr gen ../docs ../README.md
