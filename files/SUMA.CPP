#include<iostream.h>

int x[10],n,ns;

void scriesol ()
{ int j;
  int s=0; ns++;
  for(j=1;j<=n;j++)
    if(x[j]==1) s=s+j;
    else s=s-j;
  if(s==n)
  {
    cout<<endl;
    for(j=1;j<=n;j++)
      if(x[j]==1) cout<<"+"<<j;
      else cout<<"-"<<j;
   }
}

void back(int k)
{
  int i;
  for(i=0;i<=1;i++)
   {
       x[k]=i;
       if (k==n) scriesol();
       else back(k+1);
   }
}

void main()
{
  cin>>n;
  back(1);
  if (ns==0) cout<<"Imposibil";
}