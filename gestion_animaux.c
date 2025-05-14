#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "gestion_animaux.h"

int generer_id_unique() {
    static int id = 1;
    return id++;
}

void ajouter_animal() {
    Animal a;
    a.id = generer_id_unique();

    printf("Nom : ");
    scanf("%s", a.nom);
    printf("Espèce (chien/chat/hamster/autruche) : ");
    scanf("%s", a.espece);
    printf("Année de naissance : ");
    scanf("%d", &a.annee_naissance);
    printf("Poids (kg) : ");
    scanf("%f", &a.poids);
    getchar();
    printf("Commentaire : ");
    fgets(a.commentaire, MAX_COMMENTAIRE, stdin);

    char chemin[100];
    sprintf(chemin, "animaux/%d.txt", a.id);
    FILE* fichier = fopen(chemin, "w");
    if (fichier != NULL) {
        fprintf(fichier, "%d\n%s\n%s\n%d\n%.2f\n%s", a.id, a.nom, a.espece, a.annee_naissance, a.poids, a.commentaire);
        fclose(fichier);
        printf("Animal ajouté avec succès !\n");
    } else {
        printf("Erreur lors de la création du fichier.\n");
    }
}

void lister_animaux() {
    printf("Fonction à compléter : liste des animaux.\n");
}

void rechercher_animaux() {
    printf("Fonction à compléter : recherche d'animaux.\n");
}

void supprimer_animal() {
    printf("Fonction à compléter : suppression d'un animal.\n");
}
