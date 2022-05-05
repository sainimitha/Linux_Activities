/**
 * @file Ascii.c
 * @author Sainimitha
 * @brief 
 * @version 0.1
 * @date 2022-05-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h> 
#include <string.h> 
#include <stdint.h>
#include "Ascii.h"

void SUM(int l, char *mychar)
{   
    char* name = mychar;
     int add=0;
    int Val[l];
    printf("\nThe ASCII value of the Characters\n");
    for(int i=0; i<l; i++)
    {   
        printf("%c = %X\n",name [i], name [i]);
        Val[i]=(int)*(mychar+1);
        add =+ Val[i];
    }
    printf("\nSum of all Characters: %d\n",add);
}


