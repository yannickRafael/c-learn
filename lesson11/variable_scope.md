# Lesson 11: Variable Scope in C

---

## What is Variable Scope?

> **Variable scope** defines **where** in your code a variable is **accessible** (visible and usable).

In C, the scope of a variable depends on **where it is declared** — inside a function, outside a function, or inside a block.

---

## Types of Variable Scope

| Scope Type             | Where Declared             | Where Accessible                           |
| ---------------------- | -------------------------- | ------------------------------------------ |
| **Local**              | Inside a function or block | Only inside that function/block            |
| **Global**             | Outside all functions      | Anywhere in the file (after declaration)   |
| **Block (nested)**     | Inside `{}`                | Only within those specific braces `{}`     |
| **Function parameter** | In parameter list          | Acts like a local variable inside function |

---

## Example 1: Local Scope

```c
#include <stdio.h>

void greet() {
    int hour = 10; // Local variable
    printf("Hour: %d\n", hour);
}

int main() {
    // printf("%d", hour); ERROR: hour not visible here
    greet();
    return 0;
}
```

* `hour` is **only accessible** inside `greet()`

---

## Example 2: Global Scope

```c
#include <stdio.h>

int count = 0; // Global variable

void increase() {
    count++;
}

int main() {
    increase();
    printf("Count: %d\n", count); // OK
    return 0;
}
```

* `count` is accessible in **all functions** after its declaration

---

## Example 3: Block Scope

```c
#include <stdio.h>

int main() {
    if (1) {
        int x = 42; // Only exists in this block
        printf("x = %d\n", x);
    }

    // printf("%d", x); ERROR: x not visible here
    return 0;
}
```

---

## Example 4: Function Parameters Are Local

```c
void printSquare(int n) {
    printf("Square: %d\n", n * n);
}

int main() {
    printSquare(5);
    // printf("%d", n); ERROR: n not visible in main
    return 0;
}
```

* `n` is only accessible inside `printSquare`

---

## Shadowing (Overriding Scope)

You can **declare a local variable** with the same name as a global — this "shadows" the global one.

```c
int value = 10; // Global

int main() {
    int value = 20; // Shadows global variable
    printf("%d\n", value); // Prints 20 (local takes priority)
    return 0;
}
```

---

## Best Practice

Avoid using too many global variables unless necessary. They:

* Make code harder to debug
* Can be accidentally changed by any function

---

## Summary

| Scope Type | Lifetime                  | Visible In                     |
| ---------- | ------------------------- | ------------------------------ |
| Local      | Until function/block ends | That function/block only       |
| Global     | Entire program            | Any function in the same file  |
| Block      | Until `{}` closes         | Inside that specific `{}` only |
| Parameter  | Until function ends       | Inside that function only      |