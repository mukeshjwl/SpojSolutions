/*Spoj Problen-WPC51
created-6/4/2015*/
#include<stdio.h>
#define max 47002// for sqrt of 2^31
long long int  power(long long int  a,long long int  n)
{
    long long int  power = a;
    long long int  result = 1;
    while (n)
    {
        if (n & 1)
            result = (result * power);
        power = (power * power);
        n >>= 1;
    }
    return result;
}
long long int a[max],seive[max],ar1[max],ar2[max];
int main(){
    long long int n,m,i,t,aux,lcm,j,k,ind;
    scanf("%lld",&t);
    while(t--){
               
               for(i=1;i<=max;i++)
                {
                    ar1[i]=0;
                    ar2[i]=0;                  
                }
               scanf("%lld%lld",&n,&m);
               for(i=2;i*i<=n;i++)
              {
                      while(n%i==0)
                   {
                       ar1[i]+=1;
                         n/=i;
                   }
              }
          if(n>1)
          ar1[max]=n;
              for(i=2;i*i<=m;i++)
              {
                      while(m%i==0)
                      {
                      ar2[i]+=1;
                      m/=i;
                      }
              }
               if(m>1)
               ar2[max]=m;
               lcm=1;
               for(i=2;i<=max;i++)
               {
                  if(i==max && ar1[max]!=ar2[max])
                  {
                          if(ar1[max]!=0)
                          {
                          if(ar1[max]<=max)
                                              {
                                              if(ar2[ar1[max]]==0)
                                              lcm*=ar1[max];
                                              }
                          else
                          lcm*=ar1[max];
                          }
                          if(ar2[max]!=0) 
                          {
                                      if(ar2[max]<=max)
                                              {
                                              if(ar1[ar2[max]]==0)
                                              lcm*=ar2[max];
                                              }
                                      else
                                      lcm*=ar2[max];
                          }
                  }          
                  else {
                  if(ar1[i]>ar2[i])
                   {
                    if(ar1[i]>1)
                    lcm*=power(i,ar1[i]);
                    else if(ar2[max]!=i)
                    lcm*=power(i,ar1[i]);
                   }
                  else if(ar1[i]<ar2[i])
                     {
                    if(ar2[i]>1)
                    lcm*=power(i,ar2[i]);
                    else if(ar1[max]!=i)
                    lcm*=power(i,ar2[i]);
                   }                               
               }
           }
               printf("%lld\n",lcm);
               
    }//end of while
return 0;
}//end of program
