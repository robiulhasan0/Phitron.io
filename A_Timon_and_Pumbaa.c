#include <stdio.h>
int main() {
	int a,b,ans;
	scanf ("%d%d",&a,&b);
     ans=a-b;
     if (ans>=0)
	{
	    printf("%d",ans);
	}
else {
    printf("0");
}
	return 0;
}