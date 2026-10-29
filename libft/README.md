# libft

A project from the 42 curriculum. The goal of this project is to create your own first C library. It contains a collection of standard functions that will be used as a foundation for future projects in the curriculum.

## About the implementation

This project requires the reimplementation of standard `libc` functions, as well as the creation of additional utility functions for string manipulation, memory allocation, and linked list management. 

## Compilation and Usage

### 1. Compilation

To compile the library, run the `make` command in the root directory of the repository. This will generate a static library file named `libft.a`.

```bash
make
```

Available `make` rules:
* `make` or `make all`: Compiles the standard library functions.
* `make clean`: Removes the object files (`.o`).
* `make fclean`: Removes the object files and the `libft.a` file.
* `make re`: Recompiles the entire library.
* `make bonus`: Compiles the standard functions along with the bonus linked list functions.

### 2. Usage

Include the header in your C files:

```c
#include "libft.h"
```

Compile your program and link it with the library:

```bash
gcc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

## Structure

* **libc functions:** Reimplementations of standard C library functions (e.g., `ft_atoi`, `ft_strlen`, `ft_memset`, `ft_isalpha`).
* **Additional functions:** Utility functions for various tasks not included in the standard `libc` (e.g., `ft_substr`, `ft_strjoin`, `ft_split`, `ft_itoa`).
* **Bonus functions:** Functions designed specifically to manipulate linked lists (e.g., `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`).

## Author

* **joschmun** - *42 Student*