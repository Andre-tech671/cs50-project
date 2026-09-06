# 🎓 CS50 Harvard Programming Course

> My working folder for **Harvard's CS50: Introduction to Computer Science**.
> C programs, exercises, and section work organized **by week**, from Week 1 fundamentals through Week 4 memory & pointers.

---

## ✨ Highlights

- ✅ Programs for **Weeks 1 → 4** (plus section exercises)
- ✅ Bundled **CS50 library** (`libcs50`) with `get_int`, `get_string`, and friends
- ✅ **Makefiles** so every folder builds with a simple `make <target>`
- ✅ Plug-and-play **GCC + Make** setup on Windows (see [Getting started](#-getting-started))

---

## 📂 Folder structure

```
cs50 havard programming course/
├── libcs50/                  # Cloned CS50 C library (docs, src, tests)
├── *.c                       # Week-independent practice programs
├── makefile                  # Root build rules (hello, mario, agree, …)
├── setup_cs50.bat            # One‑click environment setup script
├── X and Y Flow chart.png    # Course flowchart reference
│
├── cs50 week 1/              # Week 1 – C basics, variables, functions
├── CS50 Week 2/              # Week 2 – Arrays, strings, debugging
│   └── section 2/            #   Section exercises (arrays, alphabetical, adder)
├── cs50 week 3/              # Week 3 – Algorithms & searching
│   └── section/              #   Section exercise (structs / candidates)
└── CS50 Week 4/              # Week 4 – Memory & pointers
```

> 🧭 The shared CS50 header and static library live in the **repo root**
> (`include/cs50.h` and `lib/libcs50.a`), two levels above the week folders.
> The Makefiles reference them via `../../include` and `../../lib`.

---

## 🏁 Getting started

### Prerequisites
- **GCC** compiler  (MinGW-w64 – already installed on this machine)
- **Make** utility  (already installed on this machine)
- **CS50 library**  (included in this folder / at the repo root)

### One‑time setup
Windows MINGW64 users can run `setup_cs50.bat` to clone/build `libcs50` and verify
`gcc` + `make` are installed.

---

## 🛠 How to compile & run

Every week folder has a `(M)akefile`. From *that* folder just call `make`:

```bash
# From inside a week folder:
make <program>     # build just one program
make               # build every program in the folder (Weeks 2–3)
make clean         # remove built executables
```

Then run the result:

```bash
./<program>        # Linux / MSYS2
# or
.\<program>.exe    # Windows cmd
```

### Per‑week commands

| Folder | Build | Example run |
|--------|-------|-------------|
| root | `make hello` | `./hello.exe` |
| `cs50 week 1` | `make hello` | `./hello.exe` |
| `CS50 Week 2` | `make scores` | `./scores.exe` |
| `CS50 Week 2/section 2` | `make` | `./arrays.exe` |
| `cs50 week 3` | `make` | `./phonebook` |
| `cs50 week 3/section` | `make structs` | `./structs` |
| `CS50 Week 4` | `gcc addresses.c -o addresses` | `./addresses` |

> **Week 4** has no Makefile yet – build it directly with `gcc`:
> ```bash
> gcc addresses.c -o addresses && ./addresses
> ```

Manual compile (linking the CS50 library):
```bash
gcc -I../../include program.c -L../../lib -lcs50 -o program
```

---

## 🗂 What each program does

### Root – practice programs
| File | Description |
|------|-------------|
| `hello.c` | Asks your name, prints `Hello, <name>!` |
| `agree.c` | `yes/no` prompt (`get_char`), case‑insensitive reply |
| `compare.c` | Compares two `get_int` values: less / greater / equal |
| `calculator.c` | “Double the dollar” game using `scanf` & loop |
| `cat.c` | Famous *meow* example: prints `meow` N times (functions + `do-while`) |
| `mario.c` | Prints a hash grid using a reusable `print_row` function |

### Week 1 – C basics
| File | Description |
|------|-------------|
| `calls.c` | Tiered “phone bill” calculator with conditional rates |
| `friends.c` | Collects name/age/hometown/phone and prints a friendly summary |
| `hello.c` | Basic name → greeting |
| `cs50.c` / `cs50.h` | CS50 library source (vendored copy) |

### Week 2 – Arrays, strings, debugging
| File | Description |
|------|-------------|
| `buggy.c` | Deliberately buggy `print_columns` (prints one extra `#`) |
| `length.c` | Counts string length manually by scanning for `\0` |
| `scores.c` | Reads 3 scores into an array, prints the average |
| `section 2/arrays.c` | Builds an array of powers of two, prints each |
| `section 2/alphabetical.c` | Checks if input letters are in alphabetical order |
| `section 2/adder-1.c` | Adds two ints via an `add_two_ints` function |

### Week 3 – Algorithms & searching
| File | Description |
|------|-------------|
| `search_Integers.c` | Searches an int array (`sizeof`‑safe), prints Found / Not Found |
| `search_strings.c` | Searches a string array with `strcmp` |
| `phonebook.c` | Parallel name/number arrays, linear search |
| `phonebook2.c` | Same idea but with a `typedef struct person` |
| `section/structs.c` | `candidate` struct array; finds the election winner |

### Week 4 – Memory & pointers
| File | Description |
|------|-------------|
| `addresses.c` | Prints the memory address of a variable with `%p` |

---

## 🧪 Current progress

| Week | Topic | Status |
|------|-------|--------|
| 1 | C, variables, functions, conditionals | ✅ Done |
| 2 | Arrays, strings, debugging | ✅ Done |
| 3 | Searching & algorithms | ✅ Done |
| 4 | Memory & pointers | 🚧 In progress |

---

## 🔧 Troubleshooting

**`make` fails: `process_begin: CreateProcess(NULL, cc ...) failed`**
Make defaults to a compiler named `cc`, but MinGW ships `gcc`, not `cc`.
Fix by adding a `cc` alongside your gcc (one time):
```bash
cp "$(which gcc)" "$(dirname "$(which gcc)")/cc"
```
(Windows: `copy gcc.exe cc.exe` inside the `mingw64\bin` folder, then restart the terminal.)

**`cs50.h: No such file or directory`**
Run `make` from *inside* a week folder so the `../../include` path resolves, or
pass the include/lib flags manually as shown above.

**Program built but output is stale**
Rerun `make` (or `gcc`) after editing — the executable isn't auto‑rebuilt.

---

## 🙏 Acknowledgments
- [CS50](https://cs50.harvard.edu/) – Harvard’s Introduction to Computer Science
- [libcs50](https://github.com/cs50/libcs50) – CS50’s C helper library

*Made for learning. Free to fork and build on!*