#include <stdio.h>

// Fonction qui insère un entier dans un tableau
void Inserer(int tableau[], int *taille, int position, int valeur) {
    if (position < 0 || position > *taille) {
        printf("Position invalide.\n");
        return;
    }

    // Décalage des éléments pour faire de la place
    for (int i = *taille; i > position; i--) {
        tableau[i] = tableau[i - 1];
    }

    // Insertion de la valeur
    tableau[position] = valeur;
    (*taille)++;

    printf("Valeur %d insérée à la position %d.\n", valeur, position);
}

int main() {
    int nombres[10]; // Taille maximum du tableau après insertion
    int taille = 7; // Taille initiale

    // Lecture des 7 nombres entiers
    printf("Entrez 7 nombres entiers :\n");
    for (int i = 0; i < taille; i++) {
        printf("Nombre %d: ", i + 1);
        scanf("%d", &nombres[i]);
    }

    // Affichage des éléments du tableau initial
    printf("Tableau initial :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d ", nombres[i]);
    }
    printf("\n");

    // Demande de la valeur et de la position à insérer
    int valeur, position;
    printf("\nEntrez la valeur à insérer : ");
    scanf("%d", &valeur);
    printf("Entrez la position (0 à %d) : ", taille);
    scanf("%d", &position);

    // Appel de la fonction d'insertion
    Inserer(nombres, &taille, position, valeur);

    // Affichage des éléments du tableau après insertion
    printf("Tableau après insertion :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d ", nombres[i]);
    }
    
    printf("\n");

    return 0;
}
