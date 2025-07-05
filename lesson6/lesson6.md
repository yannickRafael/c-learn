# Lesson 6: Math Functions in C

---

## What are Math Functions?

> Math functions are **built-in functions** in the C Standard Library (`math.h`) that allow you to perform **advanced mathematical operations**, such as square roots, powers, trigonometry, and more.

To use them, you must include:

```c
#include <math.h>
```

When using math functions, **link with `-lm`** during compilation in some environments (e.g., Linux):

```bash
gcc program.c -o program -lm
```

---

## Common Math Functions

| Function    | Description                    | Example               |
| ----------- | ------------------------------ | --------------------- |
| `sqrt(x)`   | Square root of `x`             | `sqrt(16.0)` → 4.0    |
| `pow(x, y)` | `x` raised to the power of `y` | `pow(2.0, 3.0)` → 8.0 |
| `ceil(x)`   | Smallest integer ≥ `x`         | `ceil(2.3)` → 3.0     |
| `floor(x)`  | Largest integer ≤ `x`          | `floor(2.7)` → 2.0    |
| `round(x)`  | Nearest integer to `x`         | `round(2.6)` → 3.0    |
| `fabs(x)`   | Absolute value of `x` (float)  | `fabs(-4.5)` → 4.5    |
| `log(x)`    | Natural log (base `e`) of `x`  | `log(1.0)` → 0.0      |
| `log10(x)`  | Logarithm base 10 of `x`       | `log10(100.0)` → 2.0  |
| `sin(x)`    | Sine of `x` (in radians)       | `sin(3.14)`           |
| `cos(x)`    | Cosine of `x`                  | `cos(0.0)` → 1.0      |
| `tan(x)`    | Tangent of `x`                 | `tan(0.0)` → 0.0      |

---

## Example Program: Using Math Functions

```c
#include <stdio.h>
#include <math.h>

int main() {
    double num = 9.0;

    printf("Square root of %.2f is %.2f\n", num, sqrt(num));
    printf("2 raised to the power 4 is %.2f\n", pow(2.0, 4.0));
    printf("Ceiling of 2.3 is %.2f\n", ceil(2.3));
    printf("Floor of 2.7 is %.2f\n", floor(2.7));
    printf("Round of 3.6 is %.2f\n", round(3.6));
    printf("Absolute value of -5.5 is %.2f\n", fabs(-5.5));

    return 0;
}
```

### 🔍 Output:

```
Square root of 9.00 is 3.00
2 raised to the power 4 is 16.00
Ceiling of 2.3 is 3.00
Floor of 2.7 is 2.00
Round of 3.6 is 4.00
Absolute value of -5.5 is 5.50
```

---

##  Notes

* **All math functions work with `double` type**. If you're using `float`, you can cast: `sqrt((double)my_float);`
* To use `round()`, make sure your compiler supports **C99** or later.
* Angles for `sin`, `cos`, and `tan` must be in **radians**, not degrees.