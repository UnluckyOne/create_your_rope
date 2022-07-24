//
//  main.c
//  Pluse_Minus
//
//  Created by Yanzhe on 2022/7/21.
//

#include <stdio.h>

int main() {
    int num1;
    printf("Please imput the lenght of your rope in a whole number!!\n");
    printf("For example: 19\n");
    scanf("%d", &num1);
    printf("+");
    for (int i=0; i<=num1;i=i+1)
    {
        printf("-");
    }
    printf("+\n");
    return 0;
}
