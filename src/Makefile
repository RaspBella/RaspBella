gen: gen.o bella.o
	cc $^ -o $@
	mkdir -p ../docs
	./$@

clean:
	rm -rf ../docs gen *.o
