//
// Created by Sakura on 2020/10/30.
//

void delete_string(char str[],char ch)
{

    int i,j;
    for (i = j = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ch)
        {
            str[j++] = str[i];              //str[j++] = str[i] 等于 str[j] = str[i]; j++
        }
    }
    str[j] = '\0';                          //将结束符'\o'也赋给str
}
