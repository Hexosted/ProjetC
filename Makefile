prog : batiment.o main.o
		gcc batiment.o main.o -o prog

batiment.o : batiment.c
		gcc -c batiment.c
		
main.o : main.c
		gcc -c main.c

clean :
		rm *.o
