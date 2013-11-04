# C Lesson 1
Date: 7/11/13 
Duration: 1.5 Hours 

## Goals/Objectives: 
1. Download Tool 
2. Get familiar with C
3. Learn commenting, variables, and commands. 

## Ice Breakers + Introduction
- Teachers introduce themselves
- Students introduce themselves 

Q. How many software engineers does it take to replace a lightbulb?
A. 0, that’s a hardware problem.

## Terminology / Computers:
- A program in simplest terms is a set of instructions
- The instructions you write in a program is called source code
- Source code is written in a programming language, such as C, Java, or Python
- There is no best language; each has its own benefits
- To create a program, you can use any text editor, such as TextEdit or Notepad++
- However, you probably want to use an Integrated Development Environment, IDE
    - IDE’s let you edit, compile, run, and test your code in one place
    - Some well known IDE’s are Xcode, Visual Studio, and Code::Blocks
- Your computer only understands 0’s and 1’s, so unless you want to code using 0’s and 1’s, you need a compiler
- A compiler takes the source code you’ve written, and converts it into a language that the computer can understand. This language is known as binary, machine code, executable, or compiled code.


Hello World: [helloworld.c](examples/helloworld.c)


- `#include <stdio.h>`
    - Include the `stdio` library. A library is a file that someone else has written which includes many functions that we can use. The `stdio` library includes the C basic standard input-output declarations. 
- The `#` symbol is a directive for the preprocessor
- `int main()`
    - You don’t need to understand what the `int` means in this context for this lesson
    - Know that `()` signifies that `main` is a function. It also allows you to put parameters into it, but we are not doing so in this program.
    - The main function is the point where all C++ programs begin execution; location does not matter
- `{`
    - The `{` signals the beginning of a function, in this case, the `main` function. Whatever you write inside the curly braces is what the program does.
- `//Hello World Demo`
    - `//` means that the line is a comment line. A comment does not have any effect on the program. Anything you write after the double slash will be ignored.
    - Commenting allows the programmer to include short explanations or comments about a specific line or block of code.
- `printf("Hello World");`
    - `printf` is a function declared in the `stdio` library. The `("Hello World")` means to print the text `Hello World` on the screen;
    - Since `printf` is a statement, we put a semicolon after it.
- `}`
    - `}` is the end of the function. The program quits when it reaches the end curly brace.

- This program can be written in one line.
- `int main(){ printf("Hello World!") };`

- The block comment, `/* */`, allows commenting on multiple lines. An example is shown below.

```c
/* We can comment on
multiple lines */
```

## Variables:
- A byte is a unit of digital information.
- One byte contains 8 bits, and bits can either contain a 0 or a 1.
- Variables store data. You can do operations with them, change their values, and access them many times during the program.
- Variables can hold different types of data, for example, numbers, numbers with decimals, characters, or true/false.
- Variables have to be declared and initialized
- To declare a variable, you must give the type identifier, or the type of information you want to store into the variable, and the name you want to give the variable
    - `"type identifier" "name of variable"`
- Some type identifiers are shown here:
- `int` - integer
- `float` - decimal number
- `double` - bigger float
- `char` - letter
- Here is an example of how to declare a variable:
- `int num;`
- To declare multiple variables, we can do this:
- `int num1, num2, hello, bye;`
- As you can see, the `num` variable doesn’t store anything.
- To store data into the variable, we must initialize the variable.
    - `num = 5;`
- Now, `num` stores the number `5`
- We can combine the two lines of code into one
    - `int num = 5;`
- Another way of writing this is by using a construction initialization
    - `int num (5);`

- You have to read these statements from left to right
    - `x = 5; //x is equal to 5.`
    - `5 = x; //5 is equal to x. What? How can you change a number?`

```c
int x = 5;
x = 10;
```

- At the end of the second line, what is `x` equal to? 
- `x` is equal to `10`. At the beginning, `x` is set to `5`. On the next line, we set `x` equal to `10`.

## Operations
- Applying operations on variables is just like doing math in class.
- Precedence is a rule that is followed in computer science 
- You might know this as order of operations or PEMDAS
- Parenthesis and exponents are done first, then multiplication and division, and lastly addition and subtraction
- 2 x 3 + 5 x 2 is equal to 16, not 22
- Addition: `+`
- Subtraction: `-`
- Multiplication: `*`
- Division: `/`
- Say we want to add `10` to a number, this is how we would do it. Let’s print out the result.

```c
int num = 10;
num = num + 10;
printf("%i",num);
```

- What does it print out?
- Let’s do more operations; continue from the previous lines of code.

```c
num = num*5 + 6 / 7;
printf("%i",num);
```

- Try to do the math, and what do you get?
- I get 100.8571..... Did you get what I got?
- If you didn’t, you’re doing it wrong...
- Actually, you followed the instructions correctly, but didn’t get what you wanted
- Hmm, let’s see how to get the correct answer
- Let’s look at the first line `int num = 10;`
- Looking at just that line, we have already found our problem.
- Remember what int variables hold? Integers, numbers without decimals. That’s why we’re only seeing a number without decimals
- To fix this problem, we’ll just change, 
-  `int num = 10;` to `float num = 10;`
- Now run the program again, and we’ll see the decimal number.

- Let’s try add two variables together

```c
int num1 = 4;
int num2 = 8;
int result = num1 + num2;
printf("%i",result);
```

- What do we get?
- We can modify this program:

```c
int num1 = 4;
int num2 = 8;
printf("%i",num1 + num2);
```

- As you can see, we have printed out the first number plus the second number without needing another variable to hold the result. This poses advantages and disadvantages depending on the situation.
