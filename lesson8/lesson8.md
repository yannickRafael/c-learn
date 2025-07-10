
# Lesson 8: `switch` Statements in C

---

## What is a `switch` Statement?

> A `switch` statement is a **multi-way conditional** used to **choose between several options** based on the value of a variable (typically an `int` or `char`).

It’s an alternative to writing many `if...else if...else` statements.

---

## Basic Syntax

```c
switch (expression) {
    case value1:
        // Code block for value1
        break;
    case value2:
        // Code block for value2
        break;
    ...
    default:
        // Code block if no case matches
}
```

---

## Key Concepts

* The `expression` is evaluated **once**
* Each `case` compares a value **equal to** the expression
* `break` exits the switch — without it, execution **falls through**
* `default` is **optional** — runs if no case matches

---

## Example 1: Day of the Week

```c
#include <stdio.h>

int main() {
    int day = 3;

    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        default:
            printf("Weekend!\n");
    }

    return 0;
}
```

### Output:

```
Wednesday
```

---

## What if you forget `break`?

```c
int option = 1;

switch (option) {
    case 1:
        printf("Option 1\n");
    case 2:
        printf("Option 2\n");
}
```

### Output:

```
Option 1
Option 2
```

> Without `break`, it **falls through** and runs **all remaining cases**.

---

## Example 2: Simple Calculator (2 options)

```c
#include <stdio.h>

int main() {
    int choice;
    float a, b;

    printf("1. Add\n2. Multiply\nChoose an option: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (choice) {
        case 1:
            printf("Sum = %.2f\n", a + b);
            break;
        case 2:
            printf("Product = %.2f\n", a * b);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
```

---

## When to Use `switch`

Use `switch` instead of `if...else if...else` when:

* You’re checking the **value of a single variable**
* You have **many fixed options**, like menus or settings
* The variable is of type `int`, `char`, or enum

---

## Limitations

* Can’t use ranges like `if (x > 10)`
* Can’t check multiple conditions (e.g., `x > 5 && x < 10`)
* Expression must be **constant evaluable** (no strings, floats, etc.)