---
title: "mem1"
date: 2024-07-18
categories:
---

```c

#include <cs50.h>
#include<stdio.h>

int main(void)
{
    int n = 10;
    int * ptr = &n; // int pointer ptr = ADDRESS_of(n)
    printf("%i\n", *ptr); //ptr ------ ACTUAL_VALUE(ptr)
    return 0;

}

```