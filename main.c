/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 19:14:49 by mfranc            #+#    #+#             */
/*   Updated: 2017/02/04 19:47:18 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libft/includes/libft.h"
#include "../Libft/includes/get_next_line.h"
#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <fcntl.h>
#include <inttypes.h>

void	del(void *element, size_t content_size)
{
	free(element);
	element = NULL;
	content_size = 0;
}
//void	f(t_list *elem)
//{
//	int	i;

//	i = 0;
//	printf("%zu\n", elem->content_size);
//	ft_putendl("YES CEST BON");
//}

t_list	*f(t_list *elem)
{
	t_list	*copy;

	copy = elem;
	copy->content = ft_strjoin(copy->content, "A");
	return (copy);
}


//static void 	pri(unsigned int c, char s)
//{
//	ft_putint(c);
//}

//static char		o(unsigned int c, char d)
//{
//	printf("%d\n", c);
//	d = 'o';
//	ft_putchar(d);
//	return (d);
//}

//static char		toc(char c)
//{
//	c = 'c';
//	return (c);
//}
//
//
//
//static void		ft_putlist(t_list *list)
//{
//	while (list)
//	{
//		ft_putendl(list->content);
//		list = list->next;
//	}
//}

static char    	prix(unsigned int c, char s)
{
	ft_putint(c, 10, BASEUP);
	ft_putchar('\n');
	s = 'A';
	return (s);
}

int				main(int ac, char **av)
{
	setlocale(LC_ALL, "");
	if (ac <= 1)
		return (0);
	if (strcmp(av[1], "memset") == 0)
	{
		int	i;
		int	j;
		int	tab[] = {1, 2, 3, 4, 5, 6};
		int	*result;
		int	tab2[] = {1, 2, 3, 4, 5, 6};
		int	*result2;

		i = 0;
		j = 0;
		result = memset(tab, 3, 12);
		result2 = ft_memset(tab2, 3, 12);
		while (i <= 5)
			printf("%d\n", result[i++]);
		while (j <= 5)
			printf("%d\n", result2[j++]);
		ft_putendl(memset(av[2], 'A', atoi(av[3])));	
		ft_putendl(ft_memset(av[2], 'A', atoi(av[3])));	
	}
	else if (strcmp(av[1], "bzero") == 0)
	{
		int	j;
		int	tab[] = {1, 2, 3, 4, 5, 6};

		j = 0;
		ft_bzero(tab, 8);
		while (j <= 5)
			printf("%d\n", tab[j++]);

	}
	else if (strcmp(av[1], "memcpy") == 0)
	{
		printf("%s\n", memcpy(av[2], av[3], atoi(av[4])));
		printf("%s\n", ft_memcpy(av[2], av[3], atoi(av[4])));
	}
	else if (strcmp(av[1], "memccpy") == 0)
	{
		char buff1[] = "abcdefghijklmnopqrstuvwxyz";
		char buff2[] = "abcdefghijklmnopqrstuvwxyz";
		char src2[] = "test basic !";
		char src[] = "string with\200inside !";
		char buff3[] = "the cake is a lie !\0I'm hidden lol\r\n";
		char buff4[] = "the cake is a lie !\0I'm hidden lol\r\n";

		ft_putendl(memccpy(buff1, src, '\200', 21));
		ft_putendl(ft_memccpy(buff2, src, '\200', 21));
		ft_putendl(memccpy(buff3, src2, ' ', ft_strlen(src2)));
		ft_putendl(ft_memccpy(buff4, src2, ' ', ft_strlen(src2)));
		ft_putendl("========================== TEST DU MOULEST CHIANT =======================");
		ft_putendl(memccpy(av[2], av[3], '0', ft_atoi(av[4])));
		ft_putendl(ft_memccpy(av[2], av[3], '0', ft_atoi(av[4])));
	}
	else if (strcmp(av[1], "countword") == 0)
		ft_putint(ft_countword(av[2]), 10, BASEUP);
	else if (strcmp(av[1], "memmove") == 0)
	{
		char str1[] = "efer";
		char str2[] = "efer";
		char str3[] = "rftenoyyrwhnyrw";
		char str4[] = "rftenoyyrwhnyrw";
		//		printf("%s\n", memmove(av[2], av[3], atoi(av[4])));
		//		printf("%s\n", ft_memmove(av[2], av[3], atoi(av[4])));
		ft_putendl(memmove(str1, str3, 4));
		ft_putendl(ft_memmove(str2, str4, 4));
	}
	else if (strcmp(av[1], "memchr") ==0)
	{
		printf("%s\n", memchr(av[2], atoi(av[3]), atoi(av[4])));
		printf("%s\n", ft_memchr(av[5], atoi(av[6]), atoi(av[7])));
	}
	else if (strcmp(av[1], "memcmp") == 0)
	{
		//		printf("%d\n", memcmp(av[2], av[3], atoi(av[4])));
		//		printf("%d\n", ft_memcmp(av[2], av[3], atoi(av[4])));
		ft_putint(memcmp("abab", "abab", 6), 10, BASEUP);
		ft_putchar('\n');
		ft_putint(ft_memcmp("abab", "abab", 6), 10, BASEUP);
		/*	}
			else if (strcmp(av[1], "range") == 0)
			{
			int	*tab;
			int	i;

			i = 0;

			tab = ft_range(3, -5);
			while (i <= 10)
			{
			ft_putint(tab[i++]);
			printf("\n");
			}*/
	}
	else if (strcmp(av[1], "strlen") == 0)
	{
		int i = 0;
		int o = 0;
		char *str = "coucou\0coucou";
		while (str[i] != '\0')
			i++;
		ft_putint(i, 10, BASEUP);
		while (str[o])
			o++;
		ft_putint(o, 10, BASEUP);
	}
	else if (strcmp(av[1], "strdup") == 0)
	{
		printf("%s\n", strdup(av[2]));
		printf("%s\n", ft_strdup(av[2]));
	}
	else if (strcmp(av[1], "strcpy") == 0)
	{
		//		printf("%s\n", strcpy(av[2], av[3]));
		printf("%s\n", ft_strcpy(av[2], av[3]));
	}
	else if (strcmp(av[1], "strncpy") == 0)
	{
		printf("%s\n", strncpy(av[2], av[3], atoi(av[4])));
		printf("%s\n", ft_strncpy(av[2], av[3], atoi(av[4])));
	}
	else if (strcmp(av[1], "strcat") == 0)
	{
		printf("%s\n", strcat(av[2], av[3]));	
		printf("%s\n", ft_strcat(av[2], av[3]));
	}
	else if (strcmp(av[1], "strncat") == 0)
	{
		printf("%s\n", ft_strncat(av[2], av[3], atoi(av[6])));
		printf("%s\n", strncat(av[4], av[5], atoi(av[6])));
	}
	else if (strcmp(av[1], "strlcat") == 0)
	{
		char *str = "the cake is a lie !\0I'm hidden lol\r\n";
		char *buff1 = "there is no stars in the sky";
		char *buff2 = "there is no stars in the sky";
		size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
		char s1[4] = "";
		char s2[4] = "";
		char *str2 = "the cake is a lie !\0I'm hidden lol\r\n";
		char buff3[0xF00] = "there is no stars in the sky";
		char buff4[0xF00] = "there is no stars in the sky";
		size_t max2 = strlen("the cake is a lie !\0I'm hidden lol\r\n") + strlen("there is no stars in the sky");
		char	buf[10];
		ft_bzero(buf, 10);
		ft_strcpy(buf, "abc");
		char	buf2[10];
		ft_bzero(buf2, 10);
		ft_strcpy(buf2, "abc");


		ft_putint(strlcat(buf, "abcdefjiklmnop", 10), 10, BASEUP);
		printf("\n");
		ft_putint(ft_strlcat(buf2, "abcdefjiklmnop", 10), 10, BASEUP);
		printf("\n");
		ft_putint(strlcat(buff1, str, max), 10, BASEUP);
		printf("\n");
		ft_putint(ft_strlcat(buff2, str, max), 10, BASEUP);
		printf("\n");
		ft_putint(strlcat(s1 , "thx to ntoniolo for this test !", 4), 10, BASEUP);
		printf("\n");
		ft_putint(ft_strlcat(s2, "thx to ntoniolo for this test !", 4), 10, BASEUP);
		printf("\n");
		ft_putint(strlcat(av[2], av[3], ft_atoi(av[4])), 10, BASEUP);
		printf("\n");
		ft_putint(ft_strlcat(av[2], av[3], ft_atoi(av[4])), 10, BASEUP);
		printf("\n");
		ft_putint(strlcat(buff3, str2, max2), 10, BASEUP);
		printf("\n");
		ft_putint(ft_strlcat(buff4, str2, max2), 10, BASEUP);
	}
	else if (strcmp(av[1], "strchr") == 0)
	{
		printf("%s\n", ft_strrchr(av[2], '\0'));
	}
	else if (strcmp(av[1], "strrchr") == 0)
	{
		char buf[] = "abcd";
		char buf2[] = "abcd";
		//	ft_putendl(strrchr(av[2], 'c'));
		//	printf("\n");
		//	ft_putendl(ft_strrchr(av[2], 'c'));
		//	printf("\n");
		//	ft_putendl(strrchr(av[3], 'A'));
		//	printf("\n");
		//	ft_putendl(ft_strrchr(av[3], 'A'));
		//	printf("\n");
		//		ft_putendl(strrchr(av[4], 'p'));
		//		printf("\n");
		//		ft_putendl(ft_strrchr(av[4], 'p'));
		//		printf("\n");
		ft_putendl(strrchr(buf, 'a'));
		printf("\n");
		ft_putendl(ft_strrchr(buf2, 'a'));
	}
	else if (strcmp(av[1], "strstr") == 0)
	{
		printf("%s\n", strstr(av[2], av[3]));
		printf("%s\n", ft_strstr(av[2], av[3]));
	}
	else if (strcmp(av[1], "strnstr") == 0)
	{
		printf("%s\n", strnstr(av[2], av[2], atoi(av[4])));
		printf("%s\n", ft_strnstr(av[2], av[2], atoi(av[4])));
	}
	else if (strcmp(av[1], "strcmp") == 0)
	{
		//	char *str = NULL;
		//	char* str2 = NULL;

		//		ft_putint(strcmp(av[2], av[3]));
		//		ft_putint(ft_strcmp(av[2], av[3]));
		//		ft_putint(strcmp(str, str2));
		ft_putint(strncmp("dfghn", "df", 1), 10, BASEUP);
		printf("\n");
		ft_putint(ft_strncmp("dfghn", "df", 1), 10, BASEUP);
		printf("\n");
		ft_putint(strncmp("efwrgat", "grethw1", 12), 10, BASEUP);
		printf("\n");
		ft_putint(ft_strncmp("efwrgat", "grerhw1", 12), 10, BASEUP);
		printf("\n");
		ft_putint(strncmp("fgrth4jwy5r", "", 5), 10, BASEUP);
		printf("\n");
		ft_putint(ft_strncmp("fgrth4jwy5r", "", 5), 10, BASEUP);
		printf("\n");
		ft_putint(strncmp("abc", "abcde", 3), 10, BASEUP);
		printf("\n");
		ft_putint(ft_strncmp("abc", "abcde", 3), 10, BASEUP);
		printf("\n");
		ft_putint(strncmp(NULL, NULL, 10), 10, BASEUP);
		printf("\n");
		ft_putint(ft_strncmp(NULL, NULL, 10), 10, BASEUP);
	}
	else if (strcmp(av[1], "atoi") == 0)
	{
		//		printf("%d\n", atoi(av[2]));
		//		printf("%d\n", ft_atoi(av[2]));
		ft_putint(atoi("\200123"), 10, BASEUP);
		ft_putchar('\n');
		ft_putint(ft_atoi("\200123"), 10, BASEUP);
	}
	else if (strcmp(av[1], "is") == 0)
	{
		printf("ALPHA");
		printf("%d\n", isalpha('c'));
		printf("%d\n", isalpha('3'));
		printf("%d\n", isalpha('%'));
		printf("%d\n", ft_isalpha('C'));
		printf("%d\n", ft_isalpha('3'));
		printf("%d\n", ft_isalpha('%'));
		printf("DIGIT");
		printf("%d\n", isdigit('c'));
		printf("%d\n", isdigit('3'));
		printf("%d\n", isdigit('%'));
		printf("%d\n", ft_isdigit('C'));
		printf("%d\n", ft_isdigit('3'));
		printf("%d\n", ft_isdigit('%'));
		printf("ALNUM");	
		printf("%d\n", isalnum('c'));
		printf("%d\n", isalnum('3'));
		printf("%d\n", isalnum('%'));
		printf("%d\n", ft_isalnum('C'));
		printf("%d\n", ft_isalnum('3'));
		printf("%d\n", ft_isalnum('%'));
		printf("ISASCII");
		printf("%d\n", ft_isascii('c'));
		printf("%d\n", ft_isascii(' '));
		printf("%d\n", ft_isascii('%'));
		printf("%d\n", isascii('3'));
		printf("%d\n", isascii('T'));
		printf("%d\n", isascii('\t'));
		printf("ISPRINT");
		printf("%d\n", ft_isprint(' '));
		printf("%d\n", ft_isprint('\n'));
		printf("%d\n", ft_isprint('4'));
		printf("%d\n", isprint(' '));
		printf("%d\n", isprint('\t'));
		printf("%d\n", isprint('c'));
	}
	else if (strcmp(av[1], "to") == 0)
	{
		printf("%d\n", toupper('c'));
		printf("%d\n", ft_toupper('c'));
		printf("%d\n", tolower('C'));
		printf("%d\n", ft_tolower('C'));
		printf("%d\n", toupper('5'));
		printf("%d\n", ft_toupper('5'));
		printf("%d\n", tolower('5'));
		printf("%d\n", ft_tolower('5'));
	}
	else if (strcmp(av[1], "malloc") == 0)
		printf("%lu\n", sizeof(ft_memalloc(atoi(av[2]))));
	else if (strcmp(av[1], "striter") == 0)
	{
		ft_putendl(av[2]);
		ft_striter(av[2], &ft_strclr);
		printf("%s\n", av[2]);
	}
	//	else if (strcmp(av[1], "striteri") == 0)
	//		ft_striteri(av[2], &pri);
	else if (strcmp(av[1], "memalloc") == 0)
	{
		char	*str;
		int		i;

		i = 0;
		str = ft_memalloc(6);
		while (i <= 100)
		{
			str[i] = 'A';
			i++;
		}
		ft_putendl(str);
		//		ft_strdel(&str);
		ft_putendl(str);
		ft_putendl("===================== STRNEW ==================");
		char *str2 = ft_strnew(21);
		int	o = 0;
		while (o <= 21)
			printf("%c\n", str2[o++]);
		ft_putendl("======================STRDEL====================");

		char *cool = "COUCOU";
		ft_putendl(cool);
		ft_strclr(cool);
		ft_putendl(cool);
	}
	//	else if (strcmp(av[1], "strmap") == 0)
	//	{
	//		char *str = ft_strmap(av[2], &toc);
	//		ft_putendl(str);
	//	}
	else if (strcmp(av[1], "strmapi") == 0)
	{
		ft_putendl(ft_strmapi(ft_strdup("eeeee"), &prix));
	}
	else if (strcmp(av[1], "strequ") == 0)
		printf("%d\n", ft_strequ(av[2], av[3]));
	else if (strcmp(av[1], "strnequ") == 0)
		printf("%d\n", ft_strnequ(av[2], av[3], atoi(av[4])));
	else if (strcmp(av[1], "strsub") == 0)
		printf("%s\n", ft_strsub(av[2], atoi(av[3]), atoi(av[4])));
	else if (strcmp(av[1], "strjoin") == 0)
		ft_putendl(ft_strjoin(av[2], av[3]));
	else if (strcmp(av[1], "strtrim") == 0)
		ft_putendl(ft_strtrim(av[2]));
	else if (strcmp(av[1], "putstr") == 0)
		ft_putstr(av[2]);
	else if (strcmp(av[1], "strsplit") == 0)
		ft_puttab(ft_strsplit(av[2], '4'));
	else if (strcmp(av[1], "uitoa") == 0)
		ft_putstr(ft_itoa(ft_atoi(av[2]), ft_atoi(av[3]), BASELW));
	else if (strcmp(av[1], "putendl") == 0)
	{
		ft_putendl_fd(av[2], -3);
	}
	else if (strcmp(av[1], "putint") == 0)
	{	
		ft_putint(ft_atoi(av[2]), atoi(av[3]), BASEUP);
		ENDL
	}
	else if (ft_strcmp(av[1], "power") == 0)
	{
		printf("%lld\n", ft_power(ft_atoi(av[2]), ft_atoi(av[3])));
	}
	else if (ft_strcmp(av[1], "base") == 0)
	{
	//	PSTR("ITOA : ")
//			PNBR(ft_atoi(av[2]), ft_atoi(av[3]), BASELW);
//		ENDL
//			printf("PRINTF L INT : %lld\n", ft_atoi(av[2]));
//		ENDL
//			PSTR("UITOA : ")
//			ft_putuint(ft_atoui(av[2]), ft_atoi(av[3]), BASELW);
//		ENDL
		PSTR("CONV BASE TESTING : ")
		ENDL
		ENDL
//		char	*toconv = ft_itoa(453, 8, BASEUP);
		PSTR(ft_convbase("10000", 16, 10,  BASEUP));
		ENDL
		PSTR(ft_convbase("10FFFF", 16, 10,  BASEUP));
	}
	else if (ft_strcmp(av[1], "putchar") == 0)
	{
		write(1, NULL, 1);
		ft_putchar_fd('c', -3);
	}
	else if (ft_strcmp(av[1], "strrev") == 0)
	{
		PSTR(ft_strrev(av[2]));
	}
	else if (ft_strcmp(av[1], "putbits") == 0)
	{
//		int d = 1234567;
//		int *w = &d;
//		ft_putbits(w, sizeof(w));
//		ENDL
		char a = 'c';
		PSTR(ft_vtob(&a, sizeof(a)))
		ENDL
	}
	else if (ft_strcmp(av[1], "unicode") == 0)
	{
//		int i = 0;
//		char *s = "ABCDEF";
//		while (s[i])
//		{
//			PSTR(ft_itoa(s[i], 2, BASEUP))
//			ENDL
//			i++;
//		}
//		ft_putwchar(L'é');
//		printf("Taille dun wint_t : %lu", sizeof(wint_t));
//		ENDL
//		ft_putwchar(L'正');
//		ENDL
//		ft_putwchar(L'é');
//		ENDL
//		ft_putwchar(L'и');
//		ENDL
//		ft_putwchar(l'ω');
	
		wchar_t *a = L"💩💩";
	//	int a = INTMAX;
//		wchar_t b = L'é';
//		wchar_t c = L'и';
//		wchar_t do = L'ω';
		
		ft_putwendl_fd(a, 1);
		ft_putptrendl_fd(a, 1);
		ENDL
		ft_putintendl_fd(32456, 1, 2, BASEUP);
//		write(1, ft_wstrtoa(a), ft_wstrlen(a));
//		ft_putwchar(b);
//		ENDL
//		ft_putwchar(c);
//		ENDL
//		ft_putwchar(d);
//		ENDL
	}
	else if (ft_strcmp(av[1], "addchar") == 0)
		ft_putendl(ft_straddchar("salut", '!'));
	else if (ft_strcmp(av[1], "strlenn") == 0)
		ft_putint(ft_strlen(NULL), 10, BASEUP);
	else if (ft_strcmp(av[1], "putstrfd") == 0)
	{
		printf("REUSSI A 100%%%%%%");
	}
	else if (ft_strcmp(av[1], "putaddr") == 0)
	{
		//		char *bonjour = "HELLOCAVSJKODFLEKHUWFC gregt";
		char	*str = "coucou";
		//		printf("%lu\n", sizeof(void));
		//		printf("%lu\n", sizeof(char));
		//		printf("%lu\n", sizeof(int));

		ft_putptr(&str);
		ENDL
		printf("%p\n", &str);
	}
	else if (ft_strcmp(av[1], "strspn") == 0)
	{
		PSTR("la vraie STRSPN: ")
			PNBR(strspn(av[2], av[3]), 10, BASEUP);
		ENDL
			PSTR("la mienne : ")
			PNBR(ft_strspn(av[2], av[3]), 10, BASEUP);
		ENDL
			ENDL
			PSTR("la vraie STRCSPN: ")
			PNBR(strcspn(av[2], av[3]), 10, BASEUP);
		ENDL
			PSTR("la mienne : ")
			PNBR(ft_strcspn(av[2], av[3]), 10, BASEUP);
	}
	else if (ft_strcmp(av[1], "ftoa") == 0)
	{
		//	float	testf = 327;
		//		printf("SIZE OF DOUBLE : %lu\n", sizeof(double));
		//		printf("SIZE OF LONG DOUBLE : %lu\n", sizeof(long double));
		ENDL
			long double	testd = 0.4;

		printf("%Lf\n", testd);
		printf("%f\n", 4.4);
		ENDL
			ft_putstr(ft_ftoa(testd, 10, BASEUP));
	}
	else if (ft_strcmp("putnstr", av[1]) == 0)
	{
		ft_putnstr(av[2], ft_atoi(av[3]));
		ENDL
		ft_putnstr(NULL, ft_atoi(av[3]));
	}
	else if (strcmp(av[1], "fd") == 0)
	{
		ft_putchar_fd('c', 1);
		ft_putendl_fd("sava", 1);
		ft_putstr_fd("salut", 1);
		ft_putint_fd(2345, 1, 10, BASEUP);
		ft_putchar_fd('c', 1);
		ft_putuintendl(ft_atoui(av[2]), 10, BASEUP);
	}
	else if (strcmp(av[1], "bonus") == 0)
	{
		t_list	*ma1;
		t_list	*ma2;
		t_list	*ma3;
		t_list	*ma4;
		//		t_list	*ma5;
		//		t_list	*ma6;
		//		t_list	*ma7;
		//		t_list	*ma8;

		char *str1 = "coucou";
		char *str2 = "bien";
		char *str3 = "sava";
		char *str4 = "yeee";

		ma1 = ft_lstnew((void const *)str1, ft_strlen(str1));
		ma2 = ft_lstnew((void const *)str2, ft_strlen(str2));
		ma3 = ft_lstnew((void const *)str3, ft_strlen(str3));
		ma4 = ft_lstnew((void const *)str4, ft_strlen(str4));

		// link maillons
		//	ft_lstadd(&ma3, ma2);
		//	ft_lstadd(&ma2, ma1);
		// print content list
		ft_putendl(ma1->content);
		ft_putendl(ma2->content);
		ft_putendl(ma3->content);
		ft_putendl(ma4->content);
		// affichage
		//	ft_lstiter(ma1, &f);
		//	ft_putendl(ma1->content);
		//	ft_putendl(ma2->content);
		//	ft_putendl(ma3->content);
		printf("===================== TEST DERNIER EXOS ET CORRECT ===================\n");

		//		ma5 = ft_lstmap(ma1, &f);
		//		ma6 = ft_lstmap(ma2, &f);
		//		ma7 = ft_lstmap(ma3, &f);
		//		ma8 = ft_lstmap(ma4, &f);

		//		ft_lstdelone(&ma6, &del);
		//		ft_lstdelone(&ma8, &del);

		//		ft_lstadd(&ma8, ma7);
		//		ft_lstadd(&ma7, ma6);
		//		ft_lstadd(&ma6, ma5);

		//		ft_putendl(ma5->content);
		//		ft_putendl(ma5->next->content);
		//		ft_putendl(ma5->next->next->content);
		//		ft_putendl(ma5->next->next->next->content);
		t_list *l = ft_lstnew(ft_strdup(" 1 2 3 "), 8);
		t_list *ret;
		t_list *tmp;

		ret = l;

		l->next = ft_lstnew(ft_strdup("ss"), 3);
		l->next->next = ft_lstnew(strdup("-_-"), 4);

		ft_putendl(l->content);
		ft_putendl(l->next->content);
		ft_putendl(l->next->next->content);
		ft_putchar('A');
		tmp = ft_lstmap(ret, &f);
		ft_putchar('B');
		printf("====================== TEST AVEC BUFFER DIFF ===========================\n");

		ft_putendl(ret->content);
		ft_putendl(ret->next->content);
		ft_putendl(ret->next->next->content);
	}
	else
		printf("%s\n", "Not a valid function name.");
	return (0);
}
