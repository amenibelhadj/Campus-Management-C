#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "fonctions.h"

int p;

void
on_button1_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *Gestion;
Gestion=lookup_widget(button,"Gestion");
Gestion=create_Gestion();
gtk_widget_show(Gestion);
}


void
on_button2_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button3_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *Ajouter;
GtkWidget *Gestion;
Gestion=lookup_widget(button,"Gestion");
gtk_widget_destroy(Gestion);
Ajouter=lookup_widget(button,"Ajouter");
Ajouter=create_Ajouter();
gtk_widget_show(Ajouter);
}


void
on_button4_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *Modifier;
GtkWidget *Gestion;
Gestion=lookup_widget(button,"Gestion");
gtk_widget_destroy(Gestion);
Modifier=lookup_widget(button,"Modifier");
Modifier=create_Modifier();
gtk_widget_show(Modifier);
}


void
on_button5_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *supprimer;
GtkWidget *Gestion;
Gestion=lookup_widget(button,"Gestion");
gtk_widget_destroy(Gestion);
supprimer=lookup_widget(button,"supprimer");
supprimer=create_supprimer();
gtk_widget_show(supprimer);
}


void
on_button6_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *Gestion;
GtkWidget *Afficher;
GtkWidget *treeview1;
Gestion=lookup_widget(button,"Gestion");
gtk_widget_destroy(Gestion);
Afficher=lookup_widget(button,"Afficher");
Afficher=create_Afficher();
gtk_widget_show(Afficher);
treeview1=lookup_widget(Afficher,"treeview1");
afficher_menu(treeview1);
}


void
on_button7_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *Acceuil;
GtkWidget *Gestion;
Gestion=lookup_widget(button,"Gestion");
gtk_widget_destroy(Gestion);
Acceuil=lookup_widget(button,"Acceuil");
Acceuil=create_Acceuil();
gtk_widget_show(Acceuil);
}


void
on_button28_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *Gestion;
GtkWidget *Ajouter;
Ajouter=lookup_widget(button,"Ajouter");
gtk_widget_destroy(Ajouter);
Gestion=lookup_widget(button,"Gestion");
Gestion=create_Gestion();
gtk_widget_show(Gestion);
}


void
on_button29_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *Acceuil;
GtkWidget *Ajouter;
Ajouter=lookup_widget(button,"Ajouter");
gtk_widget_destroy(Ajouter);
Acceuil=lookup_widget(button,"Acceuil");
Acceuil=create_Acceuil();
gtk_widget_show(Acceuil);
}


void
on_button33_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *pp,*pe, *combobox,*pf;
Menus menu;
pe = lookup_widget (button, "entry3");
pp = lookup_widget (button, "entry5"); 
pf = lookup_widget (button, "entry6");
combobox = lookup_widget (button, "comboboxentry1");
 
strcpy(menu.pe , gtk_entry_get_text(GTK_ENTRY(pe)));
strcpy(menu.pp , gtk_entry_get_text(GTK_ENTRY(pp)));
strcpy(menu.pf , gtk_entry_get_text(GTK_ENTRY(pf)));
if (strcmp("Lundi",gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox)))==0)
menu.jours=1;
if (strcmp("Mardi",gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox)))==0)
menu.jours=2;
if (strcmp("Mercredi",gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox)))==0)
menu.jours=3;
if (strcmp("Jeudi",gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox)))==0)
menu.jours=4;
if (strcmp("Vendredi",gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox)))==0)
menu.jours=5;
if (strcmp("Samedi",gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox)))==0)
menu.jours=6;
if (strcmp("Dimanche",gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox)))==0)
menu.jours=7;
menu.tp=p;
ajouter(menu);
}


void
on_radiobutton3_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(GTK_RADIO_BUTTON (togglebutton)))
p=3;
}


void
on_radiobutton1_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(GTK_RADIO_BUTTON (togglebutton)))
p=1;
}


void
on_radiobutton2_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(GTK_RADIO_BUTTON (togglebutton)))
p=2;
}


void
on_button34_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *Gestion;
GtkWidget *Modifier;
Modifier=lookup_widget(button,"Modifier");
gtk_widget_destroy(Modifier);
Gestion=lookup_widget(button,"Gestion");
Gestion=create_Gestion();
gtk_widget_show(Gestion);
}


void
on_button35_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *Acceuil;
GtkWidget *Modifier;
Modifier=lookup_widget(button,"Modifier");
gtk_widget_destroy(Modifier);
Acceuil=lookup_widget(button,"Acceuil");
Acceuil=create_Acceuil();
gtk_widget_show(Acceuil);
}


void
on_button36_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *pp,*pe, *combobox,*pf;
Menus new;
pe = lookup_widget (button, "entry7");
pp = lookup_widget (button, "entry8"); 
pf = lookup_widget (button, "entry9");
combobox = lookup_widget (button, "comboboxentry2");
 
strcpy(new.pe , gtk_entry_get_text(GTK_ENTRY(pe)));
strcpy(new.pp , gtk_entry_get_text(GTK_ENTRY(pp)));
strcpy(new.pf , gtk_entry_get_text(GTK_ENTRY(pf)));
if (strcmp("Lundi",gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox)))==0)
new.jours=1;
if (strcmp("Mardi",gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox)))==0)
new.jours=2;
if (strcmp("Mercredi",gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox)))==0)
new.jours=3;
if (strcmp("Jeudi",gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox)))==0)
new.jours=4;
if (strcmp("Vendredi",gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox)))==0)
new.jours=5;
if (strcmp("Samedi",gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox)))==0)
new.jours=6;
if (strcmp("Dimanche",gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox)))==0)
new.jours=7;
new.tp=p;
modifier(new);


}


void
on_radiobutton4_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(GTK_RADIO_BUTTON (togglebutton)))
p=1;
}


void
on_radiobutton5_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(GTK_RADIO_BUTTON (togglebutton)))
p=2;
}


void
on_radiobutton6_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(GTK_RADIO_BUTTON (togglebutton)))
p=3;
}


void
on_radiobutton7_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(GTK_RADIO_BUTTON (togglebutton)))
p=1;
}


void
on_radiobutton8_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(GTK_RADIO_BUTTON (togglebutton)))
p=2;
}


void
on_radiobutton9_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(GTK_RADIO_BUTTON (togglebutton)))
p=3;
}


void
on_button38_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *combobox;
Menus R;

combobox = lookup_widget (button, "comboboxentry3");
 

if (strcmp("Lundi",gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox)))==0)
R.jours=1;
if (strcmp("Mardi",gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox)))==0)
R.jours=2;
if (strcmp("Mercredi",gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox)))==0)
R.jours=3;
if (strcmp("Jeudi",gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox)))==0)
R.jours=4;
if (strcmp("Vendredi",gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox)))==0)
R.jours=5;
if (strcmp("Samedi",gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox)))==0)
R.jours=6;
if (strcmp("Dimanche",gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox)))==0)
R.jours=7;
R.tp=p;
Supprimer(R);

}


void
on_button39_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *Afficher,*w1;
GtkWidget *treeview1;

w1=lookup_widget(button,"Afficher");
Afficher=create_Afficher();
gtk_widget_hide(w1);
treeview1=lookup_widget(Afficher,"treeview1");
afficher_menu(treeview1);
}

