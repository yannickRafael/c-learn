# Lesson 16: String Arrays in C

---

##  What is a String in C?

> In C, a **string** is an array of `char` values **terminated by a special null character** `'\0'`.

Unlike languages with native string types, C handles strings as arrays of characters.

---

## Declaring Strings

### Method 1: Character Array with Size

```c
char name[10] = "Alice";
```

* Stores `'A'`, `'l'`, `'i'`, `'c'`, `'e'`, `'\0'`
* Remaining space is unused

### Method 2: Let Compiler Decide Size

```c
char name[] = "Alice";
```

* Size is automatically set to 6 (5 chars + `'\0'`)

---

## Accessing Characters in a String

```c
printf("%c\n", name[0]); // prints 'A'
name[1] = 'L';           // changes 'l' to 'L'
```

---

## Reading Strings from User

### `scanf("%s", name)` — reads only **one word**

```c
char name[30];
scanf("%s", name);
```

Input:

```
John Smith
```

Result:
`name = "John"` (stops at space)

---

### Use `fgets()` for full lines (including spaces)

```c
fgets(name, sizeof(name), stdin);
```

> This includes the newline `\n`, so you may want to strip it using:

```c
name[strcspn(name, "\n")] = '\0';
```

---

## Common String Functions (`#include <string.h>`)

| Function            | Purpose                                | Example                |
| ------------------- | -------------------------------------- | ---------------------- |
| `strlen(s)`         | Returns string length (excluding `\0`) | `strlen("Hi") → 2`     |
| `strcpy(dest, src)` | Copies string                          | `strcpy(a, "hello")`   |
| `strcat(dest, src)` | Appends string to another              | `strcat(name, " Jr.")` |
| `strcmp(s1, s2)`    | Compares two strings                   | `== 0` if equal        |

---

## Example: Greet the User by Name

```c
#include <stdio.h>
#include <string.h>

int main() {
    char name[50];

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove trailing newline
    name[strcspn(name, "\n")] = '\0';

    printf("Hello, %s!\n", name);
    return 0;
}
```

---

## String Array (List of Strings)

Use a 2D char array:

```c
char fruits[3][10] = {
    "Apple",
    "Mango",
    "Banana"
};
```

Access:

```c
printf("%s\n", fruits[1]); // prints "Mango"
```

---

## Common Mistakes

| Mistake                       | Why It’s Wrong               |
| ----------------------------- | ---------------------------- |
| Forgetting `'\0'` terminator  | Leads to garbage or crash    |
| Using `==` to compare strings | Doesn’t compare content in C |
| Not allocating enough space   | Causes buffer overflow       |

