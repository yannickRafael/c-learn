# Lesson 12: `while` and `do while` Loops in C

---

## What is a Loop?

> A **loop** allows you to **repeat a block of code** as long as a condition is true.

In this lesson, we focus on:

* `while` loop → checks condition **before** executing
* `do while` loop → checks condition **after** executing

---

## `while` Loop

### Syntax:

```c
while (condition) {
    // code block
}
```

* Condition is checked **before** each iteration
* If the condition is false at the beginning, it **might not run at all**

---

### Example: Count from 1 to 5

```c
#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 5) {
        printf("%d\n", i);
        i++;
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

## `do while` Loop

###  Syntax:

```c
do {
    // code block
} while (condition);
```

* Code is executed **at least once**, even if the condition is false initially

---

### Example: Run once even if condition is false

```c
#include <stdio.h>

int main() {
    int i = 10;

    do {
        printf("i is %d\n", i);
        i++;
    } while (i < 5);

    return 0;
}
```

**Output:**

```
i is 10
```

Even though `i < 5` is false, the loop still runs **once**.

---

## Difference: `while` vs `do while`

| Feature                 | `while`                            | `do while`                             |
| ----------------------- | ---------------------------------- | -------------------------------------- |
| Condition checked       | Before loop starts                 | After first execution                  |
| Runs if condition false | No                               | Yes, runs at least once              |
| Typical use case        | When you might **not** want to run | When you want to run **at least once** |

---

## Example: Input Validation with `do while`

```c
#include <stdio.h>

int main() {
    int number;

    do {
        printf("Enter a positive number: ");
        scanf("%d", &number);
    } while (number <= 0);

    printf("You entered: %d\n", number);
    return 0;
}
```

This ensures the user **must enter a valid number** before continuing.

---

## Infinite Loops

You can write a loop that runs **forever** (until manually broken):

```c
while (1) {
    // runs forever unless you use break;
}
```

---

## Best Practices

* Always update the **loop control variable** (`i++`) or you risk **infinite loops**
* Use `break` to exit a loop early, and `continue` to skip to the next iteration