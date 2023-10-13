#include<stdio.h>
int main()
{
   long long eye,mouth,body;
   scanf("%lld %lld %lld",&eye,&mouth,&body);
   long long int count = 0;

   if(eye <= mouth && eye <= body)
   {
    printf("%lld",eye);
   }
   else if(mouth <= eye && mouth <= body)
{
   count = mouth;
   eye = eye - mouth;
   body = body - mouth;
   if((eye / 2) <= body)
   {
    count = count + (eye / 2);
    printf("%lld",count);
   }
   else if((eye / 2) >= body)
   {
    printf("%lld",count);
   }
}
else if(body <= eye && body <= mouth)
printf("%lld",body);
   return 0;
}