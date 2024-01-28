#include<stdio.h>
#include<unistd.h>
#include<windows.h>

void main(){

    system("cls");
    system("color 2D");
    int i;
    printf("\n\n\t\t\t\t************ Welcome to UPF University ******************");
    printf("  \n\n\n\t\t\t\t\t\t Loading");

    for(i = 0; i<10 ; i++){
        usleep(500000); //Attente 0.5 seconde
        printf(".");
        fflush(stdout);// rafraichit la sortie
    }

    //printf("\nLoading complete\n");
    system("cls");
}