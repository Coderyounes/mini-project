#include "main.h"


int main() {
    int choix;

    while(1) {
        switch(choix) {
            case 1:
                printf("\n1: Ajoute une Livre\n2: Ajoute plusieur Livre\n0: retour aux menu principale");
                // AjouteMenu();
                break;
            case 2:
                // Afficher();
                break;
            case 3:
                // ModificationMenu();
                break;
            case 4:
                // Suprression();
                break;
            case 5:
                // Recherche();
                break;
            case 6:
                // Statistique Menu
                break;
            case 0:
                printf("Program is Closing...");
                exit(0);
            default:
                printf("Please Select From Menu\n");
                exit(0);
        }
    }
    return (0);
}