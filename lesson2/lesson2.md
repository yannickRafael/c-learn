# Lesson 2: Variables

## What is a Variable?

A **variable** is a reusable container for values.
It behaves as if it *were* the value it contains.
A variable has a **type**, which tells what kind of value it can store (like numbers or text).

---

## Creating Variables

To create a variable in C, you write the **type**, followed by the **variable name**, and optionally assign a **value**:

```c
int age = 25;  // declare an integer variable with a value
float height;  // declare a float variable without assigning a value yet
```

### Printing Variables in C

To print a variable, use `printf()` with **format specifiers**:

* `%d` for `int`
* `%f` for `float`
* `%.2f` for a float with 2 decimal places
* `%lf` for `double`
* `%c` for `char`

Example:

```c
printf("My age is %d", age);
```

If printing multiple variables:

```c
printf("I am %d years old and %.1f meters tall", age, height);
```

---

## C Data Types

### Integers (`int`)

Stores whole numbers like `1`, `42`, or `-5`.

* **Format specifier**: `%d`

Example:

```c
#include <stdio.h>

int main() {
    int age = 25;
    printf("My age is %d", age);  // Corrected: %d, not %age
    return 0;
}
```

Note: If you assign a decimal to an `int`, the decimal part is **truncated** (not rounded).

---

### Float (`float`)

Stores decimal numbers with about 6 digits of precision.

* **Format specifier**: `%f`
* Use `%.1f`, `%.2f`, etc., to limit decimal places

Corrected Example:

```c
#include <stdio.h>

int main() {
    float height = 182.5;
    printf("My height is %.1f centimeters", height);  // Correct: %.1f and semicolon added

    float weight = 75.0;
    printf("\nMy weight is %.3f kilograms", weight);  // %.3f = 3 decimal places

    float temperature = -101.67;
    printf("\nIt's freezing here. It's %.2f degrees Celsius", temperature);

    return 0;
}
```

---

### Double (`double`)

Like `float`, but with more precision (15–17 digits).

* **Format specifier**: `%lf`

Corrected Example:

```c
#include <stdio.h>

int main() {
    double height = 182.5;
    printf("My height is %.1lf centimeters", height);  // Use %lf for double

    double weight = 75.0;
    printf("\nMy weight is %.3lf kilograms", weight);

    double temperature = -101.67;
    printf("\nIt's freezing here. It's %.2lf degrees Celsius", temperature);

    return 0;
}
```


## Character (`char`)

The `char` type is used to store a **single character** such as a letter, digit, or symbol.

* **Example values**: `'a'`, `'Z'`, `'5'`, `'!'`
* Characters are written **inside single quotes**: `'A'`, not `"A"`
* **Format specifier**: `%c`

### Example:

```c
#include <stdio.h>

int main() {
    char grade = 'A';
    printf("My grade is %c", grade);  // Output: My grade is A

    char initial = 'J';
    printf("\nMy name starts with %c", initial);  // Output: My name starts with J

    return 0;
}
```