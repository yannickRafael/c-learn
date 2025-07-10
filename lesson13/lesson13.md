# Lesson 13: `for` Loops in C

---

##  What is a `for` Loop?

> A `for` loop is a **pre-tested loop** used when you know **exactly how many times** you want to repeat a block of code.

It’s perfect for counting and repeating tasks with a **counter variable**.

---

## Syntax

```c
for (initialization; condition; update) {
    // code block
}
```

### Components:

| Part             | Purpose                                      |
| ---------------- | -------------------------------------------- |
| `initialization` | Sets up the loop counter (e.g., `int i = 0`) |
| `condition`      | Checks whether to continue looping           |
| `update`         | Changes the counter (e.g., `i++`)            |

---

## Example 1: Print numbers 1 to 5

```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }
    return 0;
}
```

**Output:**

```
1
2
3
4
5
```

---

## Example 2: Loop in reverse

```c
for (int i = 5; i > 0; i--) {
    printf("%d\n", i);
}
```

**Output:**

```
5
4
3
2
1
```

---

## Example 3: Print even numbers from 2 to 10

```c
for (int i = 2; i <= 10; i += 2) {
    printf("%d ", i);
}
```

**Output:**

```
2 4 6 8 10
```

---

## `for` vs `while`

| Feature            | `for` Loop                    | `while` Loop                    |
| ------------------ | ----------------------------- | ------------------------------- |
| Use when           | Number of iterations is known | Number of iterations is unknown |
| Syntax compactness | All in one line               | Spread out                      |
| Initialization     | Inside the loop               | Usually before the loop         |

---

## Nested `for` Loops

You can put one `for` loop inside another — great for working with grids and tables.

### Example: Print a 3x3 square

```c
for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 3; j++) {
        printf("* ");
    }
    printf("\n");
}
```

**Output:**

```
* * *
* * *
* * *
```

---

## Skipping or Breaking Loops

| Keyword    | Effect                      |
| ---------- | --------------------------- |
| `break`    | Exits the loop immediately  |
| `continue` | Skips the current iteration |

---

## Common Mistakes

* Forgetting `i++` → causes infinite loop
* Using `<=` instead of `<` (off-by-one errors)
* Not declaring `int i` in older compilers outside `for`

---

## Summary

* `for` loops are ideal for counting or repeating tasks a known number of times.
* Syntax packs **setup**, **condition**, and **update** into one line.
* You can use `break` and `continue` to control flow.
* Use nested loops for patterns, matrices, etc.