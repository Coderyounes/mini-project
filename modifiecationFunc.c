#include "main.h"

void sousMenuMod()
{
    printf("\n1: modifie la quantité\n"
           "2: modifie le prix\n"
           "3: modifie le titre\n"
           "4: modifie tous les champs\n"
           "0: retour aux menu principal\n");
}

void modifQuantite(Book_t books[], int count, char titre[], int new)
{
    int i;

    for (i = 0; i < count; i++)
    {
        if (strcmp(books[i].titre, titre) == 0)
        {
            books[i].quantite = new;
        }
    }
}

void modifPrix(Book_t books[], int count, char titre[], float new)
{
    int i;

    for (i = 0; i < count; i++)
    {
        if (strcmp(books[i].titre, titre) == 0)
        {
            books[i].prix = new;
        }
    }
}

void modifTitre(Book_t books[], int count, char titre[], char newtitre[])
{
    int i;

    for (i = 0; i < count; i++)
    {
        if (strcmp(books[i].titre, titre) == 0)
        {
            strcpy(books[i].titre, newtitre);
        }
    }
}

void modifiGlobal(Book_t books[], int count, char titre[])
{
    int i, quantite;
    float prix;
    char newtitle[MAX], newauteur[MAX];
    printf("Enter le nouveau titre: ");
    scanf("%s", newtitle);
    printf("Enter le nouveau auteur: ");
    scanf("%s", newauteur);
    printf("Enter le nouveau prix: ");
    scanf("%f", &prix);
    printf("Enter la nouveau quantite: ");
    scanf("%d", &quantite);
    for (i = 0; i < count; i++)
    {
        if (strcmp(books[i].titre, titre) == 0)
        {
            strcpy(books[i].titre, newtitle);
            strcpy(books[i].auteur, newauteur);
            books[i].prix = prix;
            books[i].quantite = quantite;
        }
    }
}

void ModificationMenu(Book_t books[], int count)
{
    char newtitre[MAX], titre[MAX];
    int choix, newquantite;
    float newprix;

    sousMenuMod();
    printf("Enter Votre choix de modification: ");
    scanf("%d", &choix);
    switch (choix)
    {
    case 1:
        printf("Quel le livre que vous volez modifie entre le titre:");
        scanf("%s", titre);
        printf("Enter la nouveau quantite: ");
        scanf("%d", &newquantite);
        modifQuantite(books, count, titre, newquantite);
        clearString(titre);
        break;
    case 2:
        printf("Quel le livre que vous volez modifie entre le titre:");
        scanf("%s", titre);
        printf("Enter le nouveau Prix: ");
        scanf("%f", &newprix);
        modifPrix(books, count, titre, newprix);
        clearString(titre);
        break;
    case 3:
        printf("Quel le livre que vous volez modifie entre le titre:");
        scanf("%s", titre);
        printf("Enter nouveau Titre");
        scanf("%s", newtitre);
        modifTitre(books, count, titre, newtitre);
        clearString(titre);
        break;
    case 4:
        printf("Quel le livre que vous volez modifie entre le titre:");
        scanf("%s", titre);
        modifiGlobal(books, count, titre);
        clearString(titre);
        break;
    case 0:
        printf("retour to menu\n");
        break;
    }
}