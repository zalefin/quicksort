CC=clang

.PHONY: verify

quicksort: main.c quicksort.c
	$(CC) main.c quicksort.c -o quicksort -O3

verify: quicksort
	./quicksort | python3 verify.py
