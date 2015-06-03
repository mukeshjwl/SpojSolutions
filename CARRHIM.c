/*SPOJ PROBLEM- CARRHIM
  created - 6/4/2015*/
#include<stdio.h>
int main(){
    int i,j,t,n,w,b,r,r1,r2,tm1,tm2;
    char ch[2];
     scanf("%s",ch); 
    while(1)
    {          
             if(ch[0]!='#')
                         {
                                    tm1=0;
                                    tm2=0;
                                    r1=0;
                                    r2=0;
                                    scanf("%d %d %d",&w,&b,&r);
                          if(ch[0]=='A' || ch[0]=='C')       //When white pawns are counted for team1
                                    {     tm1+=w;
                                          tm2+=b;
                                          r1+=r;
                                                    scanf("%s",ch);
                                                     while(ch[0]!='#')
                                                   {
                                                      scanf("%d %d %d",&w,&b,&r);
                                                           if(ch[0]=='A' || ch[0]=='C')
                                                            {
                                                                         tm1+=w;
                                                                         tm2+=b;
                                                                         r1+=r;
                                                            }
                                                            else
                                                            {
                                                                tm2+=b;
                                                                tm1+=w; 
                                                                r2+=r;
                                                            }
                                                      scanf("%s",ch);           
                                                   }
                                   }
                          else                               //When white pawns are counted for team2
                                    {                               
                                                                     tm2+=w;
                                                                     tm1+=b;
                                                                     r2+=r;
                                        
                                                                     scanf("%s",ch);
                                                                     while(ch[0]!='#')
                                                                   {
                                                                      scanf("%d%d%d",&w,&b,&r);
                                                                           if(ch[0]=='A' || ch[0]=='C')
                                                                            {
                                                                                        tm1+=b;
                                                                                        tm2+=w;
                                                                                        r1+=r;
                                                                            }
                                                                            else
                                                                            {
                                                                                        tm2+=w;
                                                                                        tm1+=b;
                                                                                        r2+=r;
                                                                            }
                                                                    scanf("%s",ch);          
                                                                   }
                                    }                   
               if(tm1>=9 && (r1!=0 || r2!=0))
                  printf("Team-1 win and the point is %d.\n",((9-tm2)+r1*5));
               else if(tm2>=9 && (r1!=0 || r2!=0))
                  printf("Team-2 win and the point is %d.\n",((9-tm1)+r2*5));
               else
                  printf("Incomplete game.\n");
               }//end of if
                       if(scanf("%s",ch)==1)
                          continue;
                       else
                          break;  //Breaking the while loop when EOF occurs
    }//end of while
return 0;
}//end of program
