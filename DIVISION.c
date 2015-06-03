/*Spoj Problem - DIVISION
  created-6/4/2015*/ 
#include<stdio.h>
#define mod 1000000007
long long int  power(long long int  a,long long int  n)
{
    long long int  power = a;
    long long int  result = 1;
    while (n)
    {
        if (n & 1)
            result = (result * power);
            if(result>=mod)
            result %= mod;
        power = (power * power);
        if(power>=mod)
        power %= mod;
        n >>= 1;
    }
    return result;
}
int main(){
    long long int i,n,j,t,ans;
     j=power(3,mod-2);
    while(scanf("%lld",&n)==1)
    {                    
           if(n&1)
           ans=((power(2,n)-2+mod)*j+1)%mod;
           else
           ans=((power(2,n)-1+mod)*j+1)%mod;
           printf("%lld\n",ans);           
    }//end of file
return 0;    
}//end of program
