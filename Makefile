CFLAGS=-g -ggdb -Og -Wall -Wextra

src=$(wildcard src/*.c)
obj=$(src:src/%.c=%.o)
bin=gen

.PHONY: default clean README.md

default: docs/index.html README.md

README.md: src/bella.c
	printf '#$<:\n```c\n%s```\nREADME.md inspired by [Voklen](https://github.com/Voklen)' "$$(cat $<)" > $@

docs/index.html: $(bin) docs
	./$<

docs:
	mkdir -p docs

$(bin): $(obj)
	$(CC) $(CFLAGS) $^ -o $@

%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(bin) $(obj) docs README.md
