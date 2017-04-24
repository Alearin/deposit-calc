all: deposit test1 test2

deposit: build/src/main.o build/src/deposit.o
	gcc build/src/main.o build/src/deposit.o -o bin/main

build/src/main.o: src/main.c
	gcc -Wall -Werror -c src/main.c -o build/src/main.o

build/src/deposit.o: src/deposit.c
	gcc -Wall -Werror -c src/deposit.c -o build/src/deposit.o

test1: build/test/maint.o build/test/calculation.o
	gcc build/test/maint.o build/test/calculation.o build/src/deposit.o -o bin/calculation

build/test/maint.o: test/maint.c
	gcc -Wall -Werror -c test/maint.c -o build/test/maint.o

build/test/calculation.o: test/calculation.c
	gcc -Wall -Werror -c test/calculation.c -o build/test/calculation.o

test2: build/test/maint.o build/test/validation.o
	gcc build/test/maint.o build/test/validation.o build/src/deposit.o -o bin/validation

build/test/main.o: test/maint.c
	gcc -Wall -Werror -c test/maint.c -o build/test/maint.o

build/test/validation.o: test/validation.c
	gcc -Wall -Werror -c test/validation.c -o build/test/validation.o

clean:
	rm -f build/test/*.o
	rm -f build/src/*.o
	rm -f bin/main bin/validation bin/calculation

