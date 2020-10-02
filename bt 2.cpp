#include<stdio.h>
#include<string.h>
char timvitri(char s1[100], char s2[100])
{
            char *str= strstr(s1, s2);
            puts(str);
}
int main()
{
            char s1[100], s2[100];
            printf("nhap chuoi s1\n");
            gets(s1);
           printf("nhap chuoi s2\n");
            gets(s2);
            timvitri(s1, s2);           
           return 0;
}
