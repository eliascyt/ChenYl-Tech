#include <stdio.h>      
#include <stdlib.h>     
#include <string.h>    
#include "gestion_animaux.h"  

#define MAX_ANIMAUX 100  // Nombre maximal d'animaux pouvant être enregistrés

// Tableau statique pour stocker les animaux
Animal animaux[MAX_ANIMAUX];
int nb_animaux = 0;  // Compteur du nombre d'animaux enregistrés

// Fonction pour ajouter un nouvel animal
void ajouter_animal() {
    if (nb_animaux >= MAX_ANIMAUX) {
        printf("Capacité maximale atteinte. Impossible d'ajouter un nouvel animal.\n");
        return;
    }

    Animal nouvel_animal;
    nouvel_animal.id = nb_animaux + 1;  // Attribution dun identifiant unique

    printf("Nom de l'animal : ");
    scanf("%s", nouvel_animal.nom);

    printf("Espèce de l'animal : ");
    scanf("%s", nouvel_animal.espece);

    printf("Âge de l'animal : ");
    scanf("%d", &nouvel_animal.age);

    animaux[nb_animaux] = nouvel_animal;  // Ajout de l'animal au tableau
    nb_animaux++;  // Incrémentation du compteur

    printf("Animal ajouté avec succès !\n");
}

// Fonction pour rechercher un animal par son nom
void rechercher_animal() {
    char nom_recherche[50];
    int trouve = 0;

    printf("Nom de l'animal à rechercher : ");
    scanf("%s", nom_recherche);

    for (int i = 0; i < nb_animaux; i++) {
        if (strcmp(animaux[i].nom, nom_recherche) == 0) {
            printf("Animal trouvé : ID=%d, Nom=%s, Espèce=%s, Âge=%d\n",
                   animaux[i].id, animaux[i].nom, animaux[i].espece, animaux[i].age);
            trouve = 1;
            break;
        }
    }

    if (!trouve) {
        printf("Aucun animal trouvé avec le nom '%s'.\n", nom_recherche);
    }
}

// Fonction pour supprimer un animal par son nom
void supprimer_animal() {
    char nom_supprimer[50];
    int trouve = 0;

    printf("Nom de l'animal à supprimer : ");
    scanf("%s", nom_supprimer);

    for (int i = 0; i < nb_animaux; i++) {
        if (strcmp(animaux[i].nom, nom_supprimer) == 0) {
            // Décalage des éléments suivants pour combler le vide
            for (int j = i; j < nb_animaux - 1; j++) {
                animaux[j] = animaux[j + 1];
            }
            nb_animaux--;  // Décrémentation du compteur
            printf("Animal supprimé avec succès.\n");
            trouve = 1;
            break;
        }
    }

    if (!trouve) {
        printf("Aucun animal trouvé avec le nom '%s'.\n", nom_supprimer);
    }
}

// Fonction pour lister tous les animaux enregistrés
void lister_animaux() {
    if (nb_animaux == 0) {
        printf("Aucun animal enregistré.\n");
        return;
    }

    printf("Liste des animaux enregistrés :\n");
    for (int i = 0; i < nb_animaux; i++) {
        printf("ID=%d, Nom=%s, Espèce=%s, Âge=%d\n",
               animaux[i].id, animaux[i].nom, animaux[i].espece, animaux[i].age);
    }
}

