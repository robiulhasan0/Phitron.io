#include <stdio.h>
int main() 
{
    int i;
    scanf("%d", &i);
    int x=i%10;
    int y=i/10;
    if((y!=0 && x%y==0) || (x!=0 && y/x==0))
    {
        printf("YES\n");
    }
    else 
    {
        printf("NO\n");
    }
    return 0;
}