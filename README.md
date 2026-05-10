*This project has been created as part of the 42 curriculum by itanisma.*

# libft

## Description

libft is a custom C static library developed as part of the 42 curriculum.

The goal of this project is to reimplement a subset of standard C library functions and to build additional utility functions in order to strengthen low-level programming skills, memory management awareness, and understanding of data structures.

This library is intended to be reused in future 42 projects and strictly follows the 42 Norm and subject requirements.

---

## Library Overview (Detailed Description)

### Output

The project produces a static library:

- `libft.a`

### Header

All public functions and structures are declared in:

- `libft.h`

### Library Content

The library is divided into three main parts.

### Part 1 – Libc Functions

Reimplementations of standard libc functions with identical behavior to their original counterparts as described in the man pages.

Examples include character classification, memory manipulation, string handling, and conversion functions.

### Part 2 – Additional Functions

Utility functions not present in libc or implemented differently, such as string splitting, trimming, joining, integer-to-string conversion, and functional string iteration helpers.

### Part 3 – Linked List (Bonus)

A singly linked list API built around the following structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

This part includes functions for creating nodes, adding elements, iterating over lists, mapping content, and properly freeing memory.

### Memory Management

- All dynamic memory allocations are done using `malloc`.
- Functions return `NULL` if an allocation fails.
- The caller is responsible for freeing allocated memory.
- Linked list cleanup functions rely on user-provided function pointers to correctly free node contents.

---

## Instructions

### Compilation

To compile the library:

```bash
make
```

### Cleanup

```bash
make clean
make fclean
make re
```

---

## Usage Example

Compile your program with libft:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -I. -o my_program
```

Example `main.c`:

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    printf("%zu\n", ft_strlen("libft"));
    return 0;
}
```

---

## Resources

### References

- 42 Libft subject documentation
- Linux man pages
- GNU C Library documentation

---

## AI Usage Disclosure

Initially, AI was used to clarify requirements, edge cases, and conceptual topics related to memory management and linked list behavior.

Additionally, a custom prompt setup named **"Sorgucu 42"** was created on Gemini. This prompt was built using texts gathered from 42 Intra sources such as peer-to-peer feedback, evaluation guidelines, and cheat sheets, as well as personal evaluation strategies used during past evaluations.

This setup was used to simulate real peer-evaluation scenarios and to test functions before entering the actual evaluation process.

AI was not used to directly generate final function implementations. All code was written, reviewed, and validated manually to ensure full understanding, correctness, and compliance with the 42 Norm.

---

## Moulinette

- initial_errors: OK
- test_ft_isalpha: OK
- test_ft_isdigit: OK
- test_ft_isalnum: OK
- test_ft_isascii: OK
- test_ft_isprint: OK
- test_ft_strlen: OK
- test_ft_memset: OK
- test_ft_bzero: OK
- test_ft_memcpy: OK
- test_ft_memmove: OK
- test_ft_strlcpy: OK
- test_ft_strlcat: OK
- test_ft_toupper: OK
- test_ft_tolower: OK
- test_ft_strchr: OK
- test_ft_strrchr: OK
- test_ft_strncmp: OK
- test_ft_memchr: OK
- test_ft_memcmp: OK
- test_ft_strnstr: OK
- test_ft_atoi: OK
- test_ft_calloc: OK
- test_ft_strdup: OK
- test_ft_substr: OK
- test_ft_strjoin: OK
- test_ft_strtrim: OK
- test_ft_split: OK
- test_ft_itoa: OK
- test_ft_strmapi: OK
- test_ft_striteri: OK
- test_ft_putchar_fd: OK
- test_ft_putstr_fd: OK
- test_ft_putendl_fd: OK
- test_ft_putnbr_fd: OK
- test_linked_lists: 9/9 functions correct
