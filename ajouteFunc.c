#include "main.h"

void ajouteUneLivre(Book_t books[], int count) {

    printf("Enter le titre: ");
    scanf("%s", books[count].titre);
    printf("Enter le nom de l'auteur: ");
    scanf("%s", books[count].auteur);
    printf("Enter le prix: ");
    scanf(" %f", &books[count].prix);
    printf("Enter la quantité: ");
    scanf(" %d", &books[count].quantite);
}


int  AjouteMenu(Book_t books[], int mode, int count) {
    int num = count;
    int limit, j;
    switch(mode) {
        case 1:
            ajouteUneLivre(books, num);
            num++;
            break;
        case 2:
            printf("\nVous Voulez ajouter combien des livres");
            scanf("%d", &limit);
            for (j = 0; j < limit; j++) {
                ajouteUneLivre(books, num);
                num++;
            }
            break;
        case 0:
            printf("retour to menu\n");
            break;
    }
    return num;
}