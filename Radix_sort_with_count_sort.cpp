//RADIX SORT WITH COUNT SORT

#include <iostream>
using namespace std;
int main()
{

   int n,b,num;
   cin>>n;
   int A[n], C[n];
   for(int i=1;i<=n;i++)  
   cin>>A[i];
   for(int j=1;j<=3;j++)
   {   
       int B[n]={0};
       for(int i=1;i<=n;i++)
       {
           num=A[i];
           for(int k=1;k<j;k++) 
           num=num/10;
           num=num%10;
           B[num]++;
       }
       
       for(int i=1;i<10;i++)
       B[i]+=B[i-1];
       
       for(int i=n;i>0;i--)
       {
           num=A[i];
           for(int k=1;k<j;k++) 
           num=num/10;
           num=num%10;
           C[B[num]]=A[i];
           B[num]--;
       }
        for(int i=1;i<=n;i++) 
         A[i]=C[i];
   }
      for(int i=1;i<=n;i++)
       cout<<C[i]<<" ";
       return 0;
   }
