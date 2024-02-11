
CC = gcc
CPP = gcc
CFLAGS =-Wall -g

BINS=uniontest

all: $(BINS)

%: %.c 
	$(CC) $(CFLAGS) $^ -o $@

%: %.cpp 
	$(CPP) $(CFLAGS) $^ -o $@

clean:
	$(RM) -r $(BINS) *.dSYM