#include <stdio.h>
#include <stdlib.h>
#include "commerce.h"

Commerce* nouveauC()
{
	Commerce *res;
	
	res=malloc(sizeof(Commerce));
	
	res->surface=0;
	res->poll=0;
	res->argent=0;
	res->cout=0;
	
	return res;
}

void new_poste(Commerce* c)
{
	c->surface=10;
	c->poll=5;
	c->argent=100;
	c->cout=500;
}

void new_boulangerie(Commerce* c)
{
	c->surface=5;
	c->poll=10;
	c->argent=100;
	c->cout=500;
}

void new_boucherie(Commerce* c)
{
	c->surface=10;
	c->poll=10;
	c->argent=70;
	c->cout=350;
}

void new_fleuriste(Commerce* c)
{
	c->surface=5;
	c->poll=5;
	c->argent=50;
	c->cout=250;
}

void new_epicerie(Commerce* c)
{
	c->surface=20;
	c->poll=5;
	c->argent=120;
	c->cout=600;
}

void new_supermarche(Commerce* c)
{
	c->surface=40;
	c->poll=10;
	c->argent=200;
	c->cout=1000;
}

void new_presse(Commerce* c)
{
	c->surface=5;
	c->poll=5;
	c->argent=30;
	c->cout=150;
}

void new_informatique(Commerce* c)
{
	c->surface=20;
	c->poll=5;
	c->argent=300;
	c->cout=1500;
}
