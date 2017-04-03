all: bin/main

bin/main: build/main.o build/deposit.o
	gcc build/main.o build/deposit.o -o bin/main
	
build/main.o: scr/main.c
	gcc -Wall -Werror -c scr/main.c -o build/main.o
	
build/deposit.o: scr/deposit.c
	gcc -Wall -Werror -c scr/deposit.c -o build/deposit.o
	
clean:
	rm -rf build/*.o bin/main
