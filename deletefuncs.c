#include "main.h"

int deleteLivre(Book_t books[], int count, char titre[])
{
    int i, j, confirm;

    for (i = 0; i < count; i++)
    {
        if (strcmp(books[i].titre, titre) == 0)
        {
            printf("est-ce que vous voulez sur de supprimer %s 1(YES) 0(NO)? ", books[i].titre);
            scanf("%d", &confirm);

            if (confirm == 1)
            {
                for (j = i; j < count - 1; j++)
                {
                    strcpy(books[j].titre, books[j + 1].titre);
                    strcpy(books[j].auteur, books[j + 1].auteur);
                    books[j].prix = books[j + 1].prix;
                    books[j].quantite = books[j + 1].quantite;
                }

                count--;
            }

            break;
        }
    }

    return count;
}