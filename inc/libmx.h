#ifndef LIBMX_H
#define LIBMX_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <malloc/malloc.h>

#define INT_MIN -2147483648
#define INT_MAX 2147483647
#define LONG_MAX 9223372036854775807
#define LONG_MIN -9223372036854775807

typedef struct s_list {
    void *data;
    struct s_list *next;
}              t_list;



//-----Utils pack----- || 14 functions 
void mx_printchar(char c); //********* РЕФРЕШ
void mx_printstr(const char *s); //********* РЕФРЕШ
void mx_printint(int n); //********* РЕФРЕШ
double mx_pow(double n, unsigned int pow); //********* РЕФРЕШ
int mx_sqrt(int x); //********* РЕФРЕШ
unsigned long mx_hex_to_nbr(const char *hex); //********* РЕФРЕШ
void mx_foreach(int* arr, int size, void(*f)(int)); //********* РЕФРЕШ
int mx_binary_search(char **arr, int size, const char *s, int *count); //********* РЕФРЕШ
int mx_bubble_sort(char **arr, int size); //********* РЕФРЕШ
void mx_print_strarr(char **arr, const char *delim); // ЗРОБИВ
char *mx_nbr_to_hex(unsigned long nbr); // КІКОФФ
char *mx_itoa(int number); // ЗРОБИВ
void mx_print_unicode(wchar_t c); // Екстра хард -ЗРОБЛЕНО
int mx_quicksort(char **arr, int left, int right); // -ЗРОБЛЕНО


//-----String pack----- || 24 functions
int mx_strlen(const char *s); //********* РЕФРЕШ
int mx_strcmp(const char *s1, const char *s2); //********* РЕФРЕШ
char *mx_strnew(const int size); //********* РЕФРЕШ
void mx_swap_char(char *s1, char *s2); // КІКОФФ
void mx_str_reverse(char *s); // КІКОФФ
void mx_strdel(char **str); // КІКОФФ
int mx_get_char_index(const char *str, char c); // ЗРОБИВ
char *mx_strdup(const char *str); // КІКОФФ
char *mx_strcpy(char *dst, const char *src); // КІКОФФ
char *mx_strndup(const char *s1, int n); // ТОНУС
char* mx_strncpy(char *dst, const char *src, int len); // КІКОФФ
char *mx_strcat(char *s1, const char *s2); // КІКОФФ
char *mx_strstr(const char *haystack, const char *needle); // ЗРОБИВ
int mx_get_substr_index(const char *str, const char *sub); // ЗРОБИВ
int mx_count_substr(const char *str, const char *sub); // ЗРОБИВ
char **mx_strsplit(const char *s, char c); // ТОНУС* // #################### Передивитись
char *mx_strjoin(const char *s1, const char *s2); // ТОНУС*  // #################### Передивитись
int mx_count_words(const char *str, char c); // КІКОФФ // #################### Передивитись
char *mx_file_to_str(const char *file); // #################### Передивитись
char *mx_strtrim(const char *str); // ЗРОБИВ
char *mx_del_extra_spaces(const char *str);  //############## Передивитись
void mx_del_strarr(char ***arr); // ЗРОБИВ
char *mx_replace_substr(const char *str, const char *sub, const char *replace); // ЗРОБИВ
int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd); // -ЗРОБЛЕНО


//-----Memory pack----- || 9 functions
void *mx_memset(void *b, int c, size_t len); // ЗРОБИВ
void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n); // ЗРОБИВ
void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n); // ЗРОБИВ
int mx_memcmp(const void *s1, const void *s2, size_t n); // ЗРОБИВ
void *mx_memchr(const void *s, int c, size_t n); // ЗРОБИВ
void *mx_memrchr(const void *s, int c, size_t n); // ЗРОБИВ
void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len); // ЗРОБИВ
void *mx_memmove(void *dst, const void *src, size_t len); // ЗРОБИВ
void *mx_realloc(void *ptr, size_t size); //-ЗРОБЛЕНО



//-----List pack----- || 7 functions 
t_list *mx_create_node(void *data); // ЗРОБИВ
void mx_push_front(t_list **list, void *data); // ЗРОБИВ
void mx_push_back(t_list **list, void *data); // ЗРОБИВ
void mx_pop_front(t_list **head); // ЗРОБИВ
void mx_pop_back(t_list **head); // ЗРОБЛЕНО
int mx_list_size(t_list *list); // ЗРОБЛЕНО
t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *));  //-ЗРОБЛЕНО



//-----Usefull pack----- ||
int mx_strncmp(const char *s1, const char *s2, int n);
int mx_strlen_s(const char *s, char c);
bool mx_isspace(char c);
long int mx_min_to_plus(long int n); // **************** Під лібу
int mx_tolower(int c);
int mx_toupper(int c);
bool mx_isalpha(int c);
bool mx_isdigit(int c);
int mx_atoi(const char *str);



#endif

