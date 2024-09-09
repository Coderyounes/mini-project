#ifndef MAIN_H
#define MAIN_H

#define MAX 200

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct book
{
    char titre[MAX];
    char auteur[MAX];
    int quantite;
    float prix;
} Book_t;

// Operation sur Livre
int AjouteMenu(Book_t books[], int mode, int length);
void ModificationMenu(Book_t books[], int count);
void modifQuantite(Book_t books[], int count, char titre[], int new);
void modifPrix(Book_t books[], int count, char titre[], float new);
void modifTitre(Book_t books[], int count, char titre[], char newtitre[]);
void modifiGlobal(Book_t books[], int count, char titre[]);

// auxillary
void welcome();
void sousMenuMod();
void affichage(Book_t books[], int count);
void clearString(char *s);

#endif /* MAIN_H */