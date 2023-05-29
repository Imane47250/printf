**[https://www.alxafrica.com](https://intranet.alxswe.com/projects/228#task-970)** **0x11. C - printf**
================

-   By Julien Barbier, co-founder & CEO
-   Contributors to this project, Imane Elaceri && Fatimazahralachkar 
-   ©This project uploaded by : [Enamiimane
](https://github.com/Imane47250) , [Lachkar](https://github.com/Fatimazahralachkar)
-   Porject was studied before working on it through alxafrica [link project](https://intranet.alxswe.com/projects/228#task-970)
-   My email and email my partner for more details or help 
```
fatima6lachkar@gmail.com
elaceriimane@gmail.com
``` 
-   Our Instagram account [𝓢𝓐𝓦𝓢𝓐𝓝](https://www.instagram.com/imane_elaceri/) , [𝓥𝓐𝓝𝓔𝓢𝓢𝓐](https://www.instagram.com/fatimaezzahra_lachkar/)

Background Context 
------------------
Animation published by Enamiimane


![](https://media.tenor.com/_Eng0LkAtioAAAAC/anime-girl.gif)

*^ “picture”, by [𝓢𝓪𝔀𝓼𝓪𝓷](https://www.instagram.com/imane_elaceri/")* 
================

**Concepts**

For this project, we expect you to look at these concepts:

-   [Group Projects](https://intranet.alxswe.com/concepts/111 "Group Projects")
-   [Pair Programming - How To](https://intranet.alxswe.com/concepts/121 "Pair Programming - How To")
-   [Flowcharts](https://intranet.alxswe.com/concepts/130 "Flowcharts")
-   [Technical Writing](https://intranet.alxswe.com/concepts/225 "Technical Writing")

Background Context #1
------------------

![](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/228/printf.png)

*^ In this picture, [Kris](https://intranet.alxswe.com/rltoken/X_vDffLlUpbtqnubfnQx8Q "Kris")*, and [Jul](https://intranet.alxswe.com/rltoken/X_vDffLlUpbtqnubfnQx8Q "Jul")*

Resources
---------

**Read or watch**:

-   [Secrets of printf](https://intranet.alxswe.com/rltoken/7Vw7aUWgwC7JYUrqI4bh4Q "Secrets of printf")
-   *Group Projects* concept page (Don’t forget to read this)
-   *Flowcharts* concept page

**man or help**:

-    printf (3)

------------

**Requirements**

### General

-   Allowed editors: vi, vim, emacs
-   All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
-   All your files should end with a new line
-   A README.md file, at the root of the folder of the project is mandatory
-   Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
-   You are not allowed to use global variables
-   No more than 5 functions per file
-   In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
-   The prototypes of all your functions should be included in your header file called main.h
-   Don’t forget to push your header file
-   All your header files should be include guarded
-   Note that we will not provide the _putchar function for this project

### GitHub

*There should be one project repository per group. The other members do not fork or clone the project to ensure only one of the team has the repository in their github account otherwise you risk scoring 0%*

### More Info

**Authorized functions and macros**

-   write (man 2 write)
-   malloc (man 3 malloc)
-   free (man 3 free)
-   va_start (man 3 va_start)
-   va_end (man 3 va_end)
-   va_copy (man 3 va_copy)
-   va_arg (man 3 va_arg)

### Compilation

-   Your code will be compiled this way:

```
/**
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
``` 
-   As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)
-   Our main files will include your main header file (main.h): #include main.h
-   You might want to look at the gcc flag -Wno-format when testing with your _printf and the standard printf. Example of test file that you could use:
```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
alex@ubuntu:~/c/printf$ ./printf
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
alex@ubuntu:~/c/printf$
``` 
-   We strongly encourage you to work all together on a set of tests
-   If the task does not specify what to do with an edge case, do the same as printf

**Copyright - Plagiarism**

-   You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
-   You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
-   You are not allowed to publish any content of this project.
-   Any form of plagiarism is strictly forbidden and will result in removal from the program.

**This work is authored by :**
-   [Imane Elaceri](https://www.instagram.com/imane_elaceri/)
-   [Fatimazahralachkar](https://www.instagram.com/fatimaezzahra_lachkar/)
