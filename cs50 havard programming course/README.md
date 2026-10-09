# CS50 Harvard Programming Course

My notes, exercises, and practice programs while studying Harvard's CS50 Introduction to Computer Science. The repository currently contains course work through Week 4, plus separate C fundamentals practice.

## Repository layout

```text
cs50 havard programming course/
├── cs50 week 1/             # C basics and section programs
├── CS50 Week 2/              # Arrays, strings, debugging, section 2
├── cs50 week 3/              # Searching, phonebooks, structs
├── CS50 Week 4/              # Addresses and comparison exercises
├── self_practice_programs/   # Independent C practice by topic
├── libcs50/                  # CS50 library source and build artifacts
├── *.c                       # Root-level practice programs
├── makefile                  # Root-level build rules
└── setup_cs50.bat            # Windows setup helper
```

### Self-practice programs

| Folder | Programs currently present |
|---|---|
| `self_practice_programs/Arrays` | `arrays.c` |
| `self_practice_programs/DataTypes` | `typeconversion.c` |
| `self_practice_programs/Operators` | `addition_assignment_Operator.c`, `boolean.c`, `comparison_Operator.c`, `switch_statement.c` |
| `self_practice_programs/variables` | `variables.c` |
| `self_practice_programs/while loop` | `forloop.c`, `whileloop.c` |

The source files in `self_practice_programs` are organized into topic folders. Those folders do not currently have Makefiles, so `make <name>` will not build these programs unless a Makefile is added. The source names matter: for example, the loop file is named `whileloop.c` (no underscore), and its output executable can be named `whileloop`.

## Requirements

- GCC (for example, MinGW-w64 on Windows)
- GNU Make (needed only for folders that contain a Makefile)
- The CS50 library for programs that include `cs50.h`

The CS50 library files are under `libcs50/src` (`cs50.h` and `libcs50.a`).

## Compile and run

For a standalone practice program, change to its folder and compile the `.c` file with GCC. For example, from Git Bash:

```bash
cd "self_practice_programs/while loop"
gcc whileloop.c -o whileloop
./whileloop
```

The `-o whileloop` option chooses the executable's name. To compile the other loop example, use `gcc forloop.c -o forloop` and run `./forloop`.

For CS50 library programs, include and link the library using paths relative to the course folder. For example, from the course root:

```bash
gcc -Ilibcs50/src hello.c -Llibcs50/src -lcs50 -o hello
./hello
```

Run `make <target>` only from a directory containing a Makefile with that target. Make does not search parent folders for source files or build rules. The root `makefile` currently refers to `include` and `lib` directories; the checked-in library is instead under `libcs50/src`, so those paths may need updating for the root CS50 programs.

## Course work

- **Week 1:** C basics, functions, variables, conditionals, and section exercises.
- **Week 2:** Arrays, strings, debugging, and section 2 exercises.
- **Week 3:** Searching, phonebooks, and structs.
- **Week 4:** Memory addresses and comparison exercises.

## Acknowledgments

- [CS50](https://cs50.harvard.edu/) — Harvard's Introduction to Computer Science
- [libcs50](https://github.com/cs50/libcs50) — CS50's C helper library
