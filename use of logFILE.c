#include"stdio.h"
int main()
{
    FILE* x;
    x=fopen("out1.txt","a");
    fprintf(x,"hello1\n");
    return 0;
}
