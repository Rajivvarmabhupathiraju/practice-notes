---
title: "sumexplain"
date: 2024-06-29
categories:
---

```
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number1;
    int number2;
    int sum;

    number1 = get_int("Enter the first number: ");
    number2 = get_int("Enter the second number: ");
    sum = number1 + number2;

    printf("The sum of %i, %i is %i/n", number1, number2, sum);
}

````