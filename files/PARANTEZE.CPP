#include<iostream.h>
using namespace std;
int x[10],n;
void ret_sol()
{ int i;
  cout<<endl;
  for(i=1;i<=n;i++)
     if(x[i]==1) cout<<")";
     else cout<<"(";
}
int cont(int k)
{ int i,pi=0,pd=0;
  for(i=1;i<=k;i++)
    if(x[i]==0) pd++;
    else pi++;
  return pd<=n/2 && pi<=pd;
}
void back(int k)
{
  int i;
  if (k==n+1) ret_sol();
	  else
  for(i=0;i<=1;i++)
   {
       x[k]=i;
       if (cont(k))
	    back(k+1);
   }
}

int  main()
{
  cin>>n;
  back(1);
  return 0;
}