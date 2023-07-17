#ifndef FONCTIONS_H_INCLUDED
#define FONCTIONS_H_INCLUDED

#include <gtk/gtk.h>

typedef struct Menus
{
    int jours ;
    int tp;
    char pe[50];
    char pp[50];
    char pf[50];
    
    


}Menus;
void afficher_menu(GtkWidget *liste);
void ajouter(Menus menu);
void Supprimer(Menus R);
int rechercher(Menus R);
void afficher(Menus menu);
void modifier(Menus new);
void dashboard(Menus menu);

#endif
