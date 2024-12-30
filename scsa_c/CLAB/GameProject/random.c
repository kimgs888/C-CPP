#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main11()
{
    int i = 0;
    srand(time(NULL));
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", rand());
    }
}