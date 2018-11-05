/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .main.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 23:59:05 by viwade            #+#    #+#             */
/*   Updated: 2018/11/05 02:03:46 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*		LIBFT FUNCTIONS		+	CHECKED?	+	SURVIVED?
*	ft_bzero				—				|	
*	ft_memset				—				|	
*	ft_memdel				—				|	
*	ft_memcpy				—				|		
*	ft_memccpy				—				|		
*	ft_memmove				—				|		
*	ft_memchr				—				|		
*	ft_memcmp				—				|		
*	ft_memalloc				—				|		
*	ft_isalnum				—				|		
*	ft_isalpha				—				|		
*	ft_isascii				—				|		
*	ft_isdigit				—				|		
*	ft_isprint				—				|		
*	ft_putchar				—		x		|		
*	ft_putstr				—		x		|		
*	ft_putnbr				—				|		
*	ft_putendl				—		x		|		
*	ft_strcat				—				|		
*	ft_strchr				—				|		
*	ft_strclr				—				|		
*	ft_strcmp				—				|		
*	ft_strcpy				—				|		
*	ft_strdel				—				|		
*	ft_strdup				—				|		
*	ft_strequ				—				|		
*	ft_striter				—				|		
*	ft_striteri				—				|		
*	ft_strjoin				—				|		
*	ft_strlcat				—				|		
*	ft_strlen				—				|		
*	ft_strmap				—				|		
*	ft_strmapi				—				|		
*	ft_strncat				—				|		
*	ft_strncmp				—				|		
*	ft_strncpy				—				|		
*	ft_strnequ				—				|		
*	ft_strnew				—				|		
*	ft_strnstr				—				|		
*	ft_strrchr				—				|		
*	ft_strrev				—				|		
*	ft_strsplit				—				|		
*	ft_strstr				—				|		
*	ft_strsub				—				|		
*	ft_strtrim				—				|		
*	ft_tolower				—				|		
*	ft_toupper				—				|		
*	ft_putchar_fd			—				|		
*	ft_putstr_fd			—				|		
*	ft_putnbr_fd			—				|		
*	ft_putendl_fd			—				|		
*	ft_atoi					—				|		
*	ft_itoa					—				|		
*	ft_lstnew				—				|		
*	ft_lstadd				—				|		
*	ft_lstdelone			—				|		
*	ft_lstdel				—				|		
*	ft_lstiter				—				|		
*	ft_lstmap				—				|		
*/

#include "libft/libft.h"

static	void	ft_work(void);
static	void	ft_break(void);

int				main(void)
{
	ft_work();
	ft_break();
}

static	void	ft_work(void){
	ft_putstr("Hello World!"); ft_putendl(NULL);
	ft_putstr("This is followed by a \'\\n\'."); ft_putchar('\n');
	ft_putendl("A newline is automatically printed here.");
	ft_putnbr(1337); ft_putendl(NULL);
	ft_putendl("TESTING ATOI/ITOA");
	ft_putendl(ft_itoa(ft_atoi("-7331")));
}
static	void	ft_break(void){
	;
}
