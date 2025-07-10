# Lesson 10: Functions in C

---

## What is a Function?

> A **function** in C is a **block of code** that performs a specific task. It helps you organize, reuse, and structure your program better.

Functions:

* Break down large problems into smaller steps
* Promote **code reuse**
* Improve **readability** and **debugging**

---

## Function Anatomy

```c
return_type function_name(parameter_list) {
    // body of the function
    return value; // if not void
}
```

### Example:

```c
int add(int a, int b) {
    return a + b;
}
```

---

## Types of Functions

| Type                 | Description                                |
| -------------------- | ------------------------------------------ |
| **Standard Library** | Built-in (e.g., `printf`, `scanf`, `sqrt`) |
| **User-defined**     | You create them (e.g., `int sum(...)`)     |
| **Void**             | Returns nothing (e.g., `void greet()`)     |
| **Value-returning**  | Returns a value (e.g., `int get_age()`)    |

---

## Declaring vs Defining

### Declaration (also called prototype):

```c
int multiply(int, int); // tells compiler it exists
```

### Definition (actual body):

```c
int multiply(int a, int b) {
    return a * b;
}
```

---

## Function Calling

Once defined, you call a function like this:

```c
int result = multiply(5, 2);
```

---

## Example: Add Two Numbers with a Function

```c
#include <stdio.h>

// Function declaration
int add(int a, int b);

int main() {
    int x = 5, y = 7;
    int sum = add(x, y);
    printf("Sum: %d\n", sum);
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
```

---

## Example: A Function That Returns Nothing (void)

```c
#include <stdio.h>

void greet() {
    printf("Hello, welcome to Lesson 10!\n");
}

int main() {
    greet(); // function call
    return 0;
}
```

---

## Example: Function with No Parameters

```c
int get_five() {
    return 5;
}
```

---

## Why Use Functions?

* Avoid **repeating code**
* Make programs **easier to test**
* Group logic into **modular parts**
* Enable **team collaboration** by dividing code into pieces

---

## Best Practices

* Use meaningful names: `calculate_area`, `print_result`, etc.
* Keep functions small and focused on **one task**
* Avoid global variables (use parameters)

