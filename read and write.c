#include<stdio.h>
int main()
{
    FILE* inputfile;
    inputfile=fopen("in1.txt","r");
    while(1)
    {
        char ch=fgetc(inputfile);
        if(ch==EOF)break;
        printf("%c",ch);
    }
    return 0;
}
