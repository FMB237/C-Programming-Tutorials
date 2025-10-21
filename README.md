# C Programming Tutorials (organized)

This repository is a personal collection of small C programs organized into lesson folders. It was reorganized on 2025-10-16 to group examples by topic and separate compiled outputs.

Top-level layout

- `lessons/` — example source files grouped by lesson/topic
- `builds/`  — compiled binaries and example outputs (kept out of source folders)
- `docs/`    — documentation and the generated reorganization report
- `README.md` — this file

Overview of lessons/

lessons/01_basics

- Hello.c — Hello world
- PrintName.c — prints a name
- UsingScan.c — examples using `scanf`
- Variables.c — variable examples

lessons/02_control_flow

- doWhile.c — do/while example
- forloop.c — for loop examples (count up/down)
- if_else.c — if / else if / else example
- switch.c — switch/case example (renamed from swicth.c)
- whileLoop.c — while loop example

lessons/03_arrays

- ArrayExercise.c
- Arrays.c
- ArraysLoop.c
- ArraysSumAndAverage.c

lessons/04_pointers

- Pointers.c
- PointerandArrays.c
- PointerMaxMin.c
- PointersAndFunctions.c
- PointersExercise.c
- StringLengthUsingPointer.c

lessons/05_functions

- Functions.c
- functional_calculator.c
- SimpleCalculator.c
- CalculatorVersion2.c
- TemperatureConverter.c

lessons/06_strings

- Strings.c
- EvenorOdd.c

lessons/07_structs

- Struct.c
- StudentsManagementUsingStruct.c

lessons/08_projects

- Copyofpassword.c
- EvenNumberPrinter.c
- PasswordAttemptGames.c
- SimpleLoginSystem.c
- sum_of_natural_numbers.c
- Enum_Struct_Union_Save.c
- Union and Enum.c

builds/

- Contains compiled binaries and the `output/` folder moved here during reorganization.

How to build examples

You can compile any single file with `gcc`. Example (from repo root):

```bash
gcc -Wall -Wextra -std=c11 -o builds/hello.out lessons/01_basics/Hello.c
./builds/hello.out
```

To compile all `.c` files under `lessons/` (quick loop):

```bash
mkdir -p builds
for f in lessons/**/**/*.c; do bn=$(basename "$f"); gcc -Wall -Wextra -std=c11 -o "builds/${bn%.c}.out" "$f" 2>/dev/null && echo "built: builds/${bn%.c}.out"; done
```

Notes & known issues

- Several example files contained minor warnings (format specifiers, buffer-safety). A report of compile results was added to `docs/README.md` during reorganization.
- Filenames with spaces were kept but renaming to snake_case is recommended (e.g. `Union and Enum.c` → `union_and_enum.c`).
- Compiled binaries are kept in `builds/`. Consider adding `builds/` to `.gitignore` if you don't want binaries tracked.

Recommended next steps

1. Add a top-level `Makefile` to build frequently-used targets (e.g., `make all`, `make hello`). I can scaffold one for you.
2. Normalize filenames (replace spaces, fix typos) — I can rename and preserve history with `git mv`.
3. Run through the compile warnings listed in `docs/README.md` and fix the small issues (I can apply PRs for these fixes).

Contact / workflow

If you'd like me to perform any of the next steps (create Makefile, rename files, fix warnings), tell me which ones and I'll apply the changes and commit them.

Enjoy learning C — keep experimenting and commit often!
