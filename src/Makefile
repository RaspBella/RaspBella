c=$(wildcard *.c)
o=$(c:.c=.o)

.PHONY: gen gen-html gen-md clean

all: $(o) gen

gen: gen-html gen-md

gen-html: html
	mkdir -p ../docs
	./html

gen-md: md
	./md

html: bella.o
md: bella.o

clean:
	rm -rf ../docs html md *.o
