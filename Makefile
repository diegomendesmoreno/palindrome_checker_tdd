CC=clang

all:
	$(CC) -o main main.c palindrome.c
	./main

test:
	$(CC) -o main test_palindrome.c Unity/src/unity.c palindrome.c
	./main

clean:
	rm -rf *.o main