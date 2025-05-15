#include <stdio.h>  
#include <stdlib.h> (malloc, free, etc.)
#include "gestion_animaux.h" // Inclusion du fichier contenant les déclarations des fonctions liées à la gestion des animaux

int main() {
    int choix; // Déclaration d'une variable pour stocker le choix de l'utilisateur dans le menu

    do {
        // Affichage du menu principal
        printf("\n=== MENU CHENYL-TECH ===\n");
        printf("1. Ajouter un animal\n");
        printf("2. Rechercher un animal\n");
        printf("3. Supprimer un animal\n");
        printf("4. Lister tous les animaux\n");
        printf("0. Quitter\n");
        printf("Choix : ");
        scanf("%d", &choix); // Lecture du choix de l'utilisateur

        // Traitement du choix de l'utilisateur
        switch (choix) {
            case 1:
                ajouter_animal(); // Appel de la fonction pour ajouter un nouvel animal
                break;
            case 2:
                rechercher_animal(); // Appel de la fonction pour rechercher un animal existant
                break;
            case 3:
                supprimer_animal(); // Appel de la fonction pour supprimer un animal
                break;
            case 4:
                lister_animaux(); // Appel de la fonction pour afficher la liste de tous les animaux
                break;
            case 0:
                printf("Au revoir !\n"); // Message de sortie du programme
                break;
            default:
                printf("Choix invalide. Veuillez réessayer.\n"); // Message d'erreur pour un choix non valide
        }
    } while (choix != 0); // Boucle continue jusqu'à ce que l'utilisateur choisisse de quitter (choix == 0)

    return 0; // Fin du programme
}
