CFLAGS=-Og -g3
CFLAGS+=-Wall -Werror -pedantic

SRCS=$(wildcard *.c)
OBJS=$(SRCS:.c=.o)
BINS=$(OBJS:.o=)


all: $(BINS)

clean:
	rm -f $(OBJS)
	rm -f $(BINS)
