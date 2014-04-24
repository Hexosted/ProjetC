typedef struct Batiment
{
	int largeur;
	int longueur;
	int poll;
	int action;
	int detente;
	int emploi;
	int pop;
} Batiment;

Batiment* nouveau();
void new_house(Batiment* b);
