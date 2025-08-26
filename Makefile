CFLAGS=-O0 -g3
CFLAGS+=-Wall -Werror -pedantic

C=$(wildcard *.c)
ETAPE=$(C:.c=)


all: $(ETAPE)

clean:
	rm -f $(ETAPE)
