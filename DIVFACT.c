/*Spoj Problem DIVFACT
 created - 6/4/2015*/
#include<stdio.h>
#define mod 1000000007
#define max 50002
int seive[max],a[max];
int main(){
    long long int n,i,j,ans,t,mul,h,ind;
     for(i=2;i<=50001;i++)  //Making seive till  5e4
      a[i]=1;
    for(i=2;i*i<=50001;i++)
       {
                              if(a[i]==1)
                              {
                              for(j=i*i;j<=50001;j+=i)           
                                   a[j]=0;      
                              }
       }
       ind=1;
       for(i=2;i<=1001;i++)
        if(a[i])
          seive[ind++]=i;
    scanf("%lld",&t);
    while(t--)
    {
    scanf("%lld",&n);
    ans=1;
       for(i=1;seive[i]<=n;i++)  //count all the prime divisors individualy
       {
        mul=1; j=seive[i];                       
           while(n/j>0)
           {
           mul+=n/j;            
           j*=seive[i];            
           }
           ans=(ans*mul)%mod;                    
       }    
     printf("%lld\n",ans);       
    }//end of while
return 0;    
}//end of program
