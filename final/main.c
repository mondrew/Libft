/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 17:09:51 by mondrew           #+#    #+#             */
/*   Updated: 2020/05/04 21:08:57 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// ----------========== PART NUMBER ONE ==========----------

//int		main(void)
//{
//	printf("==========> The test for MEMSET <==========\n");
//	char str1[] = "Hello World!";
//	char str2[] = "Hello World!";
//	//int a;
//	//int b;
//	//a = 567890;
//	//b = 567890;
//
//	printf("The initial data is:\n%s\n", str1);
//	memset(str1, 122, 0);
//	printf("The string after original memset is:\n%s\n", str1);
//	ft_memset(str2, 122, 3);
//	printf("The string after ft_memset is:\n%s\n", str2);
//	return (0);
//	}



//int		main(void)
//{
//	printf("==========> The test for BZERO <==========\n");
//	char str1[] = "Hello World!";
//	char str2[] = "Hello World!";
//	int i;
//	//int a;
//	//int b;
//	//a = 567890;
//	//b = 567890;
//
//	i = 0;
//	printf("The initial data is:\n%s\n", str1);
//	bzero(str1, 3);
//	printf("The string after original bzero is:\n");
//	while (i < 13)
//	{
//		printf("%c", str1[i]);
//		i++;
//	}
//	printf("\n");
//	i = 0;
//	ft_bzero(str2, 3);
//	printf("The string after ft_bzero is:\n");
//	while (i < 13)
//	{
//		printf("%c", str2[i]);
//		i++;
//	}
//	printf("\n");
//	return (0);
//	}



//int		main(void)
//{
//	printf("==========> The test for MEMCPY <==========\n");
//	char str1[] = "Hello World!";
//	//char str2[] = "XXXXX";
//	char str3[] = "Hello World!";
//	//char str4[] = "XXXXX";
//	//int a;
//	//int b;
//	//a = 567890;
//	//b = 567890;

//	printf("The initial dest data is:\n%s\n", str1);
//	//printf("The initial src data is:\n%s\n", str2);
//	memcpy(str1 + 2, str1, 3);
//	printf("The dest data after original memcpy is:\n%s\n", str1);
//	ft_memcpy(str3 + 2, str3, 3);
//	printf("The string after ft_memcpy is:\n%s\n", str3);
//	return (0);
//	}



//int		main(void)
//{
//	printf("==========> The test for MEMCCPY <==========\n");
//	char str1[] = "Hello World!";
//	char str2[] = "XXXXX";
//	char str3[] = "Hello World!";
//	char str4[] = "XXXXX";
//	//int a;
//	//int b;
//	//a = 567890;
//	//b = 567890;
//
//	printf("The initial dest data is:\n%s\n", str1);
//	printf("The initial src data is:\n%s\n", str2);
//	memccpy(str2, str1, 122, 15);
//	printf("The dest data after original memccpy is:\n%s\n", str2);
//	ft_memccpy(str4, str3, 122, 15);
//	printf("The string after ft_memccpy is:\n%s\n", str4);
//	return (0);
//	}



//int		main(void)
//{
//	printf("==========> The test for MEMMOVE <==========\n");
//	char str1[] = "Hello World!";
//	//char str2[] = "XXXXX";
//	char str3[] = "Hello World!";
//	//char str4[] = "XXXXX";
//	//int a;
//	//int b;
//	//a = 567890;
//	//b = 567890;
//
//	printf("The initial dest data is:\n%s\n", str1);
//	//printf("The initial src data is:\n%s\n", str2);
//	memmove(str1 + 2, str1, 3);
//	printf("The dest data after original memmove is:\n%s\n", str1);
//	ft_memmove(str3 + 2, str3, 3);
//	printf("The string after ft_memmove is:\n%s\n", str3);
//	return (0);
//	}



//int		main(void)
//{
//	printf("==========> The test for MEMCHR <==========\n");
//	char str1[] = "Hello World!";
//	char *str2;
//	char str3[] = "Hello World!";
//	char *str4;
//	//int a;
//	//int b;
//	//a = 567890;
//	//b = 567890;
//
//	printf("The initial data is:\n%s\n", str1);
//	str2 = memchr(str1, 122, 10);
//	printf("The dest data after original memchr is:\n%s\n", str2);
//	str4 = ft_memchr(str3, 122, 10);
//	printf("The string after ft_memchr is:\n%s\n", str4);
//	return (0);
//	}



//int		main(void)
//{
//	printf("==========> The test for MEMCMP <==========\n");
//	char	str1[] = "Hello World!";
//	char	str2[] = "Hello Warld!";
//	char	str3[] = "Hello World!";
//	char	str4[] = "Hello Warld!";
//	int		res;
//	//int a;
//	//int b;
//	//a = 567890;
//	//b = 567890;
//
//	printf("The initial first data is:\n%s\n", str1);
//	printf("The initial second data is:\n%s\n", str2);
//	res = memcmp(str1, str2, 2147483647);
//	printf("The result of original memcmp is:\n%d\n", res);
//	res = ft_memcmp(str3, str4, 2147483647);
//	printf("The string after ft_memcmp is:\n%d\n", res);
//	return (0);
//	}



//int		main(void)
//{
//	printf("==========> The test for STRLEN <==========\n");
//	char	str1[] = "Hello World!";
//	char	str2[] = "Hello World!";
//	//char	str1[] = "";
//	//char	str2[] = "";
//	int		res;
//
//	printf("The initial string is:\n%s\n", str1);
//	res = strlen(str1);
//	printf("The result of original strlen is:\n%d\n", res);
//	res = ft_strlen(str2);
//	printf("The string after ft_strlen is:\n%d\n", res);
//	return (0);
//	}



//size_t	strlcpy(char *dst, const char *src, size_t siz)
//{
//	char *d = dst;
//	const char *s = src;
//	size_t n = siz;
//	if (n != 0)
//	{
//		while (--n != 0)
//		{
//			if ((*d++ = *s++) == '\0')
//				break;
//		}
//	}
//	if (n == 0)
//	{
//		if (siz != 0)
//			*d = '\0';
//		while (*s++)
//			;
//	}
//	return(s - src - 1);
//}
//
//int		main(void)
//{
//	printf("==========> The test for STRLCPY <==========\n");
//
//
//	char	str1[] = "Hello World!";
//	char	str2[] = "XXXXXX";
//	char	str3[] = "Hello World!";
//	char	str4[] = "XXXXXX";
//	int		res;
//
//	printf("The initial src string is:\n%s\n", str1);
//	printf("The initial dest string is:\n%s\n", str2);
//	res = strlcpy(str2, str1, 0);
//	printf("The dest string atfer strlcpy is:\n%s\n", str2);
//	printf("The result of original strlcpy is:\n%d\n", res);
//	res = ft_strlcpy(str4, str3, 0);
//	printf("The dest string atfer ft_strlcpy is:\n%s\n", str4);
//	printf("The string after ft_strlcpy is:\n%d\n", res);
//	return (0);
//	}



//size_t	strlcat(char *dst, const char *src, size_t dsize)
//{
//	const char *odst = dst;
//	const char *osrc = src;
//	size_t n = dsize;
//	size_t dlen;
//	while (n-- != 0 && *dst != '\0')
//		dst++;
//	dlen = dst - odst;
//	n = dsize - dlen;
//	if (n-- == 0)
//		return(dlen + strlen(src));
//	while (*src != '\0')
//	{
//		if (n != 0)
//		{
//			*dst++ = *src;
//			n--;
//		}
//		src++;
//	}
//	*dst = '\0';
//	return(dlen + (src - osrc));
//}

//int		main(void)
//{
//	printf("==========> The test for STRLCAT <==========\n");
//	char	str1[] = "World!";
//	char	str2[] = "Hel";
//	char	str3[] = "World!";
//	char	str4[] = "Hel";
//	size_t	res;
//
//	printf("The initial src string is:\n%s\n", str1);
//	printf("The initial dest string is:\n%s\n", str2);
//	res = strlcat(str2, str1, 3);
//	printf("The dest string atfer strlcat is:\n%s\n", str2);
//	printf("The result of original strlcat is:\n%ld\n", res);
//	res = ft_strlcat(str4, str3, 3);
//	printf("The dest string atfer ft_strlcat is:\n%s\n", str4);
//	printf("The string after ft_strlcat is:\n%ld\n", res);
//	return (0);
//}



//int		main(void)
//{
//	printf("==========> The test for STRCHR <==========\n");
//	char	str1[] = "Hello World!";
//	char	*str2;
//	char	str3[] = "Hello World!";
//	char	*str4;
//
//	printf("The initial string is:\n%s\n", str1);
//	str2 = strchr(str1, 108);
//	printf("The result of original strchr is:\n%s\n", str2);
//	str4 = ft_strchr(str3, 108);
//	printf("The result of ft_strchr is:\n%s\n", str4);
//	return (0);
//}



//int		main(void)
//{
//	printf("==========> The test for STRRCHR <==========\n");
//	char	str1[] = "Hello World!";
//	char	*str2;
//	char	str3[] = "Hello World!";
//	char	*str4;
//
//	printf("The initial string is:\n%s\n", str1);
//	str2 = strrchr(str1, 108);
//	printf("The result of original strrchr is:\n%s\n", str2);
//	str4 = ft_strrchr(str3, 108);
//	printf("The result of ft_strrchr is:\n%s\n", str4);
//	return (0);
//}


//char	*strnstr(const char *s, const char *find, size_t slen)
//{
//	char c, sc;
//	size_t len;
//	if ((c = *find++) != '\0')
//	{
//		len = strlen(find);
//		do
//		{
//			do
//			{
//				if (slen-- < 1 || (sc = *s++) == '\0')
//					return (NULL);
//			} while (sc != c);
//			if (len > slen)
//				return (NULL);
//		} while (strncmp(s, find, len) != 0);
//		s--;
//	}
//	return ((char *)s);
//}
//
//int		main(void)
//{
//	printf("==========> The test for STRNSTR <==========\n");
//	char	str1[] = "Hello World!";
//	char	str2[] = "llo";
//	char	*str_res;
//	char	str3[] = "Hello World!";
//	char	str4[] = "llo";
//
//	printf("The initial haystack string is:\n%s\n", str1);
//	printf("The initial needle string is:\n%s\n", str2);
//	str_res = strnstr(str1, str2, 111);
//	printf("The result of original strnstr is:\n%s\n", str_res);
//	str_res = ft_strnstr(str3, str4, 111);
//	printf("The result of ft_strnstr is:\n%s\n", str_res);
//	return (0);
//}



//int		main(void)
//{
//	printf("==========> The test for STRNCMP <==========\n");
//	char	str1[] = "Hello World!";
//	char	str2[] = "Hello";
//	char	str3[] = "Hello World!";
//	char	str4[] = "Hello";
//	int		res;
//
//	printf("The initial s1 string is:\n%s\n", str1);
//	printf("The initial s2 string is:\n%s\n", str2);
//	res = strncmp(str1, str2, 6);
//	printf("The result of original strncmp is:\n%d\n", res);
//	res = ft_strncmp(str3, str4, 6);
//	printf("The result of ft_strncmp is:\n%d\n", res);
//	return (0);
//}



//int		main(void)
//{
//	printf("==========> The test for ATOI <==========\n");
//	char	str1[] = "  \t \v  -32123456 78901234567899	";
//	int		res;
//
//	printf("The initial string is:\n%s\n", str1);
//	res = atoi(str1);
//	printf("The result of original atoi is:\n%d\n", res);
//	res = ft_atoi(str1);
//	printf("The result of ft_atoi is:\n%d\n", res);
//	return (0);
//}



//int		main(void)
//{
//	printf("==========> The test for ISALPHA <==========\n");
//	int	res;
//
//	printf("The character is:\n%c\n", 'a');
//	res = isalpha('a');
//	printf("The result of original isalpha is:\n%d\n", res);
//	res = ft_isalpha('a');
//	printf("The result of ft_isalpha is:\n%d\n", res);
//	return (0);
//}



//int		main(void)
//{
//	printf("==========> The test for ISDIGIT <==========\n");
//	int	res;
//
//	printf("The character is:\n%c\n", 5);
//	res = isdigit(5);
//	printf("The result of original isdigit is:\n%d\n", res);
//	res = ft_isdigit(5);
//	printf("The result of ft_isdigit is:\n%d\n", res);
//	return (0);
//}



//int		main(void)
//{
//	printf("==========> The test for ISALNUM <==========\n");
//	int	res;
//
//	printf("The character is:\n%c\n", '-');
//	res = isalnum('-');
//	printf("The result of original isalnum is:\n%d\n", res);
//	res = ft_isalnum('-');
//	printf("The result of ft_isalnum is:\n%d\n", res);
//	return (0);
//}



//int		main(void)
//{
//	printf("==========> The test for ISASCII <==========\n");
//	int	res;
//
//	printf("The character is:\n%c\n", 128);
//	res = isascii(128);
//	printf("The result of original isascii is:\n%d\n", res);
//	res = ft_isascii(128);
//	printf("The result of ft_isascii is:\n%d\n", res);
//	return (0);
//}



//int		main(void)
//{
//	printf("==========> The test for ISPRINT <==========\n");
//	int	res;
//
//	printf("The character is:\n%c\n", 126);
//	res = isprint(126);
//	printf("The result of original isprint is:\n%d\n", res);
//	res = ft_isprint(126);
//	printf("The result of ft_isprint is:\n%d\n", res);
//	return (0);
//}



//int		main(void)
//{
//	printf("==========> The test for TOUPPER <==========\n");
//	int	res;
//
//	printf("The character is:\n%c\n", 68);
//	res = toupper(68);
//	printf("The result of original toupper is:\n%c\n", res);
//	res = ft_toupper(68);
//	printf("The result of ft_toupper is:\n%c\n", res);
//	return (0);
//}



//int		main(void)
//{
//	printf("==========> The test for TOLOWER <==========\n");
//	int	res;
//
//	printf("The character is:\n%c\n", 122);
//	res = tolower(122);
//	printf("The result of original tolower is:\n%c\n", res);
//	res = ft_tolower(122);
//	printf("The result of ft_tolower is:\n%c\n", res);
//	return (0);
//}



//int		main(void)
//{
//	printf("==========> The test for CALLOC <==========\n");
//	char *str1;
//	char *str2;
//
//	str1 = calloc(47, sizeof(char));
//	str2 = ft_calloc(6, sizeof(char));
//	return (0);
//}



//int		main(void)
//{
//	printf("==========> The test for STRDUP <==========\n");
//	char str1[] = "Hello World!";
//	char *str2;
//	char *str3;
//
//	printf("The initial string is:\n%s\n", str1);
//	str2 = strdup(str1);
//	printf("The string copied with original strdup is:\n%s\n", str2);
//	str3 = ft_strdup(str1);
//	printf("The string copied with ft_strdup is:\n%s\n", str3);
//	return (0);
//}



// ----------========== PART NUMBER ONE ==========----------

//int		main(void)
//{
//	printf("==========> The test for FT_SUBSTR <==========\n");
//	char str1[] = "Hello World!";
//	char *str2;
//
//	printf("The initial string is:\n%s\n", str1);
//	str2 = ft_substr(str1, 0, 0);
//	printf("The substring allocated with ft_substr is:\n%s\n", str2);
//	return (0);
//}



//int		main(void)
//{
//	printf("==========> The test for FT_STRJOIN <==========\n");
//	char str1[] = "Hello ";
//	char str2[] = "World!";
//	char *str3;
//
//	printf("The initial string 1 is:\n%s\n", str1);
//	printf("The initial string 2 is:\n%s\n", str2);
//	str3 = ft_strjoin(str1, str2);
//	printf("The new string made with ft_strjoin is:\n%s\n", str3);
//	return (0);
//}



//int		main(void)
//{
//	printf("==========> The test for FT_STRTRIM <==========\n");
//	char str1[] = "Hello World!";
//	char str2[] = "!rclidoeooHuy";
//	char *str3;
//
//	printf("The initial string to trim is:\n%s\n", str1);
//	printf("The initial set string is:\n%s\n", str2);
//	str3 = ft_strtrim(str1, str2);
//	printf("The new string made with ft_strtrim is:\n%s\n", str3);
//	return (0);
//}



//int		main(void)
//{
//	printf("==========> The test for FT_SPLIT <==========\n");
//	char str1[] = "test1,,,,,,,test2,test3,test4,test5";
//	//char str1[] = "                     ";
//	char c = 32;
//	char **array;
//	int i = 0;
//
//	printf("The initial string to split is:\n%s\n", str1);
//	printf("The delimiter is: %c\n", c);
//	array = ft_split(str1, c);
//	printf("The result is:\n");
//	while (array[i] != NULL)
//	{
//		printf("%s\n", array[i]);
//		i++;
//	}
//	return (0);
//}



//int		main(void)
//{
//	printf("==========> The test for FT_ITOA <==========\n");
//	int	n = 21432047483648;
//	char *res;
//
//	printf("The initial number is:\n%d\n", n);
//	res = ft_itoa(n);
//	printf("The result is:\n%s\n", res);
//	return (0);
//}


//char	ft_help(unsigned int nbr, char c)
//{
//	c = c + nbr;
//	return (c);
//}
//
//int		main(void)
//{
//	printf("==========> The test for FT_STRMAPI <==========\n");
//	char str[] = "Hello World!";
//	char *res;
//
//	printf("The initial string is:\n%s\n", str);
//	res = ft_strmapi(str, &ft_help);
//	printf("The result is:\n%s\n", res);
//	return (0);
//}



//int		main(void)
//{
//	printf("==========> The test for FT_PUTCHAR_FD <==========\n");
//	char str[] = "Hello World!";
//	int	i = 0;
//	int	fd;
//
//	fd = 1;
//	printf("The result of ft_putchar_fd is:\n");
//	while (str[i] != '\0')
//	{
//		ft_putchar_fd(str[i], fd);
//		i++;
//	}
//	printf("\n");
//	return (0);
//}



//int		main(void)
//{
//	printf("==========> The test for FT_PUTSTR_FD <==========\n");
//	char str[] = "Hello World!";
//	int	fd;
//
//	fd = 1;
//	printf("The initial string is:\n%s\n", str);
//	printf("The result of ft_putstr_fd is:\n");
//	ft_putstr_fd(str, fd);
//	printf("\n");
//	return (0);
//}



//int		main(void)
//{
//	printf("==========> The test for FT_PUTENDL_FD <==========\n");
//	char str[] = "Hello World!";
//	int	fd;
//
//	fd = 1;
//	printf("The initial string is:\n%s\n", str);
//	printf("The result of ft_putendl_fd is:\n");
//	ft_putendl_fd(str, fd);
//	return (0);
//}



//int		main(void)
//{
//	printf("==========> The test for FT_PUTNBR_FD <==========\n");
//	int	nb;
//	int fd;
//
//	nb = 214783648;
//	fd = 1;
//	printf("The initial number is:\n%d\n", nb);
//	printf("The result of ft_putnbr_fd is:\n");
//	ft_putnbr_fd(nb, fd);
//	printf("\n");
//	return (0);
//}


// ----------========== PART NUMBER ONE ==========----------

//int		main(void)
//{
//	printf("==========> The test for FT_LSTNEW <==========\n");
//	int	nb;
//	t_list	*node;
//
//	nb = 214783648;
//	printf("The data to add is:\n%d\n", nb);
//	node = ft_lstnew(&nb);
//	printf("The data in new list' elem is: \n%d\n", *((int *)(node->content)));
//	return (0);
//}



//int		main(void)
//{
//	printf("==========> The test for FT_LSTADD_FRONT <==========\n");
//	int	nb1;
//	int	nb2;
//	t_list	*node;
//	t_list	*node_new;
//
//	nb1 = 214783648;
//	nb2 = 5;
//	printf("The data to add is:\n%d\n", nb1);
//	node = ft_lstnew(&nb1);
//	node_new = ft_lstnew(&nb2);
//	ft_lstadd_front(&node, node_new);
//	printf("The data in the new front elem is: \n%d\n", *((int *)(node->content)));
//	return (0);
//}



//int		main(void)
//{
//	printf("==========> The test for FT_LSTSIZE <==========\n");
//	int	nb1;
//	int	nb2;
//	t_list	*node;
//	int size;
//
//	nb1 = 214783648;
//	nb2 = 5;
//	printf("The data to add is:\n%d\n", nb1);
//	node = ft_lstnew(&nb1);
//	ft_lstadd_front(&node, &nb2);
//	ft_lstadd_front(&node, &nb2);
//	ft_lstadd_front(&node, &nb2);
//	ft_lstadd_front(&node, &nb2);
//	size = ft_lstsize(node);
//	printf("The list size is:\n%d\n", size);
//	return (0);
//}



//int		main(void)
//{
//	printf("==========> The test for FT_LSTLAST <==========\n");
//	int	nb1;
//	int	nb2;
//	int nb3;
//	int nb4;
//	t_list	*node;
//
//	nb1 = 214783648;
//	nb2 = 5;
//	nb3 = 7;
//	nb4 = 99;
//	node = ft_lstnew(&nb1);
//	ft_lstadd_front(&node, &nb2);
//	ft_lstadd_front(&node, &nb3);
//	ft_lstadd_front(&node, &nb3);
//	ft_lstadd_front(&node, &nb4);
//	node = ft_lstlast(node);
//	printf("The list last elem' data is:\n%d\n", *((int *)(node->content)));
//	return (0);
//}



//int		main(void)
//{
//	printf("==========> The test for FT_LSTADD_BACK <==========\n");
//	int	nb1;
//	int	nb2;
//	t_list	*node;
//	t_list	*node_new;
//
//	nb1 = 214783648;
//	nb2 = 5;
//	printf("The data to add is:\n%d\n", nb1);
//	node = ft_lstnew(&nb1);
//	node_new = ft_lstnew(&nb2);
//	ft_lstadd_back(&node, node_new);
//	node = ft_lstlast(node);
//	printf("The data in the new last elem is: \n%d\n", *((int *)(node->content)));
//	return (0);
//}


//void	ft_del_cont(void *data)
//{
//	data = NULL;
//	free(data);
//}
//
//int		main(void)
//{
//	printf("==========> The test for FT_LSTDELONE <==========\n");
//	int	nb1;
//	int	nb2;
//	int nb3;
//	int nb4;
//	t_list	*node;
//	t_list	*new_node;
//
//	nb1 = 214783648;
//	nb2 = 5;
//	nb3 = 7;
//	nb4 = 99;
//	node = ft_lstnew(&nb1);
//	new_node = ft_lstnew(&nb2);
//	ft_lstadd_front(&node, new_node);
//	new_node = ft_lstnew(&nb3);
//	ft_lstadd_front(&node, new_node);
//	new_node = ft_lstnew(&nb4);
//	ft_lstadd_front(&node, new_node);
//	ft_lstdelone(node, &ft_del_cont);
//	printf("The list first elem after removing is:\n%d\n", *((int *)(node->content)));
//	return (0);
//}



//void	ft_del_cont(void *data)
//{
//	data = NULL;
//	free(data);
//}
//
//int		main(void)
//{
//	printf("==========> The test for FT_LSTCLEAR <==========\n");
//	int	nb1;
//	int	nb2;
//	int nb3;
//	int nb4;
//	t_list	*node;
//	t_list	*new_node;
//
//	nb1 = 214783648;
//	nb2 = 5;
//	nb3 = 7;
//	nb4 = 99;
//	node = ft_lstnew(&nb1);
//	new_node = ft_lstnew(&nb2);
//	ft_lstadd_front(&node, new_node);
//	new_node = ft_lstnew(&nb3);
//	ft_lstadd_front(&node, new_node);
//	new_node = ft_lstnew(&nb4);
//	ft_lstadd_front(&node, new_node);
//	ft_lstclear(&node, &ft_del_cont);
//	return (0);
//}



//void	ft_foo(void *data)
//{
//	*((int *)data) = *((int *)data) * 2;
//}
//
//int		main(void)
//{
//	printf("==========> The test for FT_LSTITER <==========\n");
//	int	nb1;
//	int	nb2;
//	int nb3;
//	int nb4;
//	t_list	*node;
//	t_list	*new_node;
//
//	nb1 = 214783648;
//	nb2 = 5;
//	nb3 = 7;
//	nb4 = 99;
//	node = ft_lstnew(&nb1);
//	new_node = ft_lstnew(&nb2);
//	ft_lstadd_front(&node, new_node);
//	new_node = ft_lstnew(&nb3);
//	ft_lstadd_front(&node, new_node);
//	new_node = ft_lstnew(&nb4);
//	ft_lstadd_front(&node, new_node);
//	printf("The 1st elem' data is:\n%d\n", *((int *)(node->content)));
//	ft_lstiter(node, &ft_foo);
//	printf("The 1st elem' data after influence of (*f) is:\n%d\n", *((int *)(node->content)));
//	return (0);
//}


void	*ft_foo(void *data)
{
	*((int *)data) = *((int *)data) * 2;
	return (data);
}

void	ft_del_cont(void *data)
{
	data = NULL;
	free(data);
}

int		main(void)
{
	printf("==========> The test for FT_LSTITER <==========\n");
	int	nb1;
	int	nb2;
	int nb3;
	int nb4;
	t_list	*node;
	t_list	*new_node;

	nb1 = 214783648;
	nb2 = 5;
	nb3 = 7;
	nb4 = 99;
	node = ft_lstnew(&nb1);
	new_node = ft_lstnew(&nb2);
	ft_lstadd_front(&node, new_node);
	new_node = ft_lstnew(&nb3);
	ft_lstadd_front(&node, new_node);
	new_node = ft_lstnew(&nb4);
	ft_lstadd_front(&node, new_node);
	printf("The 1st elem' data is:\n%d\n", *((int *)(node->content)));
	node = ft_lstmap(node, &ft_foo, &ft_del_cont);
	printf("The 1st elem' data of the new list is:\n%d\n", *((int *)(node->content)));
	return (0);
}
