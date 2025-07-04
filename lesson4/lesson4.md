# Lesson 4: Arithmetic Operators

---

## What are Arithmetic Operators?

> Arithmetic operators are symbols that perform **basic mathematical operations** on numeric values in C. They are mostly used with variables or constants of numeric types like `int`, `float`, or `double`.

---

## List of Arithmetic Operators

| Operator | Name                | Description                       | Example |
| -------- | ------------------- | --------------------------------- | ------- |
| `+`      | Addition            | Adds two operands                 | `a + b` |
| `-`      | Subtraction         | Subtracts right operand from left | `a - b` |
| `*`      | Multiplication      | Multiplies two operands           | `a * b` |
| `/`      | Division            | Divides left by right operand     | `a / b` |
| `%`      | Modulus (Remainder) | Returns remainder of division     | `a % b` |

---

## Example 1: Basic Arithmetic

```c
#include <stdio.h>

int main() {
    int a = 10, b = 3;

    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);  // Integer division
    printf("a %% b = %d\n", a % b); // %% to print %

    return 0;
}
```

**Output:**

```
a + b = 13
a - b = 7
a * b = 30
a / b = 3
a % b = 1
```

---

## Example 2: Division with floats

```c
#include <stdio.h>

int main() {
    float x = 10.0, y = 3.0;

    printf("x / y = %.2f\n", x / y); // Floating-point division

    return 0;
}
```

**Output:**

```
x / y = 3.33
```

---

## Example 3: Modulus only works with integers

```c
// This is valid:
int x = 10, y = 3;
int remainder = x % y; // Works

// This is invalid:
// float a = 10.0, b = 3.0;
// float error = a % b; // ❌ Invalid in C
```

**Note:** The `%` operator **does not** work with `float` or `double`.

---

## Important Notes

* Division of integers (e.g., `7 / 2`) returns **only the integer part** (`3`), discarding decimals.
* To get decimal results, use floating point types like `float` or `double`.
* Use `%%` in `printf()` to print a literal percent symbol.

---

## Practice Exercise

Write a C program that takes two integers from the user and prints:

* Their sum
* Difference
* Product
* Quotient
* Remainder

### Sample code:

```c
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Sum: %d\n", a + b);
    printf("Difference: %d\n", a - b);
    printf("Product: %d\n", a * b);

    if (b != 0) {
        printf("Quotient: %d\n", a / b);
        printf("Remainder: %d\n", a % b);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}
```