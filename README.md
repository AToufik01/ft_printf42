# 📝 ft_printf

> Low-level C: building my own printf

---

## 📖 About

**ft_printf** is a 1337 (42 network) project where you re-implement the `printf` function from the C standard library.  
The goal is to understand variadic functions (`va_list`, `va_arg`, `va_start`, `va_end`) and handle multiple format specifiers.

---

## 📂 Structure

```
ft_printf/
├── ft_printf.c      # Main function
├── ft_printf.h      # Header file
├── ft_*.c       # Helper functions
└── Makefile         # Build rules
```

---

## ⚙️ Compilation

```bash
make        # Compile → libftprintf.a
make clean  # Remove object files
make fclean # Remove object files + libftprintf.a
make re     # fclean + make
```

To use in your project:

```bash
gcc main.c libftprintf.a -o my_program
```

---

## 🔧 Supported Conversions

| Specifier | Description |
|---|---|
| `%c` | Print a single character |
| `%s` | Print a string |
| `%p` | Print a pointer address (hex) |
| `%d` | Print a decimal integer |
| `%i` | Print an integer |
| `%u` | Print an unsigned decimal integer |
| `%x` | Print a number in lowercase hexadecimal |
| `%X` | Print a number in uppercase hexadecimal |
| `%%` | Print a literal `%` sign |

---

## 💡 Usage

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "world");
    ft_printf("Number: %d\n", 42);
    ft_printf("Hex: %x\n", 255);         // → ff
    ft_printf("Pointer: %p\n", &main);
    ft_printf("Percent: %%\n");
    return (0);
}
```

**Return value:** `ft_printf` returns the total number of characters printed, just like the original.

---

## 🔑 Key Concepts

- **Variadic functions** — using `va_list`, `va_start`, `va_arg`, `va_end`
- **Format parsing** — iterating over the format string to detect `%` specifiers
- **Type handling** — casting and printing each type correctly
- **Return value** — counting every character written

---


## 📋 Norme

This project follows the **42 Norm**:
- Max 25 lines per function
- Max 5 functions per file
- No `for`, `do...while`, `switch`
- No more than 5 variables per function

---

## 👤 Author

ataoufik@student.1337.ma

---

*1337 School (42 NETWORK) — libft project*
