# Lesson 21: Writing to Files in C

---

## What is File I/O?

> File I/O (Input/Output) in C means reading from or writing to files using the **standard file-handling functions** provided by the `stdio.h` library.

---

## Step-by-Step: Writing to a File

### 1. Include the header

```c
#include <stdio.h>
```

---

### 2. Use `fopen()` to open or create a file

```c
FILE *file = fopen("output.txt", "w");
```

| Mode  | Meaning                                   |
| ----- | ----------------------------------------- |
| `"w"` | Write. Creates file or overwrites it.     |
| `"a"` | Append. Writes at the end if file exists. |
| `"r"` | Read only (fails if file doesn't exist)   |

---

### 3. Use `fprintf()` or `fputs()` to write
**fputs()** only accepts plain strings, therefore, no format specifier is needed
```c
fprintf(file, "Hello, World!\n");
fputs("Another line\n", file);
```

---

### 4. Close the file using `fclose()`

```c
fclose(file);
```

> Always close files to ensure data is saved properly.

---

## Full Example: Write Name and Age

```c
#include <stdio.h>

int main() {
    FILE *file = fopen("info.txt", "w");  // open file for writing

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    char name[50];
    int age;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    // Remove newline from name
    name[strcspn(name, "\n")] = '\0';

    fprintf(file, "Name: %s\n", name);
    fprintf(file, "Age: %d\n", age);

    fclose(file);
    printf("Data saved to info.txt\n");

    return 0;
}
```

---

## Common Mistakes

| Mistake                           | Why It’s Wrong                           |
| --------------------------------- | ---------------------------------------- |
| Not checking if `fopen()` failed  | Can cause crashes or undefined behavior  |
| Forgetting to `fclose()`          | May result in incomplete or lost data    |
| Using wrong mode (`"r"` to write) | `"r"` is for reading, use `"w"` or `"a"` |
