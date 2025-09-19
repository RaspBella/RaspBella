all: ../README.md ../docs/index.html

../README.md: bella.c
	echo '```bella.c' > $@
	cat $< >> $@
	echo '```' >> $@

../docs/index.html: gen
	mkdir -p ../docs
	./$<

gen: gen.c bella.c

clean:
	rm -fr gen $(wildcard *.o) ../docs ../README.md
