
CC = gcc
CPP = gcc

CFLAGS =-Wall -g
BINS =example1 example2 

all: $(BINS)

%: %.c 
	$(CC) $(CFLAGS) $^ -o $@

%: %.cpp 
	$(CPP) $(CFLAGS) $^ -o $@

clean:
	$(RM) -r $(BINS) *.dSYM