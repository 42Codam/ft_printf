# Libft

> Create your own C library by reimplementing commonly used C language functions.

### 1. Project Introduction

In 42AMSTERDAM, it is forbidden to proceed with a project using already defined standard functions. If you think you need a function, you should implement it yourself and use it. Through this project, while reimplementing useful C standard functions, I was able to learn how functions work, how to use them, and how to efficiently manage and handle data and its necessary memory in C language. The function list of this library will be constantly updated whenever necessary during the learning period at 42AMSTERDAM.

### 2. Some Rules

- The project should be written according to the Norm rules.

- Functions MUST NOT break unexpectedly apart from undefined behavior. For example, segmentation fault, bus error, double free, etc.

- Any memory space allocated to the heap should be properly freed if necessary. Memory leaks are unacceptable.

- This library is `-Wall -Wextra -Werror` compiled by flagging it with GCC . And the Makefile should not be relinked.

- Global variables cannot be used.

- If sub-functions are needed to write complex functions, these sub-functions should be defined as static so that they are not published with the library.

### 3. Function list

The functions of this library can be divided into three parts.

The first is `Libc`의 the functions of the C standard library .

The second is useful functions for dealing with strings.

Third, useful functions for dealing with lists.



#### Part 1. Libc functions

In the first part, we reimplemented the set of libc functions as defined in man. Functions declare prototypes of the same type as the original. The function name is prefixed `ft_` with .

For example `strlen`은 -> `ft_strlen`.

Some of the prototypes of functions that need to be reimplemented `restrict` use modifiers, but since this keyword is part of the c99 standard `restrict` , including modifiers in prototypes `-std=c99` and compiling with flags is prohibited.

I have implemented the following functions. These functions do not require external functions.

> memset • bzero • memcpy • memccpy • memmove • memchr • memcmp • strlen • strlcpy • strlcat • strchr • strrchr • strnstr • strncmp • atoi • isalpha • isdigit • isalnum • isascii • isprint • toupper • tolower

And the functions below are `malloc` reimplemented using functions.

> calloc • strdup



#### Part 2. Additional functions

In the second part, we reimplemented a set of functions not included in libc or included in other formats. Some of these functions used the functions of part1 in the implementation.

> substr • strjoin • strtrim • split • itoa • strmapi • putchar_fd • putstr_fd • putendl_fd • putnbr_fd



#### Part 3. List functions

It is convenient to use functions that deal with memory and strings, but when working on an actual project, functions that deal with lists were much needed.

The elements of a list have the following structure: I added this structure to the libft.h file.

```c
typedef struct    s_list 
{ 
    void          *content; 
    struct s_list *next; 
}                 t_list;
```

The following functions were implemented and added to the library.

> ft_lstnew • ft_lstadd_front • ft_lstsize • ft_lstlast • ft_lstadd_back • ft_lstdelone • ft_lstclear • ft_lstiter • ft_lstmap
