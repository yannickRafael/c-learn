# Lesson 1: Introduction to C Programming

## 📌 What is C?

C is a **general-purpose, procedural programming language** developed in the early 1970s by **Dennis Ritchie** at **Bell Labs**. It has influenced many modern languages like C++, Java, and Python.

C is known for:

* Being **close to hardware** (low-level memory access)
* High **performance**
* Being the **foundation** of many operating systems (including UNIX and Linux)

## 🕰️ Brief History

* **1972**: C was developed as an improvement over B (another early language).
* **1978**: The famous book *"The C Programming Language"* by Brian Kernighan and Dennis Ritchie was published — often called *K\&R C*.
* **1989**: ANSI standardized the language (ANSI C).
* C has since had further updates (C99, C11, C17, C23).

## ⚙️ How C Works

C is a **compiled** language, meaning the code you write must be converted (compiled) into machine code before it runs.

### Basic Flow:

1. **Write** the C code (`.c` file)
2. **Compile** it using a compiler (like `gcc`)
3. **Run** the resulting executable

Example:

```bash
gcc main.c -o main
./main
```

---

## 🧪 My First C Program

```c
#include <stdio.h>

int main(){
    
    printf("Hello, world!");

    // this is a simple line comment

    /*
    this is a multi-line comment
    */

    return 0;
}
```

### Breakdown:

* `#include <stdio.h>`
  Includes the Standard Input Output header file to use `printf`.

* `int main()`
  The entry point of the program. It's where execution starts.

* `printf("Hello, world!");`
  Prints "Hello, world!" to the console.

* `return 0;`
  Returns 0 to indicate the program ended successfully.

* `//` and `/* ... */`
  Represent single-line and multi-line comments.

---

