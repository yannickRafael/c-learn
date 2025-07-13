# Lesson 17: `typedef` in C

---

## 🔍 What is `typedef`?

> `typedef` is a **keyword** in C that allows you to **create new names (aliases)** for existing types.

It improves **readability**, simplifies **complex type declarations**, and is commonly used with `struct`, `enum`, and pointer types.

---

## Basic Syntax

```c
typedef existing_type new_name;
```

---

### Example 1: Simple Alias

```c
typedef unsigned int uint;

uint age = 30;  // same as: unsigned int age = 30;
```

This creates an alias `uint` for `unsigned int`.

---

## Real Use Case: Structs

Without `typedef`:

```c
struct Person {
    char name[50];
    int age;
};

struct Person p1;
```

With `typedef`:

```c
typedef struct {
    char name[50];
    int age;
} Person;

Person p1;  // no need to write 'struct' anymore
```

> This is cleaner and more readable.

---

## Example: Define `typedef` for a Struct

```c
#include <stdio.h>

typedef struct {
    char name[30];
    int age;
} Student;

int main() {
    Student s1 = {"Alice", 20};
    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    return 0;
}
```

---

## Other Common Uses

### Function pointer typedef:

```c
typedef int (*operation)(int, int);
```

### Pointer alias:

```c
typedef char* string;

string name = "Hello";
```

---

## Common Mistakes

| Mistake                               | Why It’s Wrong                        |
|----------------------------------------|----------------------------------------|
| Thinking `typedef` creates a new type  | It only **renames** an existing type  |
| Using `typedef` to replace logic       | `typedef` does **not change behavior**|

