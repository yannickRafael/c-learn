# Lesson 15: Arrays in C

---

## What is an Array?

> An **array** is a collection of variables of the **same type**, stored **contiguously in memory** and accessed using an **index**.

You can think of an array as a **list of items**.

---

## Array Syntax

```c
type name[size];
```

### Example:

```c
int numbers[5];
```

* This declares an array of 5 integers.
* Elements are accessed from index `0` to `4`.

---

## Initializing Arrays

### Manual Initialization

```c
int scores[3] = {90, 80, 70};
```

### Partial Initialization

```c
int scores[5] = {1, 2};  // Remaining elements become 0
```

### Implicit Size

```c
int scores[] = {100, 98, 95};  // Size is inferred to be 3
```

---

## Accessing Array Elements

```c
int numbers[3] = {10, 20, 30};

printf("%d", numbers[0]); // prints 10
numbers[2] = 99;          // changes 3rd element to 99
```

> **Indexing starts at 0** in C

---

## Looping Through Arrays

### Example: Print all elements

```c
for (int i = 0; i < 5; i++) {
    printf("%d\n", numbers[i]);
}
```

---

## Example: Store and Print 5 Grades

```c
#include <stdio.h>

int main() {
    int grades[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter grade %d: ", i + 1);
        scanf("%d", &grades[i]);
    }

    printf("You entered:\n");
    for (int i = 0; i < 5; i++) {
        printf("Grade %d: %d\n", i + 1, grades[i]);
    }

    return 0;
}
```

---

## Array Size

There’s no built-in way to get the size of an array **at runtime**, but you can compute the number of elements:

```c
int arr[10];
int size = sizeof(arr) / sizeof(arr[0]); // 10
```

---

## Common Mistakes

| Mistake                             | Why It’s Wrong                       |
| ----------------------------------- | ------------------------------------ |
| Accessing `arr[5]` in `arr[5]`      | Index out of bounds (0–4 only valid) |
| Using different types in same array | Arrays must be **one type only**     |
| Forgetting array indices start at 0 | May cause logic or access errors     |
