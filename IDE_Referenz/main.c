/*
 * main.c
 *
 *  Created on: 01.02.2017
 *      Author: bam
 */


#include <stdio.h>
int main()
{
int num, count, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // for loop terminates when n is less than count
    for(count = 1; count <= num; ++count)
    {
        sum += count;
    }

    printf("Sum = %d", sum);
    printf("Just to show a difference for GIT Test");

    return 0;
}
