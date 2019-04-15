#include<cstdio>
int main()
{
  int A[1001];
  int A1=0,A2=0,A3=0,A4=0,A5=0;int k=1;int n=0;int max=0;int i=0;int count2=0;
  int N;
  while(scanf("%d",&N)!=EOF)
  {
    for( i=0;i<N;i++)
    {
      scanf("%d",&A[i]);
    
      if(A[i]%5==0&&A[i]%2==0)
      {
        A1+=A[i];
      }
    else if(A[i]%5==1)
      {
        A2+=k*A[i];
        k*=-1;
        count2++;
      }
    else if(A[i]%5==2)
      {
        A3++;
      }
    else  if(A[i]%5==3)
      {
        A4+=A[i];
        n++;
      }
    else if(A[i]%5==4)
      {
        if(A[i]>max)
        max=A[i];
      }
      A5=max;
  }//for
    if(A1==0) printf("N ");
    else printf("%d ",A1);
    if(count2==0) printf("N ");
    else printf("%d ",A2);
    if(A3==0) printf("N ");
    else printf("%d ",A3);
    if(A4==0) printf("N ");
    else printf("%.1f ",(double)A4/n);
    if(A5==0) printf("N");
    else printf("%d",A5);
      
  }//while
  return 0;
}