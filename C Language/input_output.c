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


/*

## 🔤 Escape Sequences in C

| Escape Sequence | Meaning            |
|----------------|--------------------|
| `\n`           | New line           |
| `\t`           | Tab space          |
| `\b`           | Backspace          |
| `\r`           | Carriage return    |
| `\f`           | Form feed          |
| `\\`           | Print backslash \  |
| `\"`           | Print double quote |
| `\'`           | Print single quote |

*/


// Write a program to print the value of a variable
#include<Stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int num=12;
    printf("%d",num);
    return 0;
}


/*

## 🔢 Format Specifiers in C

| Specifier | Data Type |
|-----------|-----------|
| `%d`      | int       |
| `%c`      | char      |
| `%f`      | float     |
| `%lf`     | double    |

*/


#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    char a='A';
    float k=4.5;
    printf("%c\n",a);
    printf("%.2f",k);
    return 0;
}



/*

Write printf statements to print the following on the screen.

Consider:
int a = 5, b = 6;

1) 5 6
2) a = 5 and b = 6
3) a = 6 & b = 5
4) value of a is 5 and value of b is 6
5) sum of 5 and 6 is 11
6) 5 + 6 = 11

*/


#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int num1=5;
    int num2=6;
    printf("%d ",num1);
    printf("%d\n",num2);
    printf("a = %d and b= %d\n",num1,num2);
    printf("a = %d & b = %d\n",num2,num1);
    printf("Value of a is %d and value of b is %d\n",num1,num2);
    printf("Sum of %d and %d is %d\n",num1,num2,num1+num2);
    printf("%d + %d = %d",num1,num2,num1+num2);
    return 0;
}



/*

## ⌨️ scanf() in C

- 🔹 `scanf()` is a **predefined function**
- 🔹 Used to **take input from user**
- 🔹 `&` is used to pass the **address of variable**

### Example:

```c
scanf("%d", &a);

*/


//Write a program to calculate sum of two integers
#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int num1,num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    printf("Sum is %d",num1+num2);
    return 0;
}