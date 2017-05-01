
#define MAX_LINENUM_SIZE        10      /* Max number of digits for line-number value */


/* Place a message in the query status label widget */
void DISPLAY_status(gchar *msg);

/* Display the results of the query */
void DISPLAY_search_results(search_t button, search_results_t *results);

/* Add the input string to the input history list. */
void DISPLAY_history_update(const gchar *newEntry);
void DISPLAY_history_clear(void);
void DISPLAY_history_load(void);
void DISPLAY_history_save(void);

/* Initialize the display module */
void DISPLAY_init(GtkWidget *main);

/* Return the contents of the 'clicked' history list item */
gboolean DISPLAY_get_clicked_entry(gint widget_x, gint widget_y, gchar **entry_p);

/* Return the filename from the activated query result row [defined by path] */
gboolean DISPLAY_get_filename_and_lineinfo(GtkTreePath *path, gchar **filename, gchar **line_num);

/* Update the progress bar */
void DISPLAY_update_progress_bar(guint count, guint max);

/* Update the splash progress bar */
void DISPLAY_update_build_progress(guint count, guint max);

/* Update the path label contents */
void DISPLAY_update_path_label(gchar *path);

/* Set the menu-icon display behavior */
void DISPLAY_always_show_image(gboolean always_show);

/* Set the session info button tooltip */
void DISPLAY_update_stats_tooltip(gchar *msg);

/* Convenience function to display a (modal=TRUE) message dialog */
void DISPLAY_msg(GtkMessageType type, const gchar *message);

/* Display a message dialog(type, message, modal) */
void DISPLAY_message_dialog(GtkMessageType type, const gchar *message, gboolean modal);

/* Update the cross-reference status indicator */
void DISPLAY_set_cref_current(gboolean up_to_date);

/* Set/change the parent for message dialogs */
void DISPLAY_message_set_transient_parent(GtkWidget *parent);

/* Display a message over a specified "parent" */
void DISPLAY_message_dialog_on_parent(GtkWindow *parent, GtkMessageType severity, const char *message);

/* Select the "active" progress bar widget (splash or rebuild) */
void DISPLAY_set_active_progress_bar(GtkWidget *progress_bar);
