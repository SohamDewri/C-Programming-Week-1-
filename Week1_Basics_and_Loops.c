/*
=========================================================
           WEEK 1 - BASICS & LOOPS
=========================================================

Topics Covered:
1. Syntax, Variables, Data Types
2. Input/Output
3. Operators
4. If-Else
5. Loops (for, while, do-while)
6. Switch Case

Assignments:
1. Print Hello World
2. Find Sum of Two Numbers
3. Check Even or Odd
4. Print Fibonacci Series

Mini Project:
Simple Calculator using Switch Case

=========================================================
*/

#include <stdio.h>

int main()
{
    //=====================================================
    // Assignment 1: Print Hello World
    // Topics: Syntax, Variables, Input/Output
    //=====================================================

    printf("\n========== Assignment 1 ==========\n");
    printf("Hello World.\n");


    //=====================================================
    // Assignment 2: Find Sum of Two Numbers
    // Topics: Variables, Data Types, Input/Output, Operators
    //=====================================================

    printf("\n========== Assignment 2 ==========\n");

    int num1, num2, sum;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Sum = %d\n", sum);


    //=====================================================
    // Assignment 3: Check Even or Odd
    // Topics: If-Else, Operators
    //=====================================================

    printf("\n========== Assignment 3 ==========\n");

    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(number % 2 == 0)
    {
        printf("%d is Even.\n", number);
    }
    else
    {
        printf("%d is Odd.\n", number);
    }


    //=====================================================
    // Assignment 4: Fibonacci Series
    // Topics: Loops (for loop)
    //=====================================================

    printf("\n========== Assignment 4 ==========\n");

    int n, first = 0, second = 1, next;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");

    for(int i = 1; i <= n; i++)
    {
        printf("%d ", first);

        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");


    //=====================================================
    // Mini Project: Simple Calculator
    // Topics: Switch Case
    //=====================================================

    printf("\n========== Mini Project ==========\n");

    int a, b;
    char op;

    printf("Enter expression (Example: 10 + 5): ");
    scanf("%d %c %d", &a, &op, &b);

    switch(op)
    {
        case '+':
            printf("Result = %d\n", a + b);
            break;

        case '-':
            printf("Result = %d\n", a - b);
            break;

        case '*':
            printf("Result = %d\n", a * b);
            break;

        case '/':
            if(b != 0)
                printf("Result = %.2f\n", (float)a / b);
            else
                printf("Division by zero is not allowed.\n");
            break;

        case '%':
            if(b != 0)
                printf("Result = %d\n", a % b);
            else
                printf("Division by zero is not allowed.\n");
            break;

        default:
            printf("Invalid Operator.\n");
    }

    return 0;
}
