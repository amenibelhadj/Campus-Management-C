#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonctions.h"
#include <gtk/gtk.h>
void ajouter(Menus menu) {  

    
    

  
    
    
     
    FILE *f = NULL;
    f = fopen("Nutritionniste.txt", "a");
    fprintf(f,"%d %d %s %s %s \n", menu.jours, menu.tp, menu.pe,menu.pp,menu.pf);
    fclose(f);
}

void Supprimer(Menus R) {
    
    Menus menu;
    
    FILE *f1=NULL;
    FILE *f2=NULL;

  
    

    f1 = fopen("Nutritionniste.txt","r");
    f2 = fopen("Nutriti_tamp.txt", "a");
    while (fscanf(f1,"%d %d %s %s %s \n", &menu.jours, &menu.tp, menu.pe,menu.pp,menu.pf) !=EOF){
        if (menu.jours != R.jours) {
            fprintf(f2,"%d %d %s %s %s \n", menu.jours, menu.tp, menu.pe,menu.pp,menu.pf);
        }
       else if ((menu.tp != R.tp) && (menu.jours == R.jours))
     {fprintf(f2,"%d %d %s %s %s \n", menu.jours, menu.tp, menu.pe,menu.pp,menu.pf);}
    }
    fclose(f1);
    fclose(f2);
    remove("Nutritionniste.txt");
    rename("Nutriti_tamp.txt", "Nutritionniste.txt");
}

int rechercher(Menus R) {
    
    
    Menus menu;
    
   

    FILE *f = NULL;
    f = fopen("Nutritionniste.txt","r");
    while(fscanf(f,"%d %d %s %s %s \n", &menu.jours, &menu.tp, menu.pe,menu.pp,menu.pf)!=EOF) {

        if(R.jours==menu.jours){
            fclose(f);
            return 1;
        }
    }
    fclose(f);
    return 0;

}

void afficher(Menus menu) {

    

    FILE *f = NULL;
    f=fopen("Nutritionniste.txt","r");
    
    while (fscanf(f,"%d %d %s %s %s \n", &menu.jours, &menu.tp, menu.pe,menu.pp,menu.pf) !=EOF){
    printf("%d %d %s %s %s \n", menu.jours, menu.tp, menu.pe,menu.pp,menu.pf);
        
    }
    fclose(f);
    //return 0;
}


void modifier(Menus new){
    
    
    
    Menus menu;
    FILE *f=NULL;
    FILE *f2=NULL;


    

    
    
    f=fopen("Nutritionniste.txt","r");
    f2=fopen("modif_nut.txt","a");
    while(fscanf(f,"%d %d %s %s %s \n", &menu.jours, &menu.tp, menu.pe,menu.pp,menu.pf)!=EOF)
    {
    if ((menu.jours == new.jours)&&(menu.tp == new.tp)) {
            fprintf(f2,"%d %d %s %s %s \n", new.jours, new.tp, new.pe,new.pp,new.pf);
        }
        else {
        fprintf(f2,"%d %d %s %s %s \n", menu.jours, menu.tp, menu.pe,menu.pp,menu.pf);
        }
    };
    fclose(f);
    fclose(f2);
    remove("Nutritionniste.txt");
    rename("modif_nut.txt","Nutritionniste.txt");

    }



void dashboard(Menus menu){
    
    
    int jour , plat,s,b,i,r,k;
    float dechet,s1,max;
    float T[50];
    FILE *f2=NULL;

   printf("choisir la semaine:\n");
    scanf("%d",&s);
    if (s=1) 
    {
      b=1;  
    }
    if (s=2) 
    {
      b=8;  
    }
    if (s=3) 
    {
      b=15;  
    }
    if (s=4) 
    {
      b=22;  
    }
    i=b;
    s1=0;

    
    
    
   
    f2=fopen("dechets.txt","r");
     while (!EOF) {
        
        fscanf(f2,"%d %d %f \n", &jour, &plat , &dechet);
        while (i<7+b){
        if (i == jour) {
            s1=dechet+s1;}
        if (plat==3)
        { 
            T[i]=s1;
            i=i+1;
        }

        }
    }
    fclose(f2);
    max=T[0];
    r=0;
    for (k=1;k<i;i++)
    {
        if (T[k]>max)
        {
            max=T[k];
            r=k;
        }

    }
    printf("%d a le menu qui a le plus de dechets de la semaine avec %f kg de dechets ",r,max);
     }
enum
{
JOURS,
TYPE,
ENTREE,
PLAT_PRINCIPAL,
DESSERT,
COLUMNS
};
    
   void afficher_menu(GtkWidget *liste)
{
  GtkCellRenderer *renderer;
  GtkTreeViewColumn *column;
  GtkTreeIter iter;
  GtkListStore *store;
 char jours[50];
 char type[50];
 char entree[100];
 char plat_principal[50];
 char dessert[50];
  store=NULL;

  FILE *f;
  store=gtk_tree_view_get_model(liste);
  if (store==NULL)
  {

    renderer= gtk_cell_renderer_text_new();
    column=gtk_tree_view_column_new_with_attributes("Numero du jour",renderer,"text",JOURS,NULL);
    gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
    renderer= gtk_cell_renderer_text_new();
  column=gtk_tree_view_column_new_with_attributes("type",renderer,"text",TYPE,NULL);
    gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
    renderer= gtk_cell_renderer_text_new();
    column= gtk_tree_view_column_new_with_attributes("Entrée",renderer,"text",ENTREE,NULL);
    gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
    renderer= gtk_cell_renderer_text_new();
    column= gtk_tree_view_column_new_with_attributes("Plat_principal",renderer,"text",PLAT_PRINCIPAL,NULL);
    gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
    renderer= gtk_cell_renderer_text_new();
    column= gtk_tree_view_column_new_with_attributes("Dessert",renderer,"text",DESSERT,NULL);
    gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);



  }
  store=gtk_list_store_new(COLUMNS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);
  f=fopen("Nutritionniste.txt", "r");
  if (f==NULL)
  {
    return;
  }
  else
  {
    f= fopen("Nutritionniste.txt", "a+");
    while(fscanf(f,"%s %s %s %s %s",jours,type,entree,plat_principal,dessert)!=EOF)
    {
      gtk_list_store_append(store, &iter);
      gtk_list_store_set(store, &iter,JOURS,jours,TYPE,type,ENTREE,entree,PLAT_PRINCIPAL,plat_principal,DESSERT,dessert, -1);

    }
fclose(f);
gtk_tree_view_set_model(GTK_TREE_VIEW(liste),GTK_TREE_MODEL(store));
g_object_unref (store);
   
}
}



