#include <iostream>
 using namespace std;
 int s[10],a[10][10],n,i,j,v,p,vs,vs1,mint,cost;
 main()
 {
cout<<"Numar noduri=";cin>>n;
 for(i=1;i<=n;i++)
 for(j=i+1;j<=n;j++)
{ cout<<"A["<<i<<"]["<<j<<"]=",cin>>a[i][j],a[j][i]=a[i][j];};
 cout<<"Nod de pornire:";cin>>v; s[v]=1;
 vs1=v;
 cout<<"Drumul trece prin:"<<v<<' ';
 p=v;
 for(i=1;i<n;i++)
 {
 mint=3000;
 for(j=1;j<=n;j++)
 if(a[v][j]!=0&&s[j]==0&&mint>a[v][j])
 {mint=a[v][j];
 vs=j;
 }
 cost=cost+a[v][vs];
 cout<<vs<<' ';
 s[vs]=1;
 v=vs;
 }
 cout<<p;
cost=cost+a[vs1][v];
 cout<<endl<<"Cost="<<cost;
} 