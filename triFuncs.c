#include "main.h"

void buleCroissant(Book_t books[], int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (strcmp(books[j].titre, books[j + 1].titre) > 0)
            {
                swap(&books[j], &books[j + 1]);
            }
        }
    }
    affichage(books, n);
}

void buleDecroissant(Book_t books[], int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (strcmp(books[j].titre, books[j + 1].titre) < 0)
            {
                swap(&books[j], &books[j + 1]);
            }
        }
    }
    affichage(books, n);
}

void Trimenu(Book_t books[], int count)
{
    int choix;
    trisousMenu();
    printf("Enter votre tri Choix: ");
    scanf("%d", &choix);
    switch (choix)
    {
    case 1:
        buleCroissant(books, count);
        break;
    case 2:
        buleDecroissant(books, count);
        break;
    case 0:
        printf("return to Menu\n");
    default:
        printf("Enter 0 - 2 choix\n");
        break;
    }
}
