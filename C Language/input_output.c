/*

## 📘 About C Language

- ✅ C is a **block structured programming language**
- ✅ A C program can have **any number of blocks**
- ✅ Usually, **outermost blocks are functions**
- ✅ A function has a **name for identification**
- ✅ Even the smallest C program has **one function**
- ✅ All function names must be **unique**
- ✅ If there is only one function, its name must be `main()`
- ✅ If there are multiple functions, **one must be `main()`**
- ✅ You can write **declaration statements** inside a function or outside all functions  
- ✅ Difference between **Local variables** and **Global variables**  
- ✅ **Action statements** can exist only inside functions  
- ✅ C is a **case-sensitive language**

```c
int a;   // lowercase variable
A = 5;   // ❌ error (uppercase is different variable)

*/


/*
# Output Instruction

**`printf()` → predefined function**

- `printf()` is used to print some text on the monitor.

```c
printf("Hello");

** You can call a function any number of times.
** But can define only once.
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    printf("Welcome");
    return 0;
}

//To compile with particular version of compiler usse below code
// gcc -std=c11 -o filename filename.c




/*
Write a program to print "welcome students" on the screen.
Print "welcome" on the first line and "students" on the second line.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    printf("Welcome\nStudents");
    return 0;
}


