#include <stdlib.h>
#include <stdio.h>
#include "residence.h"

Residence* nouveauR()
{
	Residence *res;
	
	res=malloc(sizeof(Residence));
	
	res->surface=0;
	res->poll=0;
	res->pop=0;
	res->cout=0;
	
	return res;
}

void new_house(Residence* r)
{
	r->surface=5;
	r->poll=5;
	r->pop=3;
	r->cout=100;
}

void new_building(Residence* r)
{
	r->surface=10;
	r->poll=60;
	r->pop=30;
	r->cout=1100;
}
