# Lesson 20: Pointers in C

---

## What is a Pointer?

> A **pointer** is a variable that **stores the memory address** of another variable.

Instead of storing a value like `5`, a pointer stores **where** that value is located in memory.

---

## Why Use Pointers?

* To manipulate data **indirectly**
* To pass **references to functions**
* To handle **arrays, strings, and dynamic memory**
* To create **efficient and flexible** programs

---

## Declaring a Pointer

```c
type *pointerName;
```

### Example:

```c
int *ptr;
```

* `ptr` is a pointer to an `int`
* It can store the **address of an integer variable**

---

## Getting the Address of a Variable

Use the **address-of operator (`&`)**:

```c
int age = 25;
int *p = &age;

printf("Address of age: %p\n", p);
```

---

## Dereferencing (Getting the Value)

Use the **dereference operator (`*`)** to access the value at the address:

```c
printf("Value at p: %d\n", *p);  // prints 25
```

---

## Full Example: Basic Pointer

```c
#include <stdio.h>

int main() {
    int num = 10;
    int *p = &num;

    printf("num = %d\n", num);
    printf("Address of num = %p\n", p);
    printf("Value at address p = %d\n", *p);

    *p = 20;  // modify value via pointer
    printf("num after change = %d\n", num);

    return 0;
}
```

---

## Common Pointer Usages

### Passing by Reference (Modify in Function)

```c
void update(int *x) {
    *x = 99;
}

int main() {
    int a = 5;
    update(&a);
    printf("%d\n", a);  // prints 99
}
```

---

### Pointer to Array

```c
int arr[] = {1, 2, 3};
int *p = arr;

printf("%d\n", *(p + 1));  // prints 2
```

---

### Pointer to Pointer

```c
int x = 7;
int *p = &x;
int **pp = &p;

printf("%d\n", **pp);  // prints 7
```

---

## Common Mistakes

| Mistake                      | Why It’s Wrong                         |
| ---------------------------- | -------------------------------------- |
| Using `*p` before `p = &var` | Dereferencing an uninitialized pointer |
| Using wrong type pointer     | `int*` ≠ `float*`                      |
| Forgetting to use `*`        | Will not access or change value        |