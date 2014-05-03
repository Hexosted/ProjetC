prog : residence.o commerce.o main.o statistiques.o
		gcc residence.o commerce.o statistiques.o main.o -o prog

residence.o : residence.c
		gcc -c residence.c
		
commerce.o : commerce.c
		gcc -c commerce.c
		
main.o : main.c
		gcc -c main.c
		
statistiques.o : statistiques.c
		gcc -c statistiques.c

clean :
		rm *.o
