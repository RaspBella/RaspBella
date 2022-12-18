run: me.o
	./me.o

me.o: me.c++
	c++ me.c++ -o me.o

clean: me.o
	rm -f me.o
