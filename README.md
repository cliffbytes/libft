# Libft

*This project has been created as part of the 42 curriculum by sejacque.*

## Description

Libft is the first project of the 42 curriculum: a static C library (`libft.a`)
that reimplements a selection of libc functions and adds string, memory, output
and linked-list utilities for the rest of the curriculum.

The library is organised in three parts:

- **Part 1** — libc reimplementations: `ft_is*`, `ft_mem*`, `ft_strlen`,
  `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`,
  `ft_strnstr`, `ft_atoi`, `ft_calloc`, `ft_strdup`.
- **Part 2** — additional functions: `ft_substr`, `ft_strjoin`, `ft_strtrim`,
  `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`, `ft_put*_fd`.
- **Part 3** — singly linked list: the `t_list` structure and `ft_lst*`.

## Instructions

```sh
make        # build libft.a
make clean  # remove object files
make fclean # remove object files and libft.a
make re     # rebuild from scratch
```

Compilation uses `cc -Wall -Wextra -Werror`. To use the library:

```sh
cc main.c -L. -lft
```

## Resources

- 42 Libft subject (v19.3) and Norm (v2.0.2);
- `man` pages of the reimplemented libc functions;
- <https://en.cppreference.com/w/c> for the C language reference.

## AI usage

To be completed before submission.
