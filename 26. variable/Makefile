
CC = gcc

CFLAGS =-Wall -g
BINS =example 

all: $(BINS)

%: %.c 
	$(CC) $(CFLAGS) $^ -o $@

clean:
	$(RM) -r $(BINS) *.dSYM