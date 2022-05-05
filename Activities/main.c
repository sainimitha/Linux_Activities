#include <stdio.h> 
#include <string.h> 
#include <stdint.h>

int  main()
{
    char name[100];
    printf("Enter any name :\n");
    scanf("%s",name);
    char *mychar = name;
    int l=strlen(mychar);
    ADD(l,mychar);
    return 0;
}