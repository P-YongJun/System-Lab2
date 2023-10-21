calculate : main.o ./lib/add.o ./lib/substarct.o ./lib/multiply.o ./lib/divide.o
	gcc -o calculate main.o ./lib/add.o ./lib/substarct.o ./lib/multiply.o ./lib/divide.o -I./lib -L./lib

main.o : main.c
	gcc -c main.c -I./lib
./Lab2/lib/add.o :./lib/add.c
	gcc -c ./lib/add.c

./Lab2/lib/substarct.o :./lib/substarct.c
	 gcc -c ./lib/substarct.c

./Lab2/lib/multiply.o :./lib/multiply.c
	 gcc -c ./lib/multiply.c

./Lab2/lib/divide.o :./lib/divide.c
	 gcc -c ./lib/divide.c

clean :
	rm -f calculate main.o ./lib/add.o ./lib/substarct.o ./lib/multiply.o ./lib/divide.o
