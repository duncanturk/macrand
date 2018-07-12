CC = gcc

run: main.c
	$(CC) $<
	./a.out > tmp
	zip data tmp
	rm tmp
	rm a.out
