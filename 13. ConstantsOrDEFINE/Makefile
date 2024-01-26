all: constants

test: constants.c
	$(CC) $(CFLAGS) -DARRAY_LENGTH=24 $< -o $@
	$(CC) $(CFLAGS) -DARRAY_LENGTH=240 $< -o $@.big

clean:
	$(RM) test
	$(RM) -r *.dSYM
	