
CC = gcc
CPP = g++

CFLAGS =-Wall -g
BINS =matrix matrix2

all: $(BINS)

%: %.c 
	$(CC) $(CFLAGS) $^ -o $@

%: %.cpp 
	$(CPP) $(CFLAGS) $^ -o $@

clean:
	$(RM) -r $(BINS) *.dSYM