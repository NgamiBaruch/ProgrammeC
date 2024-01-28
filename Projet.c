#include<stdio.h>
#include<stdlib.h>
/*#include<unistd.h>
#include<conio.h>
#include<windows.h>
#include"Projet.h"*/

typedef struct bloc{

    int info;
    struct bloc *next;
}liste;

void affichage(liste *pile){
    liste *courant = pile;
    while(courant != NULL){
        printf(" |%d|->",courant->info);
        courant = courant->next;
    }
    printf("NULL\n");
}

void main(){

    /*int choix;
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

    

    do{
        //clrscr();
        system("cls");
        //system("color 2D");
        //HANDLE hConsole1 = GetStdHandle(STD_OUTPUT_HANDLE);
        //SetConsoleTextAttribute(hConsole1,FOREGROUND_GREEN);
        printf("                           \n                                     ********** Menu De Manipilation pile et File ************ \n\n");
        printf("                                                    1. Read stack \n");
        printf("                                                    2. Print Stack\n");
        printf("                                                    3. ADD in head \n");
        printf("                                                    4. Delete in head \n");
        printf("                                                    5. Empiler a Stack\n");
        printf("                                                    6. Depiler a Stack\n");
        printf("                                                    7. Read File \n");
        printf("                                                    8. Print File\n");
        printf("                                                    9. ADD in head of File\n");
        printf("                                                    10. Delete in head of File\n");
        printf("                                                    11. Efiler in File\n");
        printf("                                                    12. Defiler in File\n");
        printf("                                                    0. Fin de traitement\n");
        printf("                                                    Votre choix :");
        scanf("%d", &choix);
*/
        //switch(choix){
            //case 1: {
                liste *pile = NULL;
                pile = malloc(sizeof(liste));
                liste* p = pile;

                p->info = 2;
                p->next = malloc(sizeof(liste));
                p=p->next;

                p->info = 9;
                p->next = malloc(sizeof(liste));
                p=p->next;
               int e;
               printf("Entrer l'elements en empiler ");
               scanf("%d",&e);
               /*pile->info = 2;
               pile->next = malloc(sizeof(liste));
               pile=pile->next;*/
               affichage(pile); 
            //break;
            //};
            /*case 2: {  ;break;};
            case 3: {   ;break;};
            case 4: {   ;break;};
            case 5: {   ;break;};
            case 6: {   ;break;};
            case 7: {   ;break;};
            case 8: {   ;break;};
            case 9: {   ;break;};
            case 10: {   ;break;};
            case 11: {   ;break;};
            case 12: {   ;break;};
            case 0: { printf("Fin de traitement \n");break;};
            default: printf("Choix erronee !!! le choix est compris entre [0 -6] \n");
        }
    getch();    
    }while(choix!=0);*/
}