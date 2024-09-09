#include "main.h"

int main()
{
    char word[MAX];
    Book_t books[100];
    int choix, mode, length = 0;

    while (1)
    {
        welcome();
        printf("Entree Votre Choix: ");
        scanf("%d", &choix);
        getchar();
        switch (choix)
        {
        case 1:
            printf("\n1: Ajoute une Livre\n2: Ajoute plusieur Livre\n0: retour aux menu principale\n");
            printf("Choisir: ");
            scanf("%d", &mode);
            length = AjouteMenu(books, mode, length);
            break;
        case 2:
            affichage(books, length);
            break;
        case 3:
            affichage(books, length);
            ModificationMenu(books, length);
            clearString(word);
            affichage(books, length);
            break;
        case 4:
            // BUG: sur le method de deletion
            printf("Choisir Livre a supprimer(par titre): ");
            scanf("%s", word);
            length = deleteLivre(books, length, word);
            clearString(word);
            break;
        case 5:
            // Recherche();
            break;
        case 6:
            // Statistique Menu
            break;
        case 0:
            printf("Program is Closing...\n");
            exit(0);
        default:
            printf("Please Select From Menu\n");
            exit(0);
        }
    }
    return (0);
}