/* main.c — smallest useful GTK 4 program.
 * Toolchain: gcc + gtk4 (https://www.gtk.org/)
 * Build: see meson.build (`meson setup build && ninja -C build`)
 */
#include <gtk/gtk.h>

static void on_activate(GtkApplication *app, gpointer data) {
    (void)data;
    GtkWidget *win = gtk_application_window_new(app);
    gtk_window_set_title(GTK_WINDOW(win), "Hello");
    gtk_window_present(GTK_WINDOW(win));
}

int main(int argc, char **argv) {
    GtkApplication *app = gtk_application_new("dev.qompassai.hello",
                                            G_APPLICATION_DEFAULT_FLAGS);
    g_signal_connect(app, "activate", G_CALLBACK(on_activate), NULL);
    int status = g_application_run(G_APPLICATION(app), argc, argv);
    g_object_unref(app);
    return status;
}
