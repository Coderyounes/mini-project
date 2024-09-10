#include "main.h"

void ajouteUneLivre(Book_t books[], int count)
{
    int i;

    if (count >= 99)
    {
        printf("Storage if Full\n");
        return;
    }

    printf("Enter le titre de livre %d: ", count);
    scanf("%s", books[count].titre);
    for (i = 0; books[count].titre[i]; i++)
    {
        books[count].titre[i] = tolower(books[count].titre[i]);
    }
    printf("Enter le nom de l'auteur %d: ", count);
    scanf("%s", books[count].auteur);
    printf("Enter le prix de livre %d: ", count);
    scanf(" %f", &books[count].prix);
    printf("Enter la quantité de livre %d: ", count);
    scanf(" %d", &books[count].quantite);
}

int AjouteMenu(Book_t books[], int mode, int count)
{
    int num = count;
    int limit, j;
    //getchar();
    switch (mode)
    {
    case 1:
        ajouteUneLivre(books, num);
        num++;
        affichage(books, num);
        break;
    case 2:
        printf("\nVous Voulez ajouter combien des livres: ");
        scanf("%d", &limit);
        for (j = 0; j < limit; j++)
        {
            ajouteUneLivre(books, num);
            num++;
        }
        affichage(books, num);
        break;
    case 0:
        printf("retour to menu\n");
        break;
    default:
        printf("bad character!\n");
        exit(0);
    }
    return num;
}