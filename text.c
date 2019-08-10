#include <stdio.h>
int main()
{
    int p, d, fp=0,dp;
    scanf("%d %d",&p,&d);
    f=p;
    while(p>9){
        dp =(p*d)/100;
        fp = (fp) + (p - dp);
        p = p - dp;
    }
    printf("%d",fp);
    return 0;
}
