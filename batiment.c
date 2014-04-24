#include <stdlib.h>
#include <stdio.h>
#include "batiment.h"

Batiment* nouveau()
{
	Batiment *res;
	
	res=malloc(sizeof(Batiment));
	
	res->longueur=0;
	res->largeur=0;
	res->poll=0;
	res->action=0;
	res->detente=0;
	res->emploi=0;
	res->pop=0;
	
	return res;
}

void new_house(Batiment* b)
{
	b->longueur=10;
	b->largeur=10;
	b->poll=5;
	b->pop=3;
}
