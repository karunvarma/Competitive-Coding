#include <stdio.h>
 
int main()
 {
    int t;int a[10000]={0};int rem=0;
    int n;int m,x;int temp=0;int c;
    scanf("%d",&t);
    a[0]=1;
     while (t--)
      {
           rem=0;
           a[0]=1;
        scanf("%d",&n);
        m=1;
        temp=0;
        for (int i=2; i<=n; i++)
         {
                 for( c=0;c<m;c++)
         {    
              x=(a[c]*i)+temp;
                 a[c]=x%10;
                temp=x/10;
                 }
                 
          while(temp!=0){rem=temp%10;
          a[c]=rem;
          m=m+1;
          temp=temp/10;
          c++;}
                }
                for(int k=0;k<m;k++){printf("%d",a[m-k-1]);}
                printf("\n");
                
}
 
return 0;
}
