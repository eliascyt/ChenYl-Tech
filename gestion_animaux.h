#ifndef GESTION_ANIMAUX_H
#define GESTION_ANIMAUX_H

#define MAX_ANIMAUX 50
#define MAX_COMMENTAIRE 256

typedef struct {
    int id;
    char nom[50];
    char espece[20];
    int annee_naissance;
    float poids;
    char commentaire[MAX_COMMENTAIRE];
} Animal;

void ajouter_animal();
void lister_animaux();
void rechercher_animaux();
void supprimer_animal();
int generer_id_unique();

#endif
