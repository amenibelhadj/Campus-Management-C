/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_Acceuil (void)
{
  GtkWidget *Acceuil;
  GtkWidget *fixed1;
  GtkWidget *button1;
  GtkWidget *alignment1;
  GtkWidget *hbox1;
  GtkWidget *label2;
  GtkWidget *image1;
  GtkWidget *button2;
  GtkWidget *alignment2;
  GtkWidget *hbox2;
  GtkWidget *label3;
  GtkWidget *image2;
  GtkWidget *label1;

  Acceuil = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (Acceuil), _("Acceuil"));

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (Acceuil), fixed1);

  button1 = gtk_button_new ();
  gtk_widget_show (button1);
  gtk_fixed_put (GTK_FIXED (fixed1), button1, 24, 80);
  gtk_widget_set_size_request (button1, 360, 80);

  alignment1 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment1);
  gtk_container_add (GTK_CONTAINER (button1), alignment1);

  hbox1 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox1);
  gtk_container_add (GTK_CONTAINER (alignment1), hbox1);

  label2 = gtk_label_new_with_mnemonic (_("GESTION"));
  gtk_widget_show (label2);
  gtk_box_pack_start (GTK_BOX (hbox1), label2, FALSE, FALSE, 0);

  image1 = gtk_image_new_from_stock ("gtk-yes", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image1);
  gtk_box_pack_start (GTK_BOX (hbox1), image1, FALSE, FALSE, 0);

  button2 = gtk_button_new ();
  gtk_widget_show (button2);
  gtk_fixed_put (GTK_FIXED (fixed1), button2, 24, 176);
  gtk_widget_set_size_request (button2, 360, 80);

  alignment2 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment2);
  gtk_container_add (GTK_CONTAINER (button2), alignment2);

  hbox2 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox2);
  gtk_container_add (GTK_CONTAINER (alignment2), hbox2);

  label3 = gtk_label_new_with_mnemonic (_("Meilleur Menu\nDe la Semaine"));
  gtk_widget_show (label3);
  gtk_box_pack_start (GTK_BOX (hbox2), label3, FALSE, FALSE, 0);

  image2 = gtk_image_new_from_stock ("gtk-apply", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image2);
  gtk_box_pack_start (GTK_BOX (hbox2), image2, FALSE, FALSE, 0);

  label1 = gtk_label_new (_("Espace Nutritionniste"));
  gtk_widget_show (label1);
  gtk_fixed_put (GTK_FIXED (fixed1), label1, 40, 32);
  gtk_widget_set_size_request (label1, 328, 40);
  gtk_label_set_justify (GTK_LABEL (label1), GTK_JUSTIFY_CENTER);

  g_signal_connect ((gpointer) button1, "clicked",
                    G_CALLBACK (on_button1_clicked),
                    NULL);
  g_signal_connect ((gpointer) button2, "clicked",
                    G_CALLBACK (on_button2_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (Acceuil, Acceuil, "Acceuil");
  GLADE_HOOKUP_OBJECT (Acceuil, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (Acceuil, button1, "button1");
  GLADE_HOOKUP_OBJECT (Acceuil, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (Acceuil, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (Acceuil, label2, "label2");
  GLADE_HOOKUP_OBJECT (Acceuil, image1, "image1");
  GLADE_HOOKUP_OBJECT (Acceuil, button2, "button2");
  GLADE_HOOKUP_OBJECT (Acceuil, alignment2, "alignment2");
  GLADE_HOOKUP_OBJECT (Acceuil, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (Acceuil, label3, "label3");
  GLADE_HOOKUP_OBJECT (Acceuil, image2, "image2");
  GLADE_HOOKUP_OBJECT (Acceuil, label1, "label1");

  return Acceuil;
}

GtkWidget*
create_Gestion (void)
{
  GtkWidget *Gestion;
  GtkWidget *fixed2;
  GtkWidget *button3;
  GtkWidget *alignment3;
  GtkWidget *hbox3;
  GtkWidget *label6;
  GtkWidget *image3;
  GtkWidget *button4;
  GtkWidget *alignment4;
  GtkWidget *hbox4;
  GtkWidget *label7;
  GtkWidget *image4;
  GtkWidget *button5;
  GtkWidget *alignment5;
  GtkWidget *hbox5;
  GtkWidget *label8;
  GtkWidget *image5;
  GtkWidget *button6;
  GtkWidget *alignment6;
  GtkWidget *hbox6;
  GtkWidget *label9;
  GtkWidget *image6;
  GtkWidget *button7;
  GtkWidget *image7;
  GtkWidget *button8;
  GtkWidget *image8;
  GtkWidget *label5;

  Gestion = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (Gestion), _("Gestion"));

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_container_add (GTK_CONTAINER (Gestion), fixed2);

  button3 = gtk_button_new ();
  gtk_widget_show (button3);
  gtk_fixed_put (GTK_FIXED (fixed2), button3, 96, 64);
  gtk_widget_set_size_request (button3, 208, 48);

  alignment3 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment3);
  gtk_container_add (GTK_CONTAINER (button3), alignment3);

  hbox3 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox3);
  gtk_container_add (GTK_CONTAINER (alignment3), hbox3);

  label6 = gtk_label_new_with_mnemonic (_("Ajouter"));
  gtk_widget_show (label6);
  gtk_box_pack_start (GTK_BOX (hbox3), label6, FALSE, FALSE, 0);

  image3 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image3);
  gtk_box_pack_start (GTK_BOX (hbox3), image3, FALSE, FALSE, 0);

  button4 = gtk_button_new ();
  gtk_widget_show (button4);
  gtk_fixed_put (GTK_FIXED (fixed2), button4, 96, 120);
  gtk_widget_set_size_request (button4, 208, 48);

  alignment4 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment4);
  gtk_container_add (GTK_CONTAINER (button4), alignment4);

  hbox4 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox4);
  gtk_container_add (GTK_CONTAINER (alignment4), hbox4);

  label7 = gtk_label_new_with_mnemonic (_("Modifier"));
  gtk_widget_show (label7);
  gtk_box_pack_start (GTK_BOX (hbox4), label7, FALSE, FALSE, 0);

  image4 = gtk_image_new_from_stock ("gtk-refresh", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image4);
  gtk_box_pack_start (GTK_BOX (hbox4), image4, FALSE, FALSE, 0);

  button5 = gtk_button_new ();
  gtk_widget_show (button5);
  gtk_fixed_put (GTK_FIXED (fixed2), button5, 96, 176);
  gtk_widget_set_size_request (button5, 208, 48);

  alignment5 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment5);
  gtk_container_add (GTK_CONTAINER (button5), alignment5);

  hbox5 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox5);
  gtk_container_add (GTK_CONTAINER (alignment5), hbox5);

  label8 = gtk_label_new_with_mnemonic (_("Supprimer"));
  gtk_widget_show (label8);
  gtk_box_pack_start (GTK_BOX (hbox5), label8, FALSE, FALSE, 0);

  image5 = gtk_image_new_from_stock ("gtk-delete", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image5);
  gtk_box_pack_start (GTK_BOX (hbox5), image5, FALSE, FALSE, 0);

  button6 = gtk_button_new ();
  gtk_widget_show (button6);
  gtk_fixed_put (GTK_FIXED (fixed2), button6, 96, 232);
  gtk_widget_set_size_request (button6, 208, 48);

  alignment6 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment6);
  gtk_container_add (GTK_CONTAINER (button6), alignment6);

  hbox6 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox6);
  gtk_container_add (GTK_CONTAINER (alignment6), hbox6);

  label9 = gtk_label_new_with_mnemonic (_("Afficher"));
  gtk_widget_show (label9);
  gtk_box_pack_start (GTK_BOX (hbox6), label9, FALSE, FALSE, 0);

  image6 = gtk_image_new_from_stock ("gtk-info", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image6);
  gtk_box_pack_start (GTK_BOX (hbox6), image6, FALSE, FALSE, 0);

  button7 = gtk_button_new ();
  gtk_widget_show (button7);
  gtk_fixed_put (GTK_FIXED (fixed2), button7, 16, 16);
  gtk_widget_set_size_request (button7, 56, 56);

  image7 = gtk_image_new_from_stock ("gtk-home", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image7);
  gtk_container_add (GTK_CONTAINER (button7), image7);

  button8 = gtk_button_new ();
  gtk_widget_show (button8);
  gtk_fixed_put (GTK_FIXED (fixed2), button8, 16, 240);
  gtk_widget_set_size_request (button8, 56, 56);

  image8 = gtk_image_new_from_stock ("gtk-undo", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image8);
  gtk_container_add (GTK_CONTAINER (button8), image8);

  label5 = gtk_label_new (_("Espace Gestion"));
  gtk_widget_show (label5);
  gtk_fixed_put (GTK_FIXED (fixed2), label5, 72, 0);
  gtk_widget_set_size_request (label5, 256, 64);

  g_signal_connect ((gpointer) button3, "clicked",
                    G_CALLBACK (on_button3_clicked),
                    NULL);
  g_signal_connect ((gpointer) button4, "clicked",
                    G_CALLBACK (on_button4_clicked),
                    NULL);
  g_signal_connect ((gpointer) button5, "clicked",
                    G_CALLBACK (on_button5_clicked),
                    NULL);
  g_signal_connect ((gpointer) button6, "clicked",
                    G_CALLBACK (on_button6_clicked),
                    NULL);
  g_signal_connect ((gpointer) button7, "clicked",
                    G_CALLBACK (on_button7_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (Gestion, Gestion, "Gestion");
  GLADE_HOOKUP_OBJECT (Gestion, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (Gestion, button3, "button3");
  GLADE_HOOKUP_OBJECT (Gestion, alignment3, "alignment3");
  GLADE_HOOKUP_OBJECT (Gestion, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (Gestion, label6, "label6");
  GLADE_HOOKUP_OBJECT (Gestion, image3, "image3");
  GLADE_HOOKUP_OBJECT (Gestion, button4, "button4");
  GLADE_HOOKUP_OBJECT (Gestion, alignment4, "alignment4");
  GLADE_HOOKUP_OBJECT (Gestion, hbox4, "hbox4");
  GLADE_HOOKUP_OBJECT (Gestion, label7, "label7");
  GLADE_HOOKUP_OBJECT (Gestion, image4, "image4");
  GLADE_HOOKUP_OBJECT (Gestion, button5, "button5");
  GLADE_HOOKUP_OBJECT (Gestion, alignment5, "alignment5");
  GLADE_HOOKUP_OBJECT (Gestion, hbox5, "hbox5");
  GLADE_HOOKUP_OBJECT (Gestion, label8, "label8");
  GLADE_HOOKUP_OBJECT (Gestion, image5, "image5");
  GLADE_HOOKUP_OBJECT (Gestion, button6, "button6");
  GLADE_HOOKUP_OBJECT (Gestion, alignment6, "alignment6");
  GLADE_HOOKUP_OBJECT (Gestion, hbox6, "hbox6");
  GLADE_HOOKUP_OBJECT (Gestion, label9, "label9");
  GLADE_HOOKUP_OBJECT (Gestion, image6, "image6");
  GLADE_HOOKUP_OBJECT (Gestion, button7, "button7");
  GLADE_HOOKUP_OBJECT (Gestion, image7, "image7");
  GLADE_HOOKUP_OBJECT (Gestion, button8, "button8");
  GLADE_HOOKUP_OBJECT (Gestion, image8, "image8");
  GLADE_HOOKUP_OBJECT (Gestion, label5, "label5");

  return Gestion;
}

GtkWidget*
create_Ajouter (void)
{
  GtkWidget *Ajouter;
  GtkWidget *fixed6;
  GtkWidget *button28;
  GtkWidget *image28;
  GtkWidget *entry3;
  GtkWidget *button29;
  GtkWidget *image29;
  GtkWidget *label42;
  GtkWidget *label62;
  GtkWidget *entry5;
  GtkWidget *entry6;
  GtkWidget *label41;
  GtkWidget *label43;
  GtkWidget *label40;
  GtkWidget *label86;
  GtkWidget *button33;
  GtkWidget *comboboxentry1;
  GtkWidget *radiobutton2;
  GSList *radiobutton2_group = NULL;
  GtkWidget *radiobutton3;
  GtkWidget *radiobutton1;

  Ajouter = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (Ajouter), _("Ajouter"));

  fixed6 = gtk_fixed_new ();
  gtk_widget_show (fixed6);
  gtk_container_add (GTK_CONTAINER (Ajouter), fixed6);

  button28 = gtk_button_new ();
  gtk_widget_show (button28);
  gtk_fixed_put (GTK_FIXED (fixed6), button28, 16, 16);
  gtk_widget_set_size_request (button28, 56, 56);

  image28 = gtk_image_new_from_stock ("gtk-home", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image28);
  gtk_container_add (GTK_CONTAINER (button28), image28);

  entry3 = gtk_entry_new ();
  gtk_widget_show (entry3);
  gtk_fixed_put (GTK_FIXED (fixed6), entry3, 160, 200);
  gtk_widget_set_size_request (entry3, 288, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry3), 8226);

  button29 = gtk_button_new ();
  gtk_widget_show (button29);
  gtk_fixed_put (GTK_FIXED (fixed6), button29, 16, 312);
  gtk_widget_set_size_request (button29, 64, 64);

  image29 = gtk_image_new_from_stock ("gtk-undo", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image29);
  gtk_container_add (GTK_CONTAINER (button29), image29);

  label42 = gtk_label_new (_("Type :"));
  gtk_widget_show (label42);
  gtk_fixed_put (GTK_FIXED (fixed6), label42, 40, 136);
  gtk_widget_set_size_request (label42, 112, 56);

  label62 = gtk_label_new (_("Jour de la semaine: "));
  gtk_widget_show (label62);
  gtk_fixed_put (GTK_FIXED (fixed6), label62, 56, 80);
  gtk_widget_set_size_request (label62, 136, 56);

  entry5 = gtk_entry_new ();
  gtk_widget_show (entry5);
  gtk_fixed_put (GTK_FIXED (fixed6), entry5, 160, 240);
  gtk_widget_set_size_request (entry5, 288, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry5), 8226);

  entry6 = gtk_entry_new ();
  gtk_widget_show (entry6);
  gtk_fixed_put (GTK_FIXED (fixed6), entry6, 160, 280);
  gtk_widget_set_size_request (entry6, 288, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry6), 8226);

  label41 = gtk_label_new (_("Entr\303\251e :"));
  gtk_widget_show (label41);
  gtk_fixed_put (GTK_FIXED (fixed6), label41, 72, 192);
  gtk_widget_set_size_request (label41, 96, 48);

  label43 = gtk_label_new (_("Plat principal  :"));
  gtk_widget_show (label43);
  gtk_fixed_put (GTK_FIXED (fixed6), label43, 40, 224);
  gtk_widget_set_size_request (label43, 112, 56);

  label40 = gtk_label_new (_("Espace Ajout"));
  gtk_widget_show (label40);
  gtk_fixed_put (GTK_FIXED (fixed6), label40, 168, 16);
  gtk_widget_set_size_request (label40, 256, 64);

  label86 = gtk_label_new (_("Dessert  :"));
  gtk_widget_show (label86);
  gtk_fixed_put (GTK_FIXED (fixed6), label86, 40, 264);
  gtk_widget_set_size_request (label86, 112, 56);

  button33 = gtk_button_new_with_mnemonic (_("Ajouter"));
  gtk_widget_show (button33);
  gtk_fixed_put (GTK_FIXED (fixed6), button33, 272, 328);
  gtk_widget_set_size_request (button33, 74, 29);

  comboboxentry1 = gtk_combo_box_entry_new_text ();
  gtk_widget_show (comboboxentry1);
  gtk_fixed_put (GTK_FIXED (fixed6), comboboxentry1, 216, 96);
  gtk_widget_set_size_request (comboboxentry1, 189, 29);
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxentry1), _("Lundi"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxentry1), _("Mardi"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxentry1), _("Mercredi"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxentry1), _("Jeudi"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxentry1), _("Vendredi"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxentry1), _("Samedi"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxentry1), _("Dimanche"));

  radiobutton2 = gtk_radio_button_new_with_mnemonic (NULL, _("Dejeuner"));
  gtk_widget_show (radiobutton2);
  gtk_fixed_put (GTK_FIXED (fixed6), radiobutton2, 264, 152);
  gtk_widget_set_size_request (radiobutton2, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobutton2), radiobutton2_group);
  radiobutton2_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobutton2));

  radiobutton3 = gtk_radio_button_new_with_mnemonic (NULL, _("Diner"));
  gtk_widget_show (radiobutton3);
  gtk_fixed_put (GTK_FIXED (fixed6), radiobutton3, 384, 152);
  gtk_widget_set_size_request (radiobutton3, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobutton3), radiobutton2_group);
  radiobutton2_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobutton3));

  radiobutton1 = gtk_radio_button_new_with_mnemonic (NULL, _("Petit dejeuner"));
  gtk_widget_show (radiobutton1);
  gtk_fixed_put (GTK_FIXED (fixed6), radiobutton1, 120, 152);
  gtk_widget_set_size_request (radiobutton1, 144, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobutton1), radiobutton2_group);
  radiobutton2_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobutton1));

  g_signal_connect ((gpointer) button28, "clicked",
                    G_CALLBACK (on_button28_clicked),
                    NULL);
  g_signal_connect ((gpointer) button29, "clicked",
                    G_CALLBACK (on_button29_clicked),
                    NULL);
  g_signal_connect ((gpointer) button33, "clicked",
                    G_CALLBACK (on_button33_clicked),
                    NULL);
  g_signal_connect ((gpointer) radiobutton2, "toggled",
                    G_CALLBACK (on_radiobutton2_toggled),
                    NULL);
  g_signal_connect ((gpointer) radiobutton3, "toggled",
                    G_CALLBACK (on_radiobutton3_toggled),
                    NULL);
  g_signal_connect ((gpointer) radiobutton1, "toggled",
                    G_CALLBACK (on_radiobutton1_toggled),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (Ajouter, Ajouter, "Ajouter");
  GLADE_HOOKUP_OBJECT (Ajouter, fixed6, "fixed6");
  GLADE_HOOKUP_OBJECT (Ajouter, button28, "button28");
  GLADE_HOOKUP_OBJECT (Ajouter, image28, "image28");
  GLADE_HOOKUP_OBJECT (Ajouter, entry3, "entry3");
  GLADE_HOOKUP_OBJECT (Ajouter, button29, "button29");
  GLADE_HOOKUP_OBJECT (Ajouter, image29, "image29");
  GLADE_HOOKUP_OBJECT (Ajouter, label42, "label42");
  GLADE_HOOKUP_OBJECT (Ajouter, label62, "label62");
  GLADE_HOOKUP_OBJECT (Ajouter, entry5, "entry5");
  GLADE_HOOKUP_OBJECT (Ajouter, entry6, "entry6");
  GLADE_HOOKUP_OBJECT (Ajouter, label41, "label41");
  GLADE_HOOKUP_OBJECT (Ajouter, label43, "label43");
  GLADE_HOOKUP_OBJECT (Ajouter, label40, "label40");
  GLADE_HOOKUP_OBJECT (Ajouter, label86, "label86");
  GLADE_HOOKUP_OBJECT (Ajouter, button33, "button33");
  GLADE_HOOKUP_OBJECT (Ajouter, comboboxentry1, "comboboxentry1");
  GLADE_HOOKUP_OBJECT (Ajouter, radiobutton2, "radiobutton2");
  GLADE_HOOKUP_OBJECT (Ajouter, radiobutton3, "radiobutton3");
  GLADE_HOOKUP_OBJECT (Ajouter, radiobutton1, "radiobutton1");

  return Ajouter;
}

