#include"stdio.h"
int main()
{
    int n,sum=0;
    int arr[10];
    FILE* in;
    FILE* out;
    in=fopen("in1.txt","r");
    out=fopen("out1.txt","w");
    if(in==NULL)
        printf("file not found");
    fscanf(in,"%d",&n);
    for(int i=0; i<n; i++)
    {
        fscanf(in,"%d",&arr[i]);
        sum=sum+arr[i];
    }
    fprintf(out,"%d",sum);
    return 0;
}
