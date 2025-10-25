/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmarti <andmarti@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 01:41:43 by andmarti          #+#    #+#             */
/*   Updated: 2025/10/24 18:57:04 by andmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

/*---PART-ONE---*/

/**
 * @brief returns if 'c' is alphabetical
 * 
 * @param c character
 * @return 1 for true; 0 for false
*/
int		ft_isalpha(int c);
/**
 * @brief returns if 'c' is digit
 * 
 * @param c character
 * @return 1 for true; 0 for false
*/
int		ft_isdigit(int c);
/**
 * @brief returns if 'c' is alphanumerical 
 * 
 * @param c character
 * @return 1 for true; 0 for false
*/
int		ft_isalnum(int c);
/**
 * @brief returns if 'c' is in ascii range 
 * 
 * @param c character
 * @return 1 for true; 0 for false
*/
int		ft_isascii(int c);
/**
 * @brief returns if 'c' is a printable character  
 * 
 * @param c character
 * @return 1 for true; 0 for false
*/
int		ft_isprint(int c);
/**
 * @brief if c is uppercase letter, makes it lowercase, if not returns c
 * 
 * @param c character
 * @return lowercased c
*/
int		ft_toupper(int c);
/**
 * @brief finds first occurence of c in character string s
 * 
 * @param s character string
 * @param c character to find
 * @return pointer to first occurence of c
*/
int		ft_tolower(int c);
/**
 * @brief returns the length of the character string
 * 
 * @param s character string
 * @return len as an unsigned int
*/
size_t	ft_strlen(const char *s);
/**
 * @brief sets b until b + len to c
 * 
 * @param b pointer to memory
 * @param c character to set
 * @param len length of bytes to set
 * @return returns pointer to b
*/
void	*ft_memset(void *b, int c, size_t len);
/**
 * @brief sets s until s + n to 0
 * 
 * @param s pointer to memory
 * @param n length of bytes to set to 0
 * @return void
*/
void	ft_bzero(void *s, size_t n);
/**
 * @brief copies src to dst for n bytes. If strings overlap behavior is undefined
 * 
 * @param dst destination character string
 * @param src source character string
 * @param n length of bytes to copy
 * @return void
*/
void	*ft_memcpy(void *dst, const void *src, size_t n);
/**
 * @brief copies src to dst for n bytes. 
 * If strings overlap it will copy in a non-destructive manner
 * 
 * @param dst destination character string
 * @param src source character string
 * @param len length of bytes to copy
 * @return void
*/
void	*ft_memmove(void *dst, const void *src, size_t len);
/**
 * @brief if c is lowercase letter, makes it uppercase, if not returns c
 * 
 * @param c character
 * @return uppercased c
*/
char	*ft_strchr(const char *s, int c);
/**
 * @brief finds last occurence of c in character string s
 * 
 * @param s character string
 * @param c character to find
 * @return pointer to last occurence of c
*/
char	*ft_strrchr(const char *s, int c);
/**
 * @brief lexicographically compare first n characters of s1 and s2
 * 
 * @param s1 character string 1
 * @param s2 character string 2
 * @param n length to compare
 * @return difference between s1 and s2
*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);
/**
 * @brief locates first occurence of c (converted to unsigned char)
 * 
 * @param s pointer to memory
 * @param c bytes to locate
 * @return pointer to first occurence of c
*/
void	*ft_memchr(const void *s, int c, size_t n);
/**
 * @brief lexicographically compare first n characters of s1 and s2
 * 
 * @param s1 pointer to memory 1
 * @param s2 pointer to memory 2
 * @param n length of bytes to compare
 * @return difference between s1 and s2
*/
int		ft_memcmp(const void *s1, const void *s2, size_t n);
/**
 * @brief locate first occurence of needle string within haystack string
 * 
 * @param haystack larger string to search through
 * @param needle smaller string to find
 * @param len length to compare
 * @return pointer to the first character of succesfully found needle
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
/**
 * @brief lexicographically compare first n characters of s1 and s2
 * 
 * @param str integer value represented as character string
 * @return integer value stored in integer
*/
int		ft_atoi(const char *str);
/**
 * @brief duplicates given string on heap memory
 * 
 * @param s1 string to duplicate
 * @return duplicated string
*/
char	*ft_strdup(const char *s1);
/**
 * @brief allocates memory for count objects of size size and set memory to 0
 * 
 * @param count num of object
 * @param size size of object in bytes
 * @return pointer to allocated memory
*/
void	*ft_calloc(size_t count, size_t size);
/**
 * @brief copies source to destination. inputs must be NULL terminated
 * 
 * @param dst destination string
 * @param src source string to copy
 * @param dstsize length to be copied including sentinal character
 * @return length of string tried to create
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
/**
 * @brief concatenates source to destination. inputs must be NULL terminated
 * 
 * @param dst destination string
 * @param src source string concatenate
 * @param dstsize length of dst including sentinal character.
 * function will stop after this many characters
 * @return length of string tried to create
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

/*---PART-TWO---*/

