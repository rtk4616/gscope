/* return a file's base name from its path name */

//===============================================================
// Defines
//===============================================================

/* fast string equality tests (avoids most strcmp() calls) - test second char to avoid common "leading-/" strings */
#define     STREQUAL(s1, s2)    (*(s1+1) == *(s2+1) && strcmp(s1, s2) == 0)
#define     STRNOTEQUAL(s1, s2) (*(s1) != *(s2) || strcmp(s1, s2) != 0)

/* database output macros that update it's offset */
#define     dbputc(c)           (++dboffset, (void) putc(c, newrefs))

#define     ENCODE  TRUE
#define     DECODE  FALSE

#ifdef GTK3_BUILD

#define lookup_widget(wiget, name) my_lookup_widget(name)

#endif

//===============================================================
// Public Functions
//===============================================================

char       *my_basename(const char *path);
char       *my_dirname(char *path);
void        my_cannotopen(char *file);
GtkWidget  *my_lookup_widget(gchar *name);
void        my_add_widget(gpointer data, gpointer user_data);
pid_t       my_system(gchar *application);
void        my_space_codec(gboolean encode, gchar *my_string);
void        my_chdir(gchar *path);
void        my_asprintf(gchar **str_ptr, const char *fmt, ...);

