*This project has been created as part of the 42 curriculum by lucsanto*

<h1>Libft</h1>

<p align="center">
  <img width="404" height="551" alt="image" src="https://github.com/user-attachments/assets/18195f3b-d995-422d-b0ad-86f5433c9f54" />
</p>

<h2>Description</h2>

Libft is the first project in the 42 São Paulo curriculum. The goal of this project is to recreate several functions from the standard C library (libc) and implement other functions that will be useful for future projects.

This project reinforces very important concepts of C programming, such as memory manipulation, string handling, pointers, dynamic allocation, file descriptors, linked lists and Makefile.

The library is compiled into a static archive called libft.a, which can be linked to other C projects.

<h3>Library Description</h3>

This library contains custom implementations of common C functions. All functions use the ft_ prefix.

The project is divided into three main groups:

<h3>Libc functions</h3>

<ul>
  <li>ft_isalpha</li>
  <li>ft_isdigit</li>
  <li>ft_isalnum</li>
  <li>ft_isascii</li>
  <li>ft_isprint</li>
  <li>ft_strlen</li>
  <li>ft_memset</li>
  <li>ft_bzero</li>
  <li>ft_memcpy</li>
  <li>ft_memmove</li>
  <li>ft_strlcpy</li>
  <li>ft_strlcat</li>
  <li>ft_toupper</li>
  <li>ft_tolower</li>
  <li>ft_strchr</li>
  <li>ft_strncmp</li>
  <li>ft_memchr</li>
  <li>ft_memcmp</li>
  <li>ft_strnstr</li>
  <li>ft_atoi</li>
  <li>ft_calloc</li>
  <li>ft_strdup</li>  
</ul>

<h3>Additional Functions</h3>

These functions are not direct representations of functions present in libc, but are useful tools for string manipulation, memory allocation and output:

<ul>
  <li>ft_substr</li>
  <li>ft_strjoin</li>
  <li>ft_strtrim</li>
  <li>ft_split</li>
  <li>ft_itoa</li>
  <li>ft_strmapi</li>
  <li>ft_striteri</li>
  <li>ft_putchar_fd</li>
  <li>ft_putstr_fd</li>
  <li>ft_putendl_fd</li>
  <li>ft_putnbr_fd</li>
</ul>

<h3>Linked list functions</h3>

These functions manipulate a singly linked list using the t_list structure:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

Linked list functions:

<ul>
  <li>ft_lstnew</li>
  <li>ft_lstadd_front</li>
  <li>ft_lstsize</li>
  <li>ft_lstlast</li>
  <li>ft_lstadd_back</li>
  <li>ft_lstdelone</li>
  <li>ft_lstclear</li>
  <li>ft_lstiter</li>
  <li>ft_lstmap</li>
</ul>

<h2>Instructions</h2>

First things first, about the main part of the project.

To compile the library, run: `make`

This will generate the static library: `libft.a`.

To remove object files, run `make clean`.

To use this library in another C file, include the header:

```#include "libft.h"```

Then compile your program with `libft.a`, for example:

```cc -Wall -Wextra -Werror main.c libft.a -o libft_tester```

<h3>Example Usage</h3>

```c
#include "libft.h"

int	main(void)
{
	char	*str;

	str = ft_strdup("Libft is amazing, thank you 42!!!");
	if (!str)
		return (1);
	printf("%s\n", str);
	free(str);
	return (0);
}
```

Run: ```./libft_tester```

Output: ```Libft is amazing, thank you 42!!!```

<h2>Resources</h2>

<li>Obviously, the 42 Libft subject, which I have a habit of creating some checklists with the help of Notion.</li>
<li>Always my first and biggest source of information: man7.org.</li>
<li>I also had the help of some friends, in particular I would like to mention: mariafer and rpaulino, respectively cadet and alumni at 42.</li>
<li>I also used GPT for research sources, review, debugg and also to test my library, and he also improved (a lot) the program used that will be provided for testing this library.</li>

<h2>Testing</h2>

I am providing, for library testing, 2 links, one, of my own, with a main that tests all the functions presented (the one that I asked GPT for help to improve).

Just run in your terminal: ```git clone git@github.com:luc-santos/libft_tester.git```.

And second, a link from a 42 alumni, with a much deeper and more complete test for the library.

The link to the repository where it contains all the information on how to use it is this: ```https://github.com/Tripouille/libftTester#```.

And the link to the git clone: ```git clone git@github.com:Tripouille/libftTester.git```.

Disclaimer: His test version is 19.1, the current libft pdf version is 19.2, so it is normal for conflicts to occur, if they do happen, I suggest that a second test be done for a reliable conference.

Thank you :)
