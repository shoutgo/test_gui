#include <gtk/gtk.h>

/* This is a callback function */
void hello( GtkWidget *widget, gpointer data )
{
    g_print ("Hello World\n");
}

int main( int   argc, char *argv[] )
{
    GtkWidget *window;
    GtkWidget *button;
   
    /* init the program */
    gtk_init (&argc, &argv);
       
    /* make a new button */
    window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
    window = gtk_window_new (GTK_WINDOW_POPUP);
    gtk_window_resize(GTK_WINDOW(window), 250, 250);
    gtk_window_set_decorated(GTK_WINDOW(window), FALSE);
    gtk_window_set_opacity(GTK_WINDOW(window), 0.5);

    g_signal_connect (G_OBJECT (window), "destroy",
        G_CALLBACK (gtk_main_quit), NULL);
    gtk_container_set_border_width (GTK_CONTAINER (window), 10);
   
    /* make a new button */
    button = gtk_button_new_with_label ("Hello World");
    g_signal_connect (G_OBJECT (button), "clicked",
        G_CALLBACK (hello), NULL);
   
    /* add the button to the window */
    gtk_container_add (GTK_CONTAINER (window), button);
       
    /* show the widgets */
    gtk_widget_show (button);
    gtk_widget_show (window);
      
    gtk_main ();
   
    return 0;
}
