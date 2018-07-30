#include<stdio.h>
#include<string.h>

int login();

int main()
{
A:
    if(!login())
    {
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\tWrong Information. Press Enter To Enter Login Page......\n");
        getchar();
        system("cls");
        goto A;
    }
    else printf("starting Program....");
    return 0;
}

int login()
{
    int c, r=0, lenung=0, lenpwg=0;
    char ung[999], pwg[999];
    int un[]={20,9,2,11,6,5,22,19,19,2,9,14,2,15,17,2,15,15,2,-49,17,2,15,15,2,-31,8,14,2,10,13,-49,4,16,14};
    int pw[]={96,86,84,91,98,93,30,31,32};

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\tEnter User Name: ");
    gets(ung);
    system("cls");
    if(strlen(ung)==35) lenung=1;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\tEnter Password: ");
    gets(pwg);
    system("cls");
    if(strlen(pwg)==9) lenpwg=1;

    if(lenung==1 && lenpwg==1)
    {
        for(c=0; c<35; c++)
        {
            if(ung[c]!=un[c]+95)
                return 0;
            else r=1;
        }
        for(c=0; c<9; c++)
        {
            if(pwg[c]!=pw[c]+19)
                return 0;
            else r=1;
        }
        return r;
    }
    else return 0;
}
