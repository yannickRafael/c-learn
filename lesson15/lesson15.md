# Lesson 15: Arrays in C (1D & 2D)

---

## What is an Array?

> An **array** is a collection of **elements of the same type**, stored **contiguously in memory** and accessed using an **index**.

Arrays let you store and manage multiple values **under one name**, instead of creating individual variables.

---

## Array Syntax (1D)

```c
type name[size];
```

### Example:

```c
int numbers[5];
```

* Declares an array of 5 integers
* Indexing starts from `0` to `4`

---

## Initializing a 1D Array

### Manual Initialization

```c
int scores[3] = {90, 80, 70};
```

### Partial Initialization

```c
int scores[5] = {1, 2};  // Remaining become 0
```

### Implicit Size

```c
int scores[] = {100, 98, 95};  // Compiler counts size (3)
```

---

##  Accessing Array Elements

```c
int numbers[3] = {10, 20, 30};

printf("%d", numbers[0]); // prints 10
numbers[2] = 99;          // changes 3rd element to 99
```

> Always remember: **Indexing starts at 0** in C.

---

## User Input: Initialize a 1D Array

```c
#include <stdio.h>

int main() {
    int values[5];

    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Value %d: ", i);
        scanf("%d", &values[i]);
    }

    printf("You entered:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", values[i]);
    }

    return 0;
}
```

---

## 🧹 Clearing a 1D Array

### Method 1: At Declaration

```c
int values[5] = {0};  // All elements are set to 0
```

### Method 2: Manually

```c
for (int i = 0; i < 5; i++) {
    values[i] = 0;
}
```

Useful to **reset** array before reuse or to avoid random leftover values in memory.

---

## Looping Through a 1D Array

```c
for (int i = 0; i < 5; i++) {
    printf("%d\n", numbers[i]);
}
```

---

## Multi-Dimensional Arrays (2D Arrays)

> A **2D array** is like a table: rows and columns.
> It's declared as an array of arrays.

### Syntax:

```c
type name[rows][columns];
```

### Example:

```c
int matrix[2][3]; // 2 rows × 3 columns
```

---

## Initializing a 2D Array

```c
int table[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};
```

Or:

```c
int table[2][3] = {1, 2, 3, 4, 5, 6};
```

---

## User Input: Initialize a 2D Array

```c
#include <stdio.h>

int main() {
    int table[2][3];

    printf("Enter 6 numbers (2x3 table):\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &table[i][j]);
        }
    }

    printf("You entered:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", table[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```

---

## Clearing a 2D Array

```c
int table[2][3] = {0};  // Sets all to 0
```

Or manually:

```c
for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
        table[i][j] = 0;
    }
}
```

---

## Common Mistakes

| Mistake                                 | Why It’s Wrong                      |
| --------------------------------------- | ----------------------------------- |
| Accessing out-of-bounds index           | Causes undefined behavior           |
| Mixing data types in one array          | Not allowed — must be one type only |
| Forgetting that array index starts at 0 | Leads to logic bugs                 |
