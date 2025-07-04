# Lesson 3: Format Specifiers

---

## What is a format specifier?

> Format specifiers are like tokens that begin with a **%** symbol followed by one or more characters and optional modifiers. They are used to control how data is displayed or interpreted in formatted input/output functions like `printf()` and `scanf()`.

---

## Common Format Specifiers in C

| Specifier | Description              | Example                   |
| --------- | ------------------------ | ------------------------- |
| `%d`      | Signed decimal integer   | `printf("%d", -10);`      |
| `%u`      | Unsigned decimal integer | `printf("%u", 10);`       |
| `%f`      | Decimal floating point   | `printf("%f", 3.14);`     |
| `%.2f`    | Float with 2 decimals    | `printf("%.2f", 3.1415);` |
| `%c`      | Character                | `printf("%c", 'A');`      |
| `%s`      | String                   | `printf("%s", "Hi");`     |
| `%x`      | Hex (lowercase)          | `printf("%x", 255);`      |
| `%X`      | Hex (uppercase)          | `printf("%X", 255);`      |
| `%o`      | Octal                    | `printf("%o", 10);`       |
| `%p`      | Pointer address          | `printf("%p", ptr);`      |
| `%%`      | Literal `%`              | `printf("%%");`           |

---

## Examples

### 1. Displaying integers and floats

```c
#include <stdio.h>

int main() {
    int age = 25;
    float pi = 3.14159;

    printf("Age: %d\n", age);
    printf("Value of pi: %.2f\n", pi); // only two decimal places

    return 0;
}
```

**Output:**

```
Age: 25
Value of pi: 3.14
```

---

### 2. Displaying characters and strings

```c
#include <stdio.h>

int main() {
    char grade = 'A';
    char name[] = "Alice";

    printf("Name: %s\n", name);
    printf("Grade: %c\n", grade);

    return 0;
}
```

**Output:**

```
Name: Alice
Grade: A
```

---

### 3. Displaying hexadecimal, octal and pointers

```c
#include <stdio.h>

int main() {
    int number = 255;
    int *ptr = &number;

    printf("Decimal: %d\n", number);
    printf("Hexadecimal: %x\n", number);
    printf("Octal: %o\n", number);
    printf("Pointer address: %p\n", (void*)ptr);

    return 0;
}
```

**Output:**

```
Decimal: 255
Hexadecimal: ff
Octal: 377
Pointer address: 0x7ffeefbff58c (will vary)
```

---

## Format Specifiers in `scanf()`

In `scanf()`, format specifiers indicate the expected type of input.

| Specifier | Meaning         |
| --------- | --------------- |
| `%d`      | Read an `int`   |
| `%f`      | Read a `float`  |
| `%lf`     | Read a `double` |
| `%c`      | Read a `char`   |
| `%s`      | Read a `string` |

### Example:

```c
#include <stdio.h>

int main() {
    int age;
    float gpa;
    char name[50];

    printf("Enter your name, age and GPA: ");
    scanf("%s %d %f", name, &age, &gpa);

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("GPA: %.2f\n", gpa);

    return 0;
}
```

**Input:**

```
Alice 20 3.8
```

**Output:**

```
Name: Alice
Age: 20
GPA: 3.80
```

---