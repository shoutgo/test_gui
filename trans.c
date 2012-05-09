#include <gtk/gtk.h>

int main(int argc, char *argv[])
{
   GtkWidget *window = NULL;
   gtk_init(&argc, &argv);

   window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
   gtk_window_set_opacity(GTK_WINDOW(window), 0.5);

   gtk_widget_show_all(window);
   gtk_main();
   return TRUE;
} 
