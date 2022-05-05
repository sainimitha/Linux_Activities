/**
 * @file Ascii.h
 * @author Sainimitha
 * @brief 
 * @version 0.1
 * @date 2022-05-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "Ascii.h"

int  main()
{
    char name[100];
    printf("Enter any name :\n");
    scanf("%s",name);
    char *mychar = name;
    int l=strlen(mychar);
    SUM(l,mychar);
    return 0;
}