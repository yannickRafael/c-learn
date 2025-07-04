# Lesson 5: Data Insertion

---

## What is Data Insertion?

> In C, **data insertion** means getting input from the user and storing it in a variable. This is typically done using the `scanf()` function.

---

## The `scanf()` Function

The `scanf()` function reads input from the keyboard (stdin) and stores it in **variables**.

### Syntax:

```c
scanf("format_specifier", &variable);
```

> Always use `&` (address-of operator) **except for strings**, because `scanf()` needs the **address** of the variable to modify its value.

---

## Basic Example

```c
#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("You are %d years old.\n", age);
    return 0;
}
```

### Output:

```
Enter your age: 21
You are 21 years old.
```

---

## Common Input Patterns

| Data Type | Format Specifier | Example Input Code            |
| --------- | ---------------- | ----------------------------- |
| `int`     | `%d`             | `scanf("%d", &num);`          |
| `float`   | `%f`             | `scanf("%f", &pi);`           |
| `double`  | `%lf`            | `scanf("%lf", &bigNum);`      |
| `char`    | `%c`             | `scanf(" %c", &letter);`      |
| `string`  | `%s`             | `scanf("%s", name);` (no `&`) |

---

## Multiple Inputs at Once

```c
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("You entered: %d and %d\n", a, b);
    return 0;
}
```

---

## Reading Strings

```c
#include <stdio.h>

int main() {
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name); // No & for strings

    printf("Hello, %s!\n", name);
    return 0;
}
```

**Warning:** `scanf("%s", ...)` reads only one word. For full names or strings with spaces, use `fgets()` instead.

---

## Example: Using `fgets()` to read full lines

```c
#include <stdio.h>

int main() {
    char fullName[100];

    printf("Enter your full name: ");
    fgets(fullName, sizeof(fullName), stdin); // safer than scanf

    printf("Welcome, %s", fullName);
    return 0;
}
```

---

## Summary

* Use `scanf()` to **insert data** (input) into variables.
* Format specifiers must **match variable types**.
* Always use `&` with variables (except strings).
* Use `fgets()` to read full lines including spaces.

---

## Challenge

Write a program that asks the user for:

* Their name (string)
* Their age (int)
* Their height (float)

Then displays all the info back.
