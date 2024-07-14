SRCS=me.cpp bella.c
BINS=me bella

all: $(SRCS) $(BINS)

%: %.cpp
	c++ $< -o $@

%: %.c
	cc $< -o $@

clean:
	rm -f $(BINS)