//
// Created by Sakura on 2020/10/28.
//

#include <stdio.h>

int main(void){
    char c;
    printf("�����ַ�:");
    while ((c = getchar()) != '\n')
    {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            c = c + 4;
            if (c >= 'Z' && c <= 'Z' + 4 || c > 'z')                    // c+4 ���ܻ����'Z'
            {
                c = c -26;
            }
        }
        printf("%c",c);
    }
    printf("\n");
}