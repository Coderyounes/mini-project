#include "main.h"

void welcome()
{
    printf("\n\tBonjour\n");
    printf("1: Ajoute livre(s)\n");  // menu->ajoute->afficher
    printf("2: Afficher Livres\n");  // afficher
    printf("3: Modifications\n");    // afficher->modifier->aficher
    printf("4: Supressions\n");      // afficher->suprimmer->confirmer->afficher
    printf("5: recherches \n");      // afficher->rechercher->afficher(la seul recherche)
    printf("6: tri par alphabet\n"); // tri->croisant et decroisant
    printf("7: statistique menu\n"); // menu->choix->result
    printf("0: exit\n");
}

void trisousMenu()
{
    printf("1: Tri par alphabet d'ordre Croissant\n");
    printf("2: Tri par alphabet d'ordre Decroissant\n");
    printf("0: retourn to menu principal\n");
}

void statsMenu()
{
    printf("1: Calculer les  totals des livres\n");
    printf("2: Calculer le total de stock\n");
    printf("3: Calculer le prix de vente TTC\n");
    printf("4: Calculer le moyenne des prix\n");
    printf("0: retour to menu Principal\n");
}

void affichage(Book_t books[], int count)
{
    int i;
    for (i = 0; i < count; i++)
    {
        printf("%s %s %.2f %d \n", books[i].titre, books[i].auteur, books[i].prix, books[i].quantite);
    }
}

void recherche(Book_t books[], int count)
{
    char titre[MAX];
    int i;
    printf("Enter le titre a recherche: ");
    scanf("%s", titre);
    for (i = 0; i < count; i++)
    {
        if (strcmp(books[i].titre, titre) == 0)
        {
            printf("Found: %s %s %.2f %d \n", books[i].titre, books[i].auteur, books[i].prix, books[i].quantite);
        }
    }
}

float CalcTTC(float price)
{
    float new = (price * 15) / 100;
    return new + price;
}

float moyennePrix(Book_t books[], int count)
{
    int i;
    float sum = 0.0;
    for (i = 0; i < count; i++)
    {
        sum += books[i].prix;
    }
    return sum / count;
}

void swap(Book_t *a, Book_t *b)
{
    Book_t temp = *a;
    *a = *b;
    *b = temp;
}

void clearString(char *s)
{
    s[0] = '\0';
}