#include <stdlib.h>
#include <stdio.h>
#include "statistiques.h"

Stats* creer_stats()
{
	Stats *s=malloc(sizeof(Stats));
	
	s->chomage=0;
	s->detente=0;
	s->pollution=0;
	
	return s;
}
