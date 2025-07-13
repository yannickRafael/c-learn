# Lesson 22: Reading Files in C

---

## Why Read Files?

> Reading from files allows your C programs to load saved data, settings, user information, logs, etc.

This is **File Input (File I/O)** using the `stdio.h` standard library.

---

## Steps to Read from a File

### 1. Include the header

```c
#include <stdio.h>
```

---

### 2. Open the file using `fopen()`

```c
FILE *file = fopen("contacts.txt", "r");
```

| Mode   | Description       |
| ------ | ----------------- |
| `"r"`  | Read (must exist) |
| `"r+"` | Read & write      |

---

### 3. Use reading functions:

| Function   | Purpose                                  |
| ---------- | ---------------------------------------- |
| `fgets()`  | Reads a **line** of text                 |
| `fscanf()` | Reads **formatted** input (like `scanf`) |
| `fgetc()`  | Reads **one character**                  |

---

### 4. Close the file

```c
fclose(file);
```

---

## Example: Read Line by Line

```c
#include <stdio.h>

int main() {
    FILE *file = fopen("contacts.txt", "r");

    if (file == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    char line[100];

    printf("Reading from file:\n");
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
    return 0;
}
```

> `fgets()` stops when it reads a newline `\n`, EOF, or max size.

---

## Example: Read Formatted Data with `fscanf`

```c
#include <stdio.h>

int main() {
    FILE *file = fopen("data.txt", "r");

    if (file == NULL) {
        printf("File not found.\n");
        return 1;
    }

    char name[50];
    int age;

    while (fscanf(file, "Name: %s Age: %d\n", name, &age) == 2) {
        printf("Name: %s | Age: %d\n", name, age);
    }

    fclose(file);
    return 0;
}
```

> `fscanf` is good for structured files but struggles with spaces and variable formats.

---

## Common Mistakes

| Mistake                     | Why It's a Problem                            |
| --------------------------- | --------------------------------------------- |
| Not checking `fopen()`      | Can cause crash if file doesn’t exist         |
| Using wrong mode (`"w"`)    | `"w"` overwrites the file (use `"r"` to read) |
| Not closing with `fclose()` | May cause memory leaks or file locks          |
| Reading into small buffer   | Can cause buffer overflow and crashes         |

