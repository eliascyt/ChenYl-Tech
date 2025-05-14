#include <stdio.h>
#include <stdlib.h>
#include "gestion_animaux.h"

int main() {
    int choix;

    do {
        printf("\n=== MENU CHENYL-TECH ===\n");
        printf("1. Ajouter un animal\n");
        printf("2. Rechercher un animal\n");
        printf("3. Supprimer un animal\n");
        printf("4. Lister tous les animaux\n");
        printf("0. Quitter\n");
        printf("Choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                ajouter_animal();
                break;
            case 2:
                rechercher_animaux();
                break;
            case 3:
                supprimer_animal();
                break;
            case 4:
                lister_animaux();
                break;
            case 0:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide.\n");
        }

    } while (choix != 0);

    return 0;
}
