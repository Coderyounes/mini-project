#include "main.h"

void sousMenuMod()
{
    printf("\n1: modifie la quantité\n"
           "2: modifie le prix\n"
           "3: modifie le titre\n"
           "4: modifie tous les champs\n"
           "0: retour aux menu principal");
}

void modifQuantite(Book_t books[], int count, char titre[])
{
}

void ModificationMenu(Book_t books[], int count, char titre[])
{
    int choix;
    sousMenuMod();
    printf("Enter Votre choix de modification: ");
    scanf("d", &choix);
    switch (choix)
    {
    case 1:
        modifQuantite(books, count, titre);
        break;
    case 2:
        // modifPrix();
        break;
    case 3:
        // modifTitre();
        break;
    case 4:
        // modofication all
        break;
    case 0:
        printf("retour to menu\n");
        break;
    }
}