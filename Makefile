BitStuffing: BitStuffing.o 
	gcc -o BitStuffing BitStuffing.o

BitStuffing.o: BitStuffing.c
	gcc -c -o BitStuffing.o  BitStuffing.c
