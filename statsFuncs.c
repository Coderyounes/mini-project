#include "main.h"

int TotalStock(Book_t books[], int count)
{
    int i, stock = 0;

    for (i = 0; i < count; i++)
    {
        stock += books[i].quantite;
    }

    return stock;
}

void prixTTC(Book_t books[], int count)
{
    int i;

    for (i = 0; i < count; i++)
    {
        printf("%s %s %.2f %d\n", books[i].titre, books[i].auteur, CalcTTC(books[i].prix), books[i].quantite);
    }
}
void statistique(Book_t books[], int count)
{
    int i, choix, stock;
    statsMenu();
    printf("Enter Choix: ");
    scanf("%d", &choix);
    switch (choix)
    {
    case 1:
        printf("The Total Books: %d\n", count);
        break;
    case 2:
        stock = TotalStock(books, count);
        printf("the Total Stock is: %d\n", stock);
        break;
    case 3:
        prixTTC(books, count);
        break;
    case 4:
        printf("the Moyenne Prix %.2f \n", moyennePrix(books, count));
        break;
    case 0:
        printf("Back to menu\n");
        break;
    default:
        printf("Please enter value from 0 to 4\n");
        exit(0);
    }
}