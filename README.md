*This project has been created as part of the 42 curriculum by noferrei.*

# libft

## Description

**libft** is the first project of the 42 common core. The goal is to build
our own C library by recoding a set of standard libc functions, plus some
additional utility functions and a linked-list toolkit. The library is
compiled into a static archive, `libft.a`, which can be reused in all
future 42 projects.

Through this project we practise:

- pointer manipulation and memory management (`malloc` / `free`);
- working on raw memory byte by byte (`unsigned char`);
- handling edge cases (`NULL`, empty strings, overflow, `size_t` limits);
- writing a `Makefile` with the standard rules;
- respecting the 42 Norm.

### Contents

**Part 1 - libc functions**

`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`,
`ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`,
`ft_strlcpy`, `ft_strlcat`, `ft_toupper`, `ft_tolower`, `ft_strchr`,
`ft_strrchr`, `ft_strncmp`, `ft_memchr`, `ft_memcmp`, `ft_strnstr`,
`ft_atoi`, `ft_calloc`, `ft_strdup`

**Part 2 - additional functions**

`ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`,
`ft_strmapi`, `ft_striteri`, `ft_putchar_fd`, `ft_putstr_fd`,
`ft_putendl_fd`, `ft_putnbr_fd`

**Bonus - linked lists**

Uses the following structure:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`,
`ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

## Instructions

### Compilation

The library is compiled with `cc` and the flags `-Wall -Wextra -Werror`.

```bash
make          # builds libft.a (mandatory part)
make bonus    # adds the linked-list functions to libft.a
make clean    # removes the object files
make fclean   # removes the object files and libft.a
make re       # fclean, then all
```

### Usage

Include the header in your source files:

```c
#include "libft.h"
```

Then compile your program and link it with the library:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

or, equivalently:

```bash
cc -Wall -Wextra -Werror main.c libft.a -o my_program
```

### Example

```c
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	char	**tab;
	int		i;

	tab = ft_split("  hello  world  42 ", ' ');
	if (tab == NULL)
		return (1);
	i = 0;
	while (tab[i] != NULL)
	{
		printf("[%s]\n", tab[i]);
		free(tab[i]);
		i++;
	}
	free(tab);
	return (0);
}
```

Output:

```
[hello]
[world]
[42]
```

### Norm check

```bash
norminette *.c libft.h
```

## Resources

- `man 3` pages of the recoded functions (`man 3 memmove`, `man 3 strlcpy`, ...)
- [The 42 Norm](https://github.com/42School/norminette)
- [GNU Make manual](https://www.gnu.org/software/make/manual/)
- *The C Programming Language*, Brian W. Kernighan and Dennis M. Ritchie
- [cppreference - C reference](https://en.cppreference.com/w/c)

### Use of AI

AI (Claude) was used as a learning aid during this project, to:

- explain the behaviour and edge cases of libc functions (e.g. `memmove`
  overlap handling, `strchr` with `'\0'`, `calloc` overflow check);
- explain concepts such as double pointers, function pointers and
  operator precedence between casts, `*` and `->`;
- help understand compiler and linker errors;
- review my code and point out bugs and Norm violations, and suggest
  small test `main` functions.

All the code submitted was written, tested and understood by me. Every
function was compared against its libc counterpart and checked with
`-fsanitize=address` to detect memory errors and leaks.
# Libft
# Libft
# Libft
