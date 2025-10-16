# C Programming Tutorials (2025)

This folder is a personal collection of small C programs used to learn and practice C programming concepts in 2025.

## Contents

Below are the main source files and folders in this repository (top-level files):

- `ArrayExercise.c`            — small exercises using arrays
- `Arrays.c`                   — array examples
- `ArraysLoop.c`               — iterating arrays with loops
- `ArraysSumAndAverage.c`      — compute sum and average of array elements
- `CalculatorVersion2.c`       — simple calculator example
- `Copyofpassword.c`           — password-related example (copy)
- `doWhile.c`                  — example using do-while loop
- `EvenNumberPrinter.c`        — prints even numbers
- `EvenorOdd.c`                — checks even or odd
- `forloop.c`                  — up and down counting examples (fixed)
- `forloop.out`                — compiled binary for `forloop.c`
- `Functional Calculator.c`    — calculator demonstrating functions
- `Functions.c`                — examples of functions
- `Hello.c`                    — simple hello world
- `Hello`                      — (possibly an output folder or alternate file)
- `PasswordAttemptGames.c`     — password attempt / game example
- `Pointers.c`                 — examples using pointers
- `PrintName.c`                — prints a name to stdout
- `SimpleCalculator.c`         — another calculator example
- `SimpleLoginSystem.c`        — very small login system demo
- `Strings.c`                  — string handling examples
- `Sum of natural numbers.c`   — sum of first N natural numbers
- `swicth.c`                   — switch-case example (note spelling)
- `TemperatureConverter.c`     — converts temperatures between units
- `UsingScan.c`                — examples using scanf
- `Variables.c`                — variable examples
- `whileLoop.c`                — while loop example
- `sum`                        — (likely a small program or output)
- `output/`                    — directory containing compiled outputs or sample outputs

## How to compile

You can compile any single C source file with `gcc`. Example (compile `forloop.c`):

```bash
gcc -Wall -Wextra -std=c11 -o forloop.out "forloop.c"
```

Then run it:

```bash
./forloop.out
```

To compile many files quickly you can run a loop from the repository root:

```bash
for f in *.c; do gcc -Wall -Wextra -std=c11 -o "${f%.c}.out" "$f" 2>/dev/null && echo "built: ${f%.c}.out"; done
```

## Notes and recommendations

- Filenames contain some spaces (e.g., `Sum of natural numbers.c`, `Functional Calculator.c`) — these work but are harder to manage in scripts; consider renaming them to use underscores or dashes.
- Some filenames have typos (`swicth.c`) — you may want to correct them if you use them frequently.
- Many example programs are self-contained; open each `.c` to see comments and how the example is structured.
- If you want, I can:
  - Add a `Makefile` to build common examples quickly,
  - Normalize file names to a consistent style,
  - Run and capture outputs for each program and place them in `output/`.

## License

This folder contains learning code. Add a license file if you plan to share it publicly.

If you'd like, tell me how you'd like the README formatted (short list, detailed docs per file, or add a Makefile) and I'll update it accordingly.

## Reorganization report (automatically generated)

Commit: 9789b21 — "Reorganize repository: group examples into lessons/, move binaries to builds/, docs to docs/"
Author: FMB237
Date: Thu Oct 16 12:48:06 2025 +0100

Files moved: multiple files were reorganized into `lessons/` subfolders and build artifacts moved to `builds/` (see commit details in git history).

Compile summary (fresh run using `gcc -Wall -Wextra -std=c11`)

OK: many lesson examples compiled successfully. The following files produced warnings/errors that you may want to fix:

- `lessons/01_basics/Variables.c` — uses `char grade = "C";` (string literal assigned to char). Use `char grade = 'C';` or `char *grade = "C";`.
- `lessons/04_pointers/PointersAndFunctions.c` — a non-void function does not return on all paths; ensure all paths return a value or change signature to `void`.
- `lessons/04_pointers/PointersExercise.c` — has unused pointer variables (`pa`, `pb`) shown by compiler warnings.
- `lessons/08_projects/SimpleLoginSystem.c` — `scanf("%s", &Trier);` passes `&Trier` (type `char (*)[10]`) instead of `Trier` (type `char *`); use `scanf("%9s", Trier);` to avoid overflow.
- `lessons/03_arrays/Arrays.c` — printing an address with `%d` (`printf("...%d", &score[2]);`) is incorrect; use `%p` and cast to `(void*)`.

Next recommended fixes:

1. Fix the simple issues above and re-run the compile step. I can apply these edits for you.
2. Add a top-level `README.md` describing the new `lessons/` layout and a `Makefile` to build selected examples.
3. Add a `.gitignore` to avoid committing compiled binaries in future (e.g., `builds/`, `*.out`).

If you'd like, I can now apply the simple source fixes (Variables.c, SimpleLoginSystem.c, Arrays.c, and the non-void-return in PointersAndFunctions.c) and re-run compilation.
