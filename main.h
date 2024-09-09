#ifndef MAIN_H
#define MAIN_H

#define MAX 200

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct book
{
    char titre[MAX];
    char auteur[MAX];
    int quantite;
    float prix;
} Book_t;

// ajoute functions
int AjouteMenu(Book_t books[], int mode, int length);

// Modification functions
void ModificationMenu(Book_t books[], int count);
void modifQuantite(Book_t books[], int count, char titre[], int new);
void modifPrix(Book_t books[], int count, char titre[], float new);
void modifTitre(Book_t books[], int count, char titre[], char newtitre[]);
void modifiGlobal(Book_t books[], int count, char titre[]);

// delete functions
int deleteLivre(Book_t books[], int count, char titre[]);

// Tri functions
void Trimenu(Book_t books[], int count);
void buleCroissant(Book_t books[], int count);
void buleDecroissant(Book_t books[], int count);

// search functions
void recherche(Book_t books[], int count);

// statistique functions
void statistique(Book_t books[], int count);
int TotalStock(Book_t books[], int count);
void prixTTC(Book_t books[], int count);
float moyennePrix(Book_t books[], int count);

// auxillary
void welcome();
void sousMenuMod();
void trisousMenu();
void statsMenu();
void affichage(Book_t books[], int count);
void clearString(char *s);
void swap(Book_t *a, Book_t *b);
float CalcTTC(float price);

#endif /* MAIN_H */