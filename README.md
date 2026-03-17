# ft_printf

A custom implementation of the standard `printf` function in C, developed as part of the 42 Lisboa curriculum.

## Overview

The goal of this project is to recreate the behavior of the standard `printf` function, handling formatted output using variadic arguments.

This project introduces key low-level concepts such as argument parsing, type handling, and formatted output without relying on the standard library implementation.

## Implementation

This implementation supports the following format specifiers:

- `%c` → character  
- `%s` → string  
- `%p` → pointer address  
- `%d` / `%i` → signed integer  
- `%u` → unsigned integer  
- `%x` → hexadecimal (lowercase)  
- `%X` → hexadecimal (uppercase)  
- `%%` → literal `%`  

The project is built using:

- `va_list`, `va_start`, `va_arg`, `va_end` for variadic arguments  
- custom conversion functions for numbers and hexadecimal values  
- modular helper functions for each type  

## Key Concepts

- variadic functions  
- argument parsing  
- type conversion  
- base conversion (decimal ↔ hexadecimal)  
- low-level output handling  
- modular design  

## Features

- Support for multiple format specifiers  
- Modular and readable implementation  
- Custom number and hexadecimal conversion  
- Pointer address formatting  
- Consistent output handling  
- No use of the standard `printf`  

## Project Structure

ft_printf/
├── include/
│   └── ft_printf.h
├── src/
├── tests/
│   └── main_test.c
├── Makefile
└── README.md

## Usage

### Run tests

make test

### Using the library

Include in your code:

```c
#include "ft_printf.h"
```

Compile with:

```bash
gcc main.c lib_printf.a
```

## Notes

- This project does not replicate all flags and behaviors of the original `printf`, focusing on core functionality  
- All conversions are implemented manually without using standard formatting functions  
- A dedicated test file is included to validate behavior against the original `printf`  

## Development Notes

This project focuses on understanding how formatted output works internally, including:

- parsing format strings  
- extracting variadic arguments  
- converting data types into printable output  

It represents an important step in mastering C and prepares for more advanced parsing and system-level projects.

## Use of AI

AI tools were used as a support resource during the development of this project, mainly for:

- clarifying variadic function behavior  
- improving documentation quality (README)  
- reviewing implementation strategies  

All core logic and implementation were developed independently.

## Author

Jean Henrique Moreira  
42 Lisboa  

Learning low-level. Thinking long-term.