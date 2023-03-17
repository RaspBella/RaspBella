default: me
	./me

me: me.cpp
	g++ me.cpp -o me

clean:
	rm -f me
