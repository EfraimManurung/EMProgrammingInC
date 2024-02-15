
CC = gcc
CPP = g++

CFLAGS =-Wall -g
BINS =example example2

all: $(BINS)

%: %.c 
	$(CC) $(CFLAGS) $^ -o $@

%: %.cpp 
	$(CPP) $(CFLAGS) $^ -o $@

clean:
	$(RM) -r $(BINS) *.dSYM