//
// Created by Sakura on 2020/10/30.
//

#include <stdio.h>


int main(void)
{
    extern void enter_string(char str[]);
    extern void delete_string(char str[],char ch);
    extern void print_string(char str[]);
    char c,str[80];
    printf("ÊäÈë×Ö·û´®:");
    enter_string(str);
    printf("ÊäÈëÒªÉ¾³ıµÄ×Ö·û:");
    scanf("%c",&c);
    delete_string(str,c);
    print_string(str);
}
