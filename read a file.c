#include"stdio.h"
int main()
{
    FILE* a;
    FILE* out;

    a=fopen("in2.txt","r");
    if(a==NULL)
    {
        printf("no file found\n");
        return 0;
    }
    out=fopen("out1.txt","w");
    while(1)
    {
        char ch=fgetc(a);
        if(ch==EOF)
            break;
        fputc(ch,out);
    }
    return 0;
}
