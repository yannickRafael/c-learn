# Lesson 19: `enum` (Enumerations) in C

---

## What is an `enum`?

> An `enum` (short for **enumeration**) is a user-defined type in C that assigns **names to integral constants** to make code more readable and meaningful.

Instead of using raw numbers like `0`, `1`, `2`, etc., you can use **descriptive names**.

---

## Syntax

```c
enum EnumName {
    VALUE1,
    VALUE2,
    VALUE3
};
```

Each value is assigned an **integer starting from 0** by default.

---

### Example:

```c
enum Day { MONDAY, TUESDAY, WEDNESDAY };

enum Day today = TUESDAY;

printf("%d", today);  // Output: 1
```

---

## Behind the Scenes

```c
// Equivalent to:
#define MONDAY    0
#define TUESDAY   1
#define WEDNESDAY 2
```

---

## Assigning Custom Values

```c
enum Status { OK = 200, NOT_FOUND = 404, ERROR = 500 };

enum Status s = NOT_FOUND;
printf("%d\n", s);  // Output: 404
```

You can also mix default and custom:

```c
enum Example { A = 1, B, C = 10, D };
// B = 2, D = 11
```

---

## Real-Life Use Case

### Menu Options

```c
enum Menu { VIEW = 1, ADD, EDIT, DELETE, EXIT };
```

### Traffic Light

```c
enum TrafficLight { RED, YELLOW, GREEN };

enum TrafficLight light = GREEN;

if (light == GREEN) {
    printf("Go!\n");
}
```

---

## Example Program: Using Enum with Switch

```c
#include <stdio.h>

enum Operation { ADD = 1, SUBTRACT, MULTIPLY, DIVIDE };

int main() {
    enum Operation op;
    printf("Choose operation (1=Add, 2=Subtract, 3=Multiply, 4=Divide): ");
    scanf("%d", (int*)&op);

    switch (op) {
        case ADD:
            printf("You chose Addition\n");
            break;
        case SUBTRACT:
            printf("You chose Subtraction\n");
            break;
        case MULTIPLY:
            printf("You chose Multiplication\n");
            break;
        case DIVIDE:
            printf("You chose Division\n");
            break;
        default:
            printf("Invalid option\n");
    }

    return 0;
}
```

---

## Common Mistakes

| Mistake                   | Why It’s Wrong                              |
| ------------------------- | ------------------------------------------- |
| Using string with `enum`  | Enums are **integers**, not strings         |
| Assigning values manually | Can skip or duplicate values if not careful |
