Absolutely! Here's a clear and complete **Lesson 9: Logic Operators in C**, perfect for beginners.

---

# Lesson 9: Logic Operators in C

---

## What are Logic Operators?

> **Logic operators** (also called **logical operators**) allow you to **combine or invert boolean expressions** (true/false conditions) in `if`, `while`, `for`, and other conditional statements.

They’re used to perform **logical tests** and return `1` (true) or `0` (false).

---

## Types of Logical Operators in C

| Operator | Name        | Meaning                              | Example             |                                  |          |   |           |
| -------- | ----------- | ------------------------------------ | ------------------- | -------------------------------- | -------- | - | --------- |
| `&&`     | Logical AND | True if **both** conditions are true | `(a > 5 && b < 10)` |                                  |          |   |           |
| \`       |             | \`                                   | Logical OR          | True if **at least one** is true | \`(a > 5 |   | b < 10)\` |
| `!`      | Logical NOT | Inverts the condition                | `!(a > 5)`          |                                  |          |   |           |

---

## Example 1: Logical AND (`&&`)

```c
#include <stdio.h>

int main() {
    int age = 25;
    int has_id = 1;

    if (age >= 18 && has_id) {
        printf("Access granted.\n");
    } else {
        printf("Access denied.\n");
    }

    return 0;
}
```

> Output:

```
Access granted.
```

---

## Example 2: Logical OR (`||`)

```c
int temp = 35;

if (temp < 0 || temp > 30) {
    printf("Extreme weather alert!\n");
}
```

> Output:

```
Extreme weather alert!
```

---

## Example 3: Logical NOT (`!`)

```c
int is_raining = 0;

if (!is_raining) {
    printf("You can go outside.\n");
}
```

> Output:

```
You can go outside.
```

---

## Logical Expressions Are Usually in `if` Statements

```c
if (score >= 60 && passed == 1) {
    printf("You passed!\n");
}
```

* If both conditions are true, the block runs.
* If one is false, it skips.

---

## Truth Table for `&&` and `||`

### AND (`&&`)

| A | B | A && B |
| - | - | ------ |
| 0 | 0 | 0      |
| 0 | 1 | 0      |
| 1 | 0 | 0      |
| 1 | 1 | 1      |

### OR (`||`)

| A | B | A \|\| B |
| - | - | -------- |
| 0 | 0 | 0        |
| 0 | 1 | 1        |
| 1 | 0 | 1        |
| 1 | 1 | 1        |

---

## Common Mistakes

* Using `&` instead of `&&` (bitwise vs logical)
* Forgetting to use parentheses in complex conditions
* Assuming `!` flips numeric values (it only flips true/false)

