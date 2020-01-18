#include<stdio.h>

#include<conio.h>

#include<string.h>

int main()

{

    int a,cap = 0,num = 0,spec = 0;

    char pwd[20];

    sanrush:

    printf("Enter the username");

    gets(pwd);

    for(a=0;a<=strlen(pwd);a++)

    {

    if(pwd[a]>=65 && pwd[a]<=90)

    {

        cap++;

    }

    else if(pwd[a]>=48 && pwd[a]<=57)

    {

        num++;

    }

    else if(pwd[a]>=33 && pwd[a]<=47 || pwd[a]>=58 && pwd[a]<=64 || pwd[a]>=123 && pwd[a]<=126)

    {

        spec++;

    }

    }

    if(cap ==0)

    {

        printf("Plz enter the capital charachter\n");

    }

    if(num == 0)

    {

        printf("Plz enter the atlest one number\n");

    }

    if(spec == 0)

    {

        printf("plz enter the atlest one special\n");

    }

    if(cap==0 && num == 0 && spec == 0)

    {

        printf("Plz Enter valid passowrd");

    }

    if(cap==0 || num == 0 || spec == 0)

    goto sanrush;

    
return 0;

}