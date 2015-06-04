/*Spoj problem - SUM OF PRODUCT
created-6/4/2015*/
#include<stdio.h>
#define mod 1000000007
int main(){
    long long int i,j,n,t,ans,h,first,last;
    scanf("%lld",&t);
    while(t--){
               scanf("%lld",&n);           
               ans=0;
               for(i=1;i*i<=(n);i++)
               {  if(i==n/i)
                  ans=(ans+i*(n/i))%mod;
                  else 
                  {
                  ans=(ans+i*(n/i))%mod;                  
                  first=n/(i+1)+1;
                  last=n/i;
                  ans=(ans+(((last-first+1)*(first+last))/2)%mod*i)%mod;
                  }                
               }
               printf("%lld\n",ans);
       }//end of while
return 0;    
}//end of program
