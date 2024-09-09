#include "main.h"



int  AjouteMenu(int mode, int count) {
    int num = count;
    switch(mode) {
        case 1:
            printf("Ajoute Une Livre Function\n");
            num++;
            break;
        case 2:
            num += num + 5;
            break;
        case 0:
            printf("retour to menu");
            break;
    }
    return num;
}