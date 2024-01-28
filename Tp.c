#include<stdio.h>
#include<stdlib.h>
#include"Tp.h"

//procedure pour pile

void menu(int choix){

    int val;

     do{

        printf("************ MENU DE L'APPLICATION GESTION PILE  ***************\n");
        printf("1-Ajouter un element\n");
        printf("2-Supprimer un element\n");
        printf("3.Afficher la pile\n");
        printf("4.Quitter\n");
        printf("Choix: ");
        scanf("%d",&choix);

            switch(choix){

                case1:{
                    printf("Entrer une value a empiler");
                    scanf("%d",&val);
                    break;

                };
                case2:{

                    //fonction depiler

                };
                case3:{

                    //afficher la pile

                };
                case4:{

                    printf("Au revoir !!\n");
                    break;
                    default:
                    printf("Choix invalide\n");
                };

            }
    }while(choix!=4);
}



void menu2(){

    int choix,value;

    do{

        printf("************ MENU DE L'APPLICATION GESTION FILE  ***************\n");
        printf("1-Ajouter un element\n");
        printf("2-Supprimer un element\n");
        printf("3.Afficher la pile\n");
        printf("4.Quitter\n");
        printf("Choix: ");
        scanf("%d",&choix);

            switch(choix){

                case1:{
                    printf("Entrer une value a emfiler");
                    scanf("%d",&value);
                    break;

                };
                case2:{

                    //fonction depiler

                };
                case3:{

                    //afficher la pile

                };
                case4:{

                    printf("Au revoir !!\n");
                    break;
                    default:
                    printf("Choix invalide\n");
                };

            }
    }while(choix!=4); 
}

void main(){
    int choix,value;
    Element* stack = NULL;

    do{

        printf("************ MENU DE L'APPLICATION GESTION PILE ET FILE ***************\n");
        printf("1-Welcome to Stack\n");
        printf("2-Welcome to File\n");
        printf("3.continuer\n");
        printf("4.Quitter\n");
        printf("Choix: ");
        scanf("%d",&choix);

            switch(choix){

                case1:{
                    //menu(1);
                    stack = DepilerElement(value);
                    //break;
                };
                case2:{

                    //fonction depiler
                    menu2();
                    //break;
                };
                case3:{

                    //afficher la pile

                };
                case4:{

                    printf("Au revoir !!\n");
                    default:
                    break;
                    printf("Choix invalide\n");
                    //break;
                };

            }
    }while(choix!=4);

}

    /*int valeur,valeurFile,valeur2,valeur1,result;

    //pile
    printf("Entrer une valeur  a la pile ");
    scanf("%d",&valeur);

    printf("Entrer une valeur  a la pile ");
    scanf("%d",&valeur1);

    //search a element
    Element* stack = NULL;;
    stack=push(valeur);
    stack=push(valeur1);
    result = Taille(stack);
    //pop();
    //stack = DepilerElement(4);
    afficherPile();
    printf("\nLa taille de la pile est de : %d",result);

    // implementation de la recherche
    int p;
    printf("\nQuel element voulez vous rechercher ");
    scanf("%d",&p);
    if(Search(p)==1)
        printf("\nL'element est trouvez\n");
    else 
        printf("\nL'element n'est pas trouvez\n");

    //file
    printf("Entrer l'element a ajouter a la file ");
    scanf("%d",&valeurFile);
    printf("Entrer l'element 2 a ajouter a la file ");
    scanf("%d",&valeur2);
    EnQueue(valeurFile);
    EnQueue(valeur2);
    //defiler();
    afficher();*/




