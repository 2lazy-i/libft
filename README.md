*This project has been created as part of the 42 curriculum by myapaten.*

## Description
**Libft** is the very first project in the 42 core curriculum. The goal of this project is to create a custom C library (`libft.a`) that implements many of the standard C library (`libc`) functions, as well as several additional utility functions for string manipulation, memory allocation, and linked list management.

By rewriting these functions from scratch, students gain a deep understanding of memory management, pointers, and data structures in C. This library will serve as a foundational toolkit for future projects in the curriculum.

## Instructions

### Compilation
The library is provided with a `Makefile` that handles the compilation process. To compile the library, simply run:
```bash
make
```
This will compile the source files and generate the `libft.a` static library.

Other available `make` commands:
- `make clean`: Removes all `.o` (object) files.
- `make fclean`: Removes object files and the `libft.a` library.
- `make re`: Fully recompiles the library.
- `make bonus`: Compiles the bonus functions (linked list operations) and adds them to the library.

### Usage
To use the library in your own projects, include the header file in your C source code:
```c
#include "libft.h"
```
Then, compile your project alongside `libft.a`:
```bash
cc your_program.c -L. -lft -o your_program
```

## Resources
- **C Standard Library Documentation:** GNU C Library (`glibc`) manual and the standard Unix `man` pages (e.g., `man 3 strlen`).
- **Tools:** `gcc`/`cc` compiler, `ar` archiving tool, `make` build automation.
- **AI Usage:** AI was utilized during the development of this project solely as a pedagogical assistant. It provided code reviews, helped identify edge cases (such as segmentation faults in edge-case inputs), and assisted in structuring this `README.md` file according to the school's format requirements. AI was not used to generate the core logic of the functions.

## Library Functions Detailed Description

### Part 1 - Libc Functions
These functions are rewrites of the standard C library functions.
- **Character Checks/Manipulation:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
- **String Manipulation:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`
- **Memory Manipulation:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
- **Memory Allocation & Conversion:** `ft_atoi`, `ft_calloc`, `ft_strdup`

### Part 2 - Additional Functions
These functions are not part of the standard C library but are extremely useful for future projects.
- **String Manipulation:**
  - `ft_substr`: Extracts a substring from a string.
  - `ft_strjoin`: Concatenates two strings into a newly allocated string.
  - `ft_strtrim`: Trims specific characters from the beginning and end of a string.
  - `ft_split`: Splits a string into an array of strings using a specified delimiter character.
  - `ft_strmapi`: Applies a function to each character of a string, creating a new string.
  - `ft_striteri`: Applies a function to each character of a string, modifying it in place.
- **Conversion:**
  - `ft_itoa`: Converts an integer into a string.
- **File Descriptors (Output):**
  - `ft_putchar_fd`: Outputs a character to a file descriptor.
  - `ft_putstr_fd`: Outputs a string to a file descriptor.
  - `ft_putendl_fd`: Outputs a string followed by a newline to a file descriptor.
  - `ft_putnbr_fd`: Outputs an integer to a file descriptor.

### Bonus Part - Linked List Functions
A set of functions designed to manipulate a custom linked list structure (`t_list`).
- `ft_lstnew`: Creates a new list node.
- `ft_lstadd_front`: Adds a node to the beginning of a list.
- `ft_lstsize`: Counts the number of nodes in a list.
- `ft_lstlast`: Returns the last node of a list.
- `ft_lstadd_back`: Adds a node to the end of a list.
- `ft_lstdelone`: Deletes and frees a single node.
- `ft_lstclear`: Deletes and frees a list.
- `ft_lstiter`: Applies a function to the content of each node.
- `ft_lstmap`: Applies a function to each node and creates a new list from the results.