CFLAGS=-g -Wall -O3
BINS=me bella

all: $(BINS)
	@for bin in $^ ; do ./$$bin ; done

me: me.cpp
	c++ $(CFLAGS) $^ -o $@

bella: bella.c person.c
	cc $(CFLAGS) $^ -o $@

clean:
	rm -f $(BINS)
