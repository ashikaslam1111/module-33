#include"stdio.h"
int main()
{
    int n;
    FILE* a;
    FILE* b;
    a=fopen("in1.txt","r");
    if(a==NULL)return 0;
    b=fopen("out1.txt","w");
    fscanf(a,"%d",&n);
    int x=n*2;
    fprintf(b,"%d",x);
    fclose(a);
    fclose(b);
    return 0;
}
