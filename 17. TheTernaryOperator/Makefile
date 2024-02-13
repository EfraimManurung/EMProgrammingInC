
CC = gcc
CPP = g++

CFLAGS =-Wall -g
BINS =test test2

all: $(BINS)

%: %.c 
	$(CC) $(CFLAGS) $^ -o $@

%: %.cpp 
	$(CPP) $(CFLAGS) $^ -o $@

clean:
	$(RM) -r $(BINS) *.dSYM