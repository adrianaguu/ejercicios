#include <stdio.h>
#include <stdlib.h>

char convert (char *c)
{
    if (*c<='Z'&&*c>='A')
        return *c -'A'+'a';
    else
        return *c;
}
void strcat(char *s,char *t)
{
    while(*s!='\0')
        s++;

    while((*s++=*t++)!='\0')
    ;
}

int mylen (char *s)
{
    int i=0;
    while (*s!='\0')
    {
        s++;
        ++i;
    }
    if (*s=='\0')
        ++i;
    return i;
}

int strend(char *s,char *t)
{
    int len;
    len=mylen(t);
    while(*s!='\0')
        ++s;
    while(*t!='\0')
        ++t;
    while(len > 0)
    {
        if(*t==*s)
        {
            --t;
            --s;
            --len;
        }
        else
            return 0;
    }
    if( len == 0)
        return 1;
}

void strncat (char *s, char *t, int n)
{
    while (*s!='\0')
    {
        s++;
    }
    while ( n-->0)
        *s++=*t++;
    *s='\0';

}

void strncopy (char*to,char *from,int n)
{

    while(*from && n-->0)
    {
        *to++=*from++;
    }

    *to='\0';
}

int strncmp (char *s,char *t , int n)
{
    for(; *s == *t; s++,t++)
        if( *s == '\0' || --n <=0)
            return 0;
    return *s - *t;
}

int main()
{
    char test[15];
    char s[15] = {'a','s', 'd','a','r','\0'};
    char t[15] = {'1','2','3','.','4','5','e','-','6','\0'};
    strcat(s,t);
    printf("%d \n",strend(s,t));

    char c='B';
    char *q;
    q=&c;
    printf("%c \n",convert(q));

    strncopy(test,t,5);
    strncat(t,s,3);

    printf("%d \n",strncmp(s,t,6));
    printf("%s \n",test);
    printf("%s \n",s);
    printf("%s \n",t);


    return 0;
}
