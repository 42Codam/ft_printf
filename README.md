# ft_printf
> The purpose of this project is to implement an equivalent `printf` function. You will mainly learn how to use **variables**.

## 1. Common Instructions



- The project must be written according to the Norm rules. If there are bonus files/functions, those files/functions will be included in the norm check, and if there is a norm error, you will get 0 points.
- Functions must not break unexpectedly apart from undefined behavior. (e.g. segmentation fault, bus error, double free, etc.)
- Any memory space allocated to the heap must be properly freed if necessary. Memory leaks will be unacceptable.
- If you need the assignment, you must submit a Makefile. It will compile with the `-Wall -Wextra -Werror` flag specified. And the Makefile must not be `relinked'.
- Makefile must contain at least `$(NAME)`, `all`, `clean`, `fclean`, `re`.
- If your project allows your libft, you should copy the sources and their associated Makefile along with the associated Makefile to the libft folder. Your project's Makefile should use the Makefile to compile the library, then compile the project.

</br>

## 2. Mandatory part



**Program name** 

`libftprintf.a`

**Turn in ﬁles** 

- .c, */*.c, *.h, */*.h, Makefile

**Makeﬁle** 

all, clean, fclean, re, bonus

**External functs.** 

malloc, free, write, va_start, va_arg, va_copy, va_end

**Libft authorized** 

yes

## **Description**

Write a library that contains ft_printf, a function that will mimic the real printf

- The prototype of ft_printf should be `int ft_printf(const char *, …);` .
- You need to recode libc's printf function.
- You must not manage the buffer like the original printf function.
- will manage conversions like this: `cspdiuxX%`
- Will manage the combination of flag ‘`-0.*`’ and minimum field width on all conversions.
- It will be compared to the original printf function.

</br>
