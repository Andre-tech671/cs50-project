# CS50 Project

This repository contains a collection of C programs developed as part of the CS50 Harvard programming course. It includes various exercises and projects from different weeks of the course.

## Project Structure

```
.
├── .gitignore
├── README.md
├── cs50 havard programming course/
│   ├── agree.c
│   ├── calculator.c
│   ├── cat.c
│   ├── compare.c
│   ├── hello.c
│   ├── makefile
│   ├── mario.c
│   ├── setup_cs50.bat
│   ├── X and Y Flow chart.png
│   ├── cs50 week 1/
│   │   ├── calls.c
│   │   ├── cs50.c
│   │   ├── cs50.h
│   │   ├── friends.c
│   │   ├── hello.c
│   │   └── makefile
│   ├── CS50 Week 2/
│   │   ├── buggy.c
│   │   ├── hello.c
│   │   └── makefile
│   └── libcs50/
│       ├── .gitignore
│       ├── LICENSE
│       ├── Makefile
│       ├── README.md
│       ├── post
│       ├── postinst
│       ├── postrm
│       ├── postun
│       ├── docs/
│       │   ├── get_char.3.gz
│       │   ├── get_double.3.gz
│       │   ├── get_float.3.gz
│       │   ├── get_int.3.gz
│       │   ├── get_long_long.3.gz
│       │   ├── get_long.3.gz
│       │   └── get_string.3.gz
│       ├── src/
│       │   ├── cs50.c
│       │   ├── cs50.h
│       │   ├── libcs50.a
│       │   └── libcs50.o
│       └── tests/
│           ├── get_int.c
│           └── hackerrank.c
├── Data_types/
├── include/
│   └── cs50.h
└── lib/
    └── libcs50.a
```

### File Descriptions

#### Root Directory
- `.gitignore` - Git ignore file.
- `README.md` - This file.

#### cs50 havard programming course/
- `agree.c` - A program that prompts the user to agree or disagree.
- `calculator.c` - A simple calculator program.
- `cat.c` - A program that concatenates files.
- `compare.c` - A program to compare two files.
- `hello.c` - A basic "Hello, World!" program.
- `mario.c` - A program that prints a Mario-style pyramid.
- `makefile` - Makefile for compiling the programs.
- `setup_cs50.bat` - Batch file for setting up the CS50 environment.
- `X and Y Flow chart.png` - Flow chart image.

#### cs50 week 1/
- `calls.c` - Program demonstrating function calls.
- `cs50.c` and `cs50.h` - CS50 library files.
- `friends.c` - Program related to friends or social aspects.
- `hello.c` - Another "Hello, World!" program.
- `makefile` - Makefile for week 1 programs.

#### CS50 Week 2/
- `buggy.c` - Program with a bug (prints one extra '#').
- `hello.c` - Another "Hello, World!" program.
- `makefile` - Makefile for week 2 programs.

#### libcs50/
- Cloned CS50 library repository.
- `docs/` - Man pages for CS50 functions.
- `src/` - Source files and built library.
- `tests/` - Test programs.

#### Data_types/
- Directory for data types related files.

#### include/ and lib/
- `include/cs50.h` - Header file for CS50 library.
- `lib/libcs50.a` - Static library for CS50 functions.

## Prerequisites

- GCC compiler
- Make utility
- CS50 library (included in the repository)

## Compilation

To compile the programs, use the provided makefiles:

```bash
make
```

Or compile individual files:

```bash
gcc -o program program.c -lcs50
```

## Running the Programs

After compilation, run the executables:

```bash
./program
```

Replace `program` with the name of the specific executable.

## Contributing

This is a personal project for learning purposes. Feel free to fork and modify as needed.

## License

This project is for educational purposes and follows the CS50 course guidelines.
