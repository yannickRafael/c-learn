# Lesson 7: If Statements in C

---

## What is an `if` statement?

> An **`if` statement** in C is used to **make decisions** in a program. It allows the program to execute certain code **only if a condition is true**.

---

## Basic Syntax

```c
if (condition) {
    // code to execute if condition is true
}
```

---

## Example 1: Basic `if`

```c
#include <stdio.h>

int main() {
    int age = 20;

    if (age >= 18) {
        printf("You are an adult.\n");
    }

    return 0;
}
```

### Output:

```
You are an adult.
```

---

## `if...else` Statement

Used to provide an **alternative** block of code if the condition is false.

```c
if (condition) {
    // if true
} else {
    // if false
}
```

### Example 2:

```c
int number = 5;

if (number % 2 == 0) {
    printf("Even number\n");
} else {
    printf("Odd number\n");
}
```

---

##  `if...else if...else` Chain

Used to check **multiple conditions** in sequence.

```c
if (condition1) {
    // block 1
} else if (condition2) {
    // block 2
} else {
    // default block
}
```

### Example 3:

```c
int grade = 85;

if (grade >= 90) {
    printf("A\n");
} else if (grade >= 80) {
    printf("B\n");
} else if (grade >= 70) {
    printf("C\n");
} else {
    printf("F\n");
}
```

---

##  Comparison Operators

Used inside `if` conditions:

| Operator | Meaning               |
| -------- | --------------------- |
| `==`     | Equal to              |
| `!=`     | Not equal to          |
| `>`      | Greater than          |
| `<`      | Less than             |
| `>=`     | Greater than or equal |
| `<=`     | Less than or equal    |

---

## Example 4: User Input

```c
#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 18) {
        printf("You are a minor.\n");
    } else {
        printf("You are an adult.\n");
    }

    return 0;
}
```