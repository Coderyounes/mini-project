#include "main.h"


void welcome() {
    printf("\n\tBonjour\n");
    printf("1: Ajoute livre(s)\n"); // menu->ajoute->afficher
    printf("2: Afficher Livres\n"); // afficher
    printf("3: Modifications\n"); // afficher->modifier->aficher
    printf("4: Supressions\n"); // afficher->suprimmer->confirmer->afficher
    printf("5: recherches \n"); // afficher->rechercher->afficher(la seul recherche)
    printf("6: tri par alphabet\n"); // tri->croisant et decroisant
    printf("7: statistique menu\n"); // menu->choix->result
    printf("0: exit\n");
}