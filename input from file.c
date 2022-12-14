#include"stdio.h"
int main()
{
    int n;
    int a,sum=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a);
        sum=sum+a;
    }
    printf("\n%d\n",sum);
    return 0;
}