/**
 * @brief Allocates (with malloc(3)) and returns a substring
from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len’.
 * 
 * @param s The string from which to create the substring.
 * @param start The start index of the substring in the
string ’s’.
 * @param len  The maximum length of the substring.
 * @return The substring.
NULL if the allocation fails.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len);
/**
 * @brief joins to read only strings
 * 
 * @param s1 The prefix string.
 * @param s2 The suffix string.
 * @return Allocates (with malloc(3)) and returns a new
string, which is the result of the concatenation
of ’s1’ and ’s2’.
*/
char	*ft_strjoin(char const *s1, char const *s2);
/**
 * @brief Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
 * 
 * @param s1 The string to be trimmed.
 * @param set The reference set of characters to trim.
 * @return The trimmed string.
NULL if the allocation fails.
*/
char	*ft_strtrim(char const *s1, char const *set);
/**
 * @brief Outputs the character ’c’ to the given file
descriptor.
 * 
 * @param c The character to output.
 * @param fd  The file descriptor on which to write.
 * @return void
*/
void	ft_putchar_fd(char c, int fd);
/**
 * @brief Outputs the string ’s’ to the given file
descriptor.
 * 
 * @param s The string to output.
 * @param fd The file descriptor on which to write.
 * @return void
*/
void	ft_putstr_fd(char *s, int fd);
/**
 * @brief Outputs the string ’s’ to the given file
descriptor.
 * 
 * @param s The string to output.
 * @param fd The file descriptor on which to write.
 * @return void
*/
void	ft_putendl_fd(char *s, int fd);
/**
 * @brief Outputs the integer ’n’ to the given file
descriptor.
 * 
 * @param n The integer to output.
 * @param fd The file descriptor on which to write.
 * @return void
*/
void	ft_putnbr_fd(int n, int fd);
/**
 * @brief Allocates (with malloc(3)) and returns an array
 * of strings obtained by splitting ’s’ using the
 * character ’c’ as a delimiter. The array must end
 * with a NULL pointer.
 * 
 * @param s  The string to be split.
 * @param c The delimiter character.
 * @return splitted array
*/
char	**ft_split(char const *s, char c);
/**
 * @brief Applies the function ’f’ on each character of
 * the string passed as argument, passing its index
 * as first argument. Each character is passed by
 * address to ’f’ to be modified if necessary.
 * 
 * @param s The string on which to iterate.
 * @param f The function to apply to each character.
 * @return void
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
/**
 * @brief Applies the function f to each character of the
 * string s, passing its index as the first argument
 * and the character itself as the second. A new
 * string is created (using malloc(3)) to collect the
 * results from the successive applications of f.
 * 
 * @param s The string on which to iterate.
 * @param f The function to apply to each character.
 * @return The string created from the successive applications
of ’f’.
Returns NULL if the allocation fails.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
/**
 * @brief Allocates (with malloc(3)) and returns a string
 * representing the integer received as an argument.
 * Negative numbers must be handled.
 * 
 * @param n the integer to convert.
 * @return The string representing the integer.
 * NULL if the allocation fails.
*/
char	*ft_itoa(int n);

/*---LIST-DEF---*/

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/*---BONUS---*/

/**
 * @brief Allocates (with malloc(3)) and returns a new node.
 * The member variable ’content’ is initialized with
 * the value of the parameter ’content’. The variable
 * ’next’ is initialized to NULL.
 * 
 * @param content The content to create the node with.
 * @return The new node
*/
t_list	*ft_lstnew(void *content);
/**
 * @brief Adds the node ’new’ at the beginning of the list.
 * 
 * @param lst The address of a pointer to the first link of
 * a list.
 * @param new The address of a pointer to the node to be
 * added to the list.
*/
void	ft_lstadd_front(t_list **lst, t_list *new);
/**
 * @brief Counts the number of nodes in a list.
 * 
 * @param lst The beginning of the list.
 * @return The length of the list
*/
int		ft_lstsize(t_list *lst);
/**
 * @brief Returns the last node of the list.
 * 
 * @param lst The beginning of the list.
 * @return Last node of the list
*/
t_list	*ft_lstlast(t_list *lst);
/**
 * @brief Adds the node ’new’ at the end of the list.
 * 
 * @param lst The address of a pointer to the first link of
 * a list.
 * @param new The address of a pointer to the node to be
 * added to the list.
*/
void	ft_lstadd_back(t_list **lst, t_list *new);
/**
 * @brief Takes as a parameter a node and frees the memory of
 * the node’s content using the function ’del’ given
 * as a parameter and free the node. The memory of
 * ’next’ must not be freed.
 * 
 * @param lst The node to free.
 * @param del The address of the function used to delete
 * the content.
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *));
/**
 * @brief Deletes and frees the given node and every
 * successor of that node, using the function ’del’
 * and free(3).
 * Finally, the pointer to the list must be set to
 * NULL.
 * 
 * @param lst The address of a pointer to a node.
 * @param del  The address of the function used to delete
 * the content of the node.
*/
void	ft_lstclear(t_list **lst, void (*del)(void *));
/**
 * @brief Iterates the list ’lst’ and applies the function
 * ’f’ on the content of each node.
 * 
 * @param lst The address of a pointer to a node.
 * @param f The address of the function used to iterate on
 * the list.
*/
void	ft_lstiter(t_list *lst, void (*f)(void *));
/**
 * @brief Iterates the list ’lst’ and applies the function
 * ’f’ on the content of each node. Creates a new
 * list resulting of the successive applications of
 * the function ’f’. The ’del’ function is used to
 * delete the content of a node if needed.
 * 
 * @param lst The address of a pointer to a node.
 * @param f The address of the function used to iterate on
 * the list.
 * @param del The address of the function used to delete
 * the content of a node if needed.
 * @return The new list.
 * NULL if the allocation fails.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
