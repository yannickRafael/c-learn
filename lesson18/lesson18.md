# Lesson 18: `struct` in C

---

## What is a `struct`?

> A `struct` (short for **structure**) is a **user-defined data type** that groups related variables of **different types** under one name.

It is used to **represent a single "record"** or object with multiple fields (members).

---

## Syntax

```c
struct StructName {
    type member1;
    type member2;
    ...
};
```

### Example:

```c
struct Person {
    char name[50];
    int age;
    float height;
};
```

---

## Creating a Variable of a Struct

```c
struct Person p1;
```

You can also initialize directly:

```c
struct Person p1 = {"Alice", 25, 1.65f};
```

---

## Accessing and Modifying Members

Use the **dot operator (`.`)**:

```c
printf("Name: %s\n", p1.name);
p1.age = 26;
```

---

## Using `typedef` with `struct` (Cleaner Syntax)

```c
typedef struct {
    char name[50];
    int age;
} Person;

Person p1 = {"Bob", 32};
```

Now you can use `Person` directly without writing `struct Person`.

---

## Arrays of Structs

```c
Person people[3] = {
    {"Ana", 21},
    {"Carlos", 34},
    {"Mia", 28}
};

printf("First person's name: %s\n", people[0].name);
```

---

## Example Program: Student Info

```c
#include <stdio.h>

typedef struct {
    char name[30];
    int id;
    float grade;
} Student;

int main() {
    Student s;

    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = '\0';

    printf("Enter ID: ");
    scanf("%d", &s.id);

    printf("Enter grade: ");
    scanf("%f", &s.grade);

    printf("\nStudent Info:\n");
    printf("Name: %s\n", s.name);
    printf("ID: %d\n", s.id);
    printf("Grade: %.2f\n", s.grade);

    return 0;
}
```

---

## Common Mistakes
 🛑
| Mistake                                 | Why It’s Wrong                        |
| --------------------------------------- | ------------------------------------- |
| Using `.` on a pointer to struct        | You must use `->` instead of `.`      |
| Forgetting to allocate arrays in struct | Can cause buffer overflows or crashes |