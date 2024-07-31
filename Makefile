CC = gcc
CFLAGS = -I./src -I./external/Unity/src -I./tests -DUNITY_INCLUDE_DOUBLE
SRC = $(wildcard src/*.c)
TESTS = $(wildcard tests/*.c)

test: $(TESTS) $(SRC)
	$(CC) $(CFLAGS) $^ ./external/Unity/src/unity.c -o test
	./test

.PHONY: test
