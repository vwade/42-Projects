#	42 Libft
This project recreates many of the **libc** standard functions written in **C**.

##	Libft - Functions
Required functions
```
Libc functions
	memset	bzero	memcpy	memccpy	memmove	memcmp
	strlen	strdup	strcpy	strncpy	strcat	strncat	strlcat
	strchr	strrchr	strstr	strnstr	strcmp	strncmp
	atoi	isaplha	isdigit	isalnum	isascii	isprint
	toupper	tolower
```
```
Additonal functions
	ft_memalloc	ft_memdel
	ft_strnew	ft_strdel	ft_strclr	ft_strequ	ft_striter
	ft_striteri	ft_strmap	ft_strmapi	ft_strnequ	ft_strsub
	ft_strjoin	ft_strtrim	ft_strsplit
	ft_itoa		ft_putchar	ft_putstr	ft_putendl	ft_putnbr
	ft_putchar_fd	ft_putstr_fd	ft_putendl_fd	ft_putnbr_fd
```
```
Bonus
	typedef	struct	s_list{}
			t_list;
Bonus functions
	ft_lstnew	ft_lstdelone	ft_lstdel
	ft_lstadd	ft_lstiter	ft_lstmap
```
Extra functions
```
Extended Standard C fucntions
	<ctype.h>
	ft_isblank	ft_iscntrl	ft_isgraph	ft_ispunct	ft_isspace
	ft_isxdigit	ft_islower	ft_isupper
TODO	——
	ft_prtptr(void *)	—	This will print the address of a pointer passed into it. (putptr)
	ft_prtarray(void *, size_t n)	—	This will print each element of n size array. (prtarr)
	ft_longdiv(int a, int b, size_t n)	—	Divide integer a by integer b (a/b) using long division. Returns string of n iterations.
	ft_longadd(int a, int b, size_t n)	—	Add integers (a + b) using long method.
	ft_longsub(int a, int b, size_t n)	—	Subtract integers (a + b) using long method.
	ft_longmul(int a, int b, size_t n)	—	Multiply integers (a + b) using long method.
	ft_verify	—	Checks if two sets of data are the same. Useful for detecting defects in memory.

```
