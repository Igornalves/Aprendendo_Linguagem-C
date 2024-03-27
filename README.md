# C Language Learning Project

In this Repository I will be using libraries and I will also be learning programming logic and the basic part of the C language using it in embedded programming projects:

<div align="center" style="display: inline_block">
<img alt="java" width="120" src="https://raw.githubusercontent.com/devicons/devicon/master/icons/c/c-original.svg">
</div>

## Concept of Libraries in Programming Language

<div align="center" style="display: inline_block">
<img alt="java" width="120" src="./icons/biblioteeeca.png">
</div>

Every programming language by default uses a set of pre-compiled codes that provide specific functionality for programmers.

They are developed by other people or the programming community itself to facilitate software development, allowing developers to reuse already written code instead of writing everything from scratch.

### Code Reuse:

- Libraries provide a set of functions, classes, data structures or other resources that can be used in different programs.

- This means developers can leverage the work of other programmers, saving time and effort.

### Abstraction:

- Libraries provide a layer of abstraction over the underlying code.

- This means that developers can use the functionality provided by the library without having to understand all the implementation details.

### Encapsulation:

- Libraries often encapsulate related functionality in separate modules, which promotes modularity and helps keep code organized and manageable.

### Documentation:

- Good libraries usually come with detailed documentation that describes how to use their functions or classes, what parameters are required, and what each function returns.

- This helps developers understand how to use the library correctly.

### Resource Savings:

- By using libraries, developers can save hardware resources and development time, as they do not need to reinvent the wheel when implementing common functionalities.

### Overall, libraries play a fundamental role in modern software development, facilitating code reuse, promoting efficiency, and allowing developers to focus their efforts on the unique, specific parts of their projects.


## Explanation of the Main Libraries most used in the repository

<br>
<div align="center" style="display: inline_block">
<img alt="java" width="120" src="https://raw.githubusercontent.com/devicons/devicon/master/icons/c/c-line.svg">
</div>

### <stdio.h>

- This library provides functions for data input and output.

- It includes functions such as printf() to print data to standard output, scanf() to read data from standard input, and several other functions for file operations such as fopen(), fclose(), fread(), fwrite() , etc.

Here is a simple example of using the <stdio.h> library in C for data input and output:

```c
#include <stdio.h>

int main() {
     int age;
     char name[50];

     // Prompts the user to enter their name
     printf("Enter your name: ");
     scanf("%s", name);

     // Prompts the user to enter their age
     printf("Enter your age: ");
     scanf("%d", &age);

     // Display a greeting message with the given name and age
     printf("Hello, %s! You are %d years old.\n", name, age);

     return 0;
}
```


### <stdlib.h>

- The standard library provides functions for memory allocation (malloc(), calloc(), realloc(), free()), process control (exit(), system()),

- generation of random numbers (rand(), srand()), conversion of string to numbers (atoi(), atof()) and other useful functions.

Here is a simple example of using the <stdlib.h> library in C to generate random numbers:

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
     // Defines the seed for the rand() function
     srand(time(NULL));

     // Generates and displays 5 random numbers between 0 and 99
     printf("Random numbers:\n");
     for (int i = 0; i < 5; i++) {
         printf("%d\n", rand() % 100);
     }

     return 0;
}
```

### <math.h>

- this library provides mathematical functions for common operations such as trigonometry (sin(), cos(), tan()), exponentiation (exp(), log()),

- rounding (ceil(), floor()), square root (sqrt()), as well as mathematical constants such as π and e.

Here is a simple example of using the <math.h> library in C to calculate the square root of a number:

```c
#include <stdio.h>
#include <math.h>

int main() {
     double num = 25.0;
     double root;

     // Calculate the square root of num
     root = sqrt(num);

     printf("The square root of %.2f is %.2f\n", num, root);

     return 0;
}
```

### <string.h>

- The string library provides functions for manipulating strings in C.

- This includes p functions