GtkWidget*
create_Modifier (void)
{
  GtkWidget *Modifier;
  GtkWidget *fixed7;
  GtkWidget *button34;
  GtkWidget *image31;
  GtkWidget *entry7;
  GtkWidget *button35;
  GtkWidget *image32;
  GtkWidget *entry8;
  GtkWidget *entry9;
  GtkWidget *label89;
  GtkWidget *label90;
  GtkWidget *label91;
  GtkWidget *label92;
  GtkWidget *label88;
  GtkWidget *label87;
  GtkWidget *button36;
  GtkWidget *comboboxentry2;
  GtkWidget *radiobutton6;
  GSList *radiobutton6_group = NULL;
  GtkWidget *radiobutton5;
  GtkWidget *radiobutton4;

  Modifier = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (Modifier), _("Modifier"));

  fixed7 = gtk_fixed_new ();
  gtk_widget_show (fixed7);
  gtk_container_add (GTK_CONTAINER (Modifier), fixed7);

  button34 = gtk_button_new ();
  gtk_widget_show (button34);
  gtk_fixed_put (GTK_FIXED (fixed7), button34, 16, 16);
  gtk_widget_set_size_request (button34, 56, 56);

  image31 = gtk_image_new_from_stock ("gtk-home", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image31);
  gtk_container_add (GTK_CONTAINER (button34), image31);

  entry7 = gtk_entry_new ();
  gtk_widget_show (entry7);
  gtk_fixed_put (GTK_FIXED (fixed7), entry7, 160, 200);
  gtk_widget_set_size_request (entry7, 288, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry7), 8226);

  button35 = gtk_button_new ();
  gtk_widget_show (button35);
  gtk_fixed_put (GTK_FIXED (fixed7), button35, 16, 312);
  gtk_widget_set_size_request (button35, 64, 64);

  image32 = gtk_image_new_from_stock ("gtk-undo", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image32);
  gtk_container_add (GTK_CONTAINER (button35), image32);

  entry8 = gtk_entry_new ();
  gtk_widget_show (entry8);
  gtk_fixed_put (GTK_FIXED (fixed7), entry8, 160, 240);
  gtk_widget_set_size_request (entry8, 288, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry8), 8226);

  entry9 = gtk_entry_new ();
  gtk_widget_show (entry9);
  gtk_fixed_put (GTK_FIXED (fixed7), entry9, 160, 280);
  gtk_widget_set_size_request (entry9, 288, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry9), 8226);

  label89 = gtk_label_new (_("Entr\303\251e :"));
  gtk_widget_show (label89);
  gtk_fixed_put (GTK_FIXED (fixed7), label89, 72, 192);
  gtk_widget_set_size_request (label89, 96, 48);

  label90 = gtk_label_new (_("Plat principal  :"));
  gtk_widget_show (label90);
  gtk_fixed_put (GTK_FIXED (fixed7), label90, 40, 224);
  gtk_widget_set_size_request (label90, 112, 56);

  label91 = gtk_label_new (_("Dessert  :"));
  gtk_widget_show (label91);
  gtk_fixed_put (GTK_FIXED (fixed7), label91, 40, 264);
  gtk_widget_set_size_request (label91, 112, 56);

  label92 = gtk_label_new (_("Espace Modifier"));
  gtk_widget_show (label92);
  gtk_fixed_put (GTK_FIXED (fixed7), label92, 168, 16);
  gtk_widget_set_size_request (label92, 256, 64);

  label88 = gtk_label_new (_("Jour de la semaine: "));
  gtk_widget_show (label88);
  gtk_fixed_put (GTK_FIXED (fixed7), label88, 56, 80);
  gtk_widget_set_size_request (label88, 136, 56);

  label87 = gtk_label_new (_("Type :"));
  gtk_widget_show (label87);
  gtk_fixed_put (GTK_FIXED (fixed7), label87, 40, 136);
  gtk_widget_set_size_request (label87, 112, 56);

  button36 = gtk_button_new_with_mnemonic (_("Modifier"));
  gtk_widget_show (button36);
  gtk_fixed_put (GTK_FIXED (fixed7), button36, 272, 328);
  gtk_widget_set_size_request (button36, 74, 29);

  comboboxentry2 = gtk_combo_box_entry_new_text ();
  gtk_widget_show (comboboxentry2);
  gtk_fixed_put (GTK_FIXED (fixed7), comboboxentry2, 216, 96);
  gtk_widget_set_size_request (comboboxentry2, 189, 29);
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxentry2), _("Lundi"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxentry2), _("Mardi"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxentry2), _("Mercredi"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxentry2), _("Jeudi"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxentry2), _("Vendredi"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxentry2), _("Samedi"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxentry2), _("Dimanche"));

  radiobutton6 = gtk_radio_button_new_with_mnemonic (NULL, _("Diner"));
  gtk_widget_show (radiobutton6);
  gtk_fixed_put (GTK_FIXED (fixed7), radiobutton6, 384, 152);
  gtk_widget_set_size_request (radiobutton6, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobutton6), radiobutton6_group);
  radiobutton6_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobutton6));

  radiobutton5 = gtk_radio_button_new_with_mnemonic (NULL, _("Dejeuner"));
  gtk_widget_show (radiobutton5);
  gtk_fixed_put (GTK_FIXED (fixed7), radiobutton5, 264, 152);
  gtk_widget_set_size_request (radiobutton5, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobutton5), radiobutton6_group);
  radiobutton6_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobutton5));

  radiobutton4 = gtk_radio_button_new_with_mnemonic (NULL, _("Petit dejeuner"));
  gtk_widget_show (radiobutton4);
  gtk_fixed_put (GTK_FIXED (fixed7), radiobutton4, 120, 152);
  gtk_widget_set_size_request (radiobutton4, 144, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobutton4), radiobutton6_group);
  radiobutton6_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobutton4));

  g_signal_connect ((gpointer) button34, "clicked",
                    G_CALLBACK (on_button34_clicked),
                    NULL);
  g_signal_connect ((gpointer) button35, "clicked",
                    G_CALLBACK (on_button35_clicked),
                    NULL);
  g_signal_connect ((gpointer) button36, "clicked",
                    G_CALLBACK (on_button36_clicked),
                    NULL);
  g_signal_connect ((gpointer) radiobutton6, "toggled",
                    G_CALLBACK (on_radiobutton6_toggled),
                    NULL);
  g_signal_connect ((gpointer) radiobutton5, "toggled",
                    G_CALLBACK (on_radiobutton5_toggled),
                    NULL);
  g_signal_connect ((gpointer) radiobutton4, "toggled",
                    G_CALLBACK (on_radiobutton4_toggled),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (Modifier, Modifier, "Modifier");
  GLADE_HOOKUP_OBJECT (Modifier, fixed7, "fixed7");
  GLADE_HOOKUP_OBJECT (Modifier, button34, "button34");
  GLADE_HOOKUP_OBJECT (Modifier, image31, "image31");
  GLADE_HOOKUP_OBJECT (Modifier, entry7, "entry7");
  GLADE_HOOKUP_OBJECT (Modifier, button35, "button35");
  GLADE_HOOKUP_OBJECT (Modifier, image32, "image32");
  GLADE_HOOKUP_OBJECT (Modifier, entry8, "entry8");
  GLADE_HOOKUP_OBJECT (Modifier, entry9, "entry9");
  GLADE_HOOKUP_OBJECT (Modifier, label89, "label89");
  GLADE_HOOKUP_OBJECT (Modifier, label90, "label90");
  GLADE_HOOKUP_OBJECT (Modifier, label91, "label91");
  GLADE_HOOKUP_OBJECT (Modifier, label92, "label92");
  GLADE_HOOKUP_OBJECT (Modifier, label88, "label88");
  GLADE_HOOKUP_OBJECT (Modifier, label87, "label87");
  GLADE_HOOKUP_OBJECT (Modifier, button36, "button36");
  GLADE_HOOKUP_OBJECT (Modifier, comboboxentry2, "comboboxentry2");
  GLADE_HOOKUP_OBJECT (Modifier, radiobutton6, "radiobutton6");
  GLADE_HOOKUP_OBJECT (Modifier, radiobutton5, "radiobutton5");
  GLADE_HOOKUP_OBJECT (Modifier, radiobutton4, "radiobutton4");

  return Modifier;
}

