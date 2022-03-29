#ifndef H_PUTCHAR_H
#define H_PUTCHAR_H
	int _putchar(char c);
#endif

#ifndef _MENSET_H
#define _MENSET_H
	char *_memset(char *s, char b, unsigned int n);
#endif/*_MENSET_H*/


#ifndef _MENCPY_H
#define _MENCPY_H
	char *_memcpy(char *dest, char *src, unsigned int n);
#endif/*_MENCPY_H*/


#ifndef _STRCHR_H
#define _STRCHR_H
	char *_strchr(char *s, char c);
#endif/*_STRCHR_H*/


#ifndef _STRSPN_H
#define _STRSPN_H
	unsigned int _strspn(char *s, char *accept);
#endif/*_STRSPN_H*/


#ifndef _STRPBRK_H
#define _STRPBRK_H
	char *_strpbrk(char *s, char *accept);
#endif/*_STRPBRK_H*/


#ifndef _STRSTR_H
#define _STRSTR_H
	char *_strstr(char *haystack, char *needle);
#endif/*_STRSTR_H*/


#ifndef PRINT_CHESSBOARD_H
#define PRINT_CHESSBOARD_H
	void print_chessboard(char (*a)[8]);
#endif/*PRINT_CHESSBOARD_H*/


#ifndef PRINT_DIAGSUMS_H
#define PRINT_DIAGSUMS_H
	void print_diagsums(int *a, int size);
#endif/*PRINT_DIAGSUMS_H*/


#ifndef SET_STRING_H
#define SET_STRING_H
	void set_string(char **s, char *to);
#endif/*SET_STRING_H*/







