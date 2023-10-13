#include <stdio.h>
 
int main() {
char i,ans;
scanf("%c",&i);
if (i>=97 && i<=121)
{     ans=i+1;
    printf("%c",ans);
}
else if (i<=122)
{
    ans=i-25;
    printf("%c",ans);
}
 return 0;
}

