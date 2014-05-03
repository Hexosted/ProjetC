#include <stdio.h>
#include <stdlib.h>
#include "batiment.h"
#include "statistiques.h"

int main(int argc, char* argv[])
{
	Stats* s=creer_stats();
	printf("%d\n", s->chomage);

	Batiment* bat=nouveau();
	printf("%d\n", bat->longueur);
	new_house(bat);
	printf("%d\n", bat->longueur);
	
	return 0;
}
