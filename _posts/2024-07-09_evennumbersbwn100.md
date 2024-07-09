---
title: "evennumbers bwn 100"
date: 2024-07-0
categories:
---
```c

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int counter;
    printf("Even numbers between 1 to 100\n");

    for (counter = 1; counter<=100; counter++)
    {
        if(counter%2 == 0)
        {
            printf("%d ", counter);
        }
    }
    return 0;
}

````