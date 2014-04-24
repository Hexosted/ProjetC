prog : batiment.o main.o statistiques.o
		gcc batiment.o statistiques.o main.o -o prog

batiment.o : batiment.c
		gcc -c batiment.c
		
main.o : main.c
		gcc -c main.c
		
statistiques.o : statistiques.c
		gcc -c statistiques.c

clean :
		rm *.o
