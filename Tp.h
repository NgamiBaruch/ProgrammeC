#include<stdio.h>
#include<stdlib.h>
#ifndef TP_H
#define TP_H

typedef struct Element{

    int valeur;
    struct Element *suivant;
} Element;

Element* pile = NULL;
Element* debutFile = NULL;
Element* finFile = NULL;


int Empty(){
    return pile==NULL;
}
// empiler la  Stack

Element* push(int valeur){

    Element* nouvelElement = (Element*) malloc(sizeof(Element));

    nouvelElement->valeur = valeur;
    nouvelElement->suivant = pile;
    pile = nouvelElement;
    return nouvelElement;

}

//depiler un element a sa position precise
Element* DepilerElement(int e){
    
    Element* liste1 = NULL;
    Element* liste2 = NULL;

    if(Empty(pile))
        return NULL;
    while(pile->valeur!=e && pile!=NULL){
        if(pile->valeur==e){
            liste1 = pile->suivant;
            free(pile);
        }else{
            liste2 = push(pile->valeur);
            liste1= push(liste2->valeur);
        }
    pile=pile->suivant;
    }
    return liste1;
    
}

//fonction determinant la taille d'une pile

int Taille(Element* pile){

    if(pile==NULL)
        return 0;
    else 
        return 1+Taille(pile->suivant);

}
//retourner l'elemenyt a la position1.

// Delete Stack

void pop(){
    if(pile !=NULL){
        Element* elementSupprimer = pile;
        pile = pile->suivant;
        free(elementSupprimer);
    }else{
        printf("Empty Stack");
    }
}

//print Stack

void afficherPile(){

    Element* courant = pile;
    printf("Pile:");
    while(courant !=NULL){
        printf("|%d|->",courant->valeur);
        courant = courant->suivant;
    }
    printf("NULL\n");
}

// recherches des elements dans un pile

int Search(int e){
    if(pile->valeur==e)
        return 1;
    while(pile->valeur!=e && pile->suivant!=NULL){
        if(pile->valeur==e)
            return 1;
        else
            return 0;
    pile = pile->suivant;
    }

}


// les files 

void EnQueue(int valeur){

    Element* nouvelElement = (Element*)malloc(sizeof(Element));
    nouvelElement->valeur = valeur;
    nouvelElement->suivant = NULL;
    if(debutFile == NULL)
        debutFile = nouvelElement;
    else
        finFile->suivant = nouvelElement;
    finFile = nouvelElement;
}

// defiler

void defiler(){
    if(debutFile !=NULL){
        Element* elementSupprimer = debutFile;
        debutFile =debutFile->suivant;
        free(elementSupprimer);
    }else{
        printf("File vide");
    }
}

//afficher file

void afficher(){

    Element* courant = debutFile;
    printf("File:");
    while(courant !=NULL){
        printf("|%d|->",courant->valeur);
        courant = courant-> suivant;
    }
    printf("NULL");
}

#endif