GtkWidget*
create_Afficher (void)
{
  GtkWidget *Afficher;
  GtkWidget *fixed8;
  GtkWidget *treeview1;
  GtkWidget *button39;

  Afficher = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (Afficher), _("Afficher"));

  fixed8 = gtk_fixed_new ();
  gtk_widget_show (fixed8);
  gtk_container_add (GTK_CONTAINER (Afficher), fixed8);

  treeview1 = gtk_tree_view_new ();
  gtk_widget_show (treeview1);
  gtk_fixed_put (GTK_FIXED (fixed8), treeview1, 88, 32);
  gtk_widget_set_size_request (treeview1, 432, 200);

  button39 = gtk_button_new_with_mnemonic (_("actualiser"));
  gtk_widget_show (button39);
  gtk_fixed_put (GTK_FIXED (fixed8), button39, 240, 248);
  gtk_widget_set_size_request (button39, 74, 29);

  g_signal_connect ((gpointer) button39, "clicked",
                    G_CALLBACK (on_button39_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (Afficher, Afficher, "Afficher");
  GLADE_HOOKUP_OBJECT (Afficher, fixed8, "fixed8");
  GLADE_HOOKUP_OBJECT (Afficher, treeview1, "treeview1");
  GLADE_HOOKUP_OBJECT (Afficher, button39, "button39");

  return Afficher;
}

GtkWidget*
create_supprimer (void)
{
  GtkWidget *supprimer;
  GtkWidget *fixed9;
  GtkWidget *label93;
  GtkWidget *label94;
  GtkWidget *button38;
  GtkWidget *radiobutton7;
  GSList *radiobutton7_group = NULL;
  GtkWidget *radiobutton8;
  GtkWidget *radiobutton9;
  GtkWidget *comboboxentry3;

  supprimer = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (supprimer), _("supprimer"));

  fixed9 = gtk_fixed_new ();
  gtk_widget_show (fixed9);
  gtk_container_add (GTK_CONTAINER (supprimer), fixed9);

  label93 = gtk_label_new (_("Jour de la semaine: "));
  gtk_widget_show (label93);
  gtk_fixed_put (GTK_FIXED (fixed9), label93, 24, 64);
  gtk_widget_set_size_request (label93, 136, 56);

  label94 = gtk_label_new (_("Type :"));
  gtk_widget_show (label94);
  gtk_fixed_put (GTK_FIXED (fixed9), label94, 24, 136);
  gtk_widget_set_size_request (label94, 112, 56);

  button38 = gtk_button_new_with_mnemonic (_("supprimer"));
  gtk_widget_show (button38);
  gtk_fixed_put (GTK_FIXED (fixed9), button38, 144, 240);
  gtk_widget_set_size_request (button38, 74, 29);

  radiobutton7 = gtk_radio_button_new_with_mnemonic (NULL, _("petit dejeuner"));
  gtk_widget_show (radiobutton7);
  gtk_fixed_put (GTK_FIXED (fixed9), radiobutton7, 112, 152);
  gtk_widget_set_size_request (radiobutton7, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobutton7), radiobutton7_group);
  radiobutton7_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobutton7));

  radiobutton8 = gtk_radio_button_new_with_mnemonic (NULL, _("dejeuner"));
  gtk_widget_show (radiobutton8);
  gtk_fixed_put (GTK_FIXED (fixed9), radiobutton8, 248, 152);
  gtk_widget_set_size_request (radiobutton8, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobutton8), radiobutton7_group);
  radiobutton7_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobutton8));

  radiobutton9 = gtk_radio_button_new_with_mnemonic (NULL, _("diner"));
  gtk_widget_show (radiobutton9);
  gtk_fixed_put (GTK_FIXED (fixed9), radiobutton9, 152, 184);
  gtk_widget_set_size_request (radiobutton9, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobutton9), radiobutton7_group);
  radiobutton7_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobutton9));

  comboboxentry3 = gtk_combo_box_entry_new_text ();
  gtk_widget_show (comboboxentry3);
  gtk_fixed_put (GTK_FIXED (fixed9), comboboxentry3, 160, 80);
  gtk_widget_set_size_request (comboboxentry3, 189, 29);
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxentry3), _("Lundi"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxentry3), _("Mardi"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxentry3), _("Mercredi"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxentry3), _("Jeudi"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxentry3), _("Vendredi"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxentry3), _("Samedi"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxentry3), _("Dimanche"));

  g_signal_connect ((gpointer) button38, "clicked",
                    G_CALLBACK (on_button38_clicked),
                    NULL);
  g_signal_connect ((gpointer) radiobutton7, "toggled",
                    G_CALLBACK (on_radiobutton7_toggled),
                    NULL);
  g_signal_connect ((gpointer) radiobutton8, "toggled",
                    G_CALLBACK (on_radiobutton8_toggled),
                    NULL);
  g_signal_connect ((gpointer) radiobutton9, "toggled",
                    G_CALLBACK (on_radiobutton9_toggled),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (supprimer, supprimer, "supprimer");
  GLADE_HOOKUP_OBJECT (supprimer, fixed9, "fixed9");
  GLADE_HOOKUP_OBJECT (supprimer, label93, "label93");
  GLADE_HOOKUP_OBJECT (supprimer, label94, "label94");
  GLADE_HOOKUP_OBJECT (supprimer, button38, "button38");
  GLADE_HOOKUP_OBJECT (supprimer, radiobutton7, "radiobutton7");
  GLADE_HOOKUP_OBJECT (supprimer, radiobutton8, "radiobutton8");
  GLADE_HOOKUP_OBJECT (supprimer, radiobutton9, "radiobutton9");
  GLADE_HOOKUP_OBJECT (supprimer, comboboxentry3, "comboboxentry3");

  return supprimer;
}
