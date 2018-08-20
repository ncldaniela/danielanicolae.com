#include<iostream.h>
#include<conio.h>
int prim(int z)
{   int sw=1,d;
for(d=2;d<z/2;d++)
if(z%d==0) sw=0;
if(sw==1)
return 1;
else return 0;
}
void main()
{
int i, m,k=0,x,v[20],s=0,j=0;
cout<<”x=”; cin>>x;
k++;
v[k]=x;
while(x!=0)
{
cout<<”x=”;
cin>>x;
{k++;v[k]=x;}
}
for(i=1;i<=k;i++)
cout<<v[i]<<endl;
cout<<”m=”; cin>>m;
i=1;
while(i<=k)
{
if(prim(v[i])==1) {s=s+v[i]; j++;}
if(s<m&&prim(v[i])==1) {cout<<v[i]<<” “; i++;
}
else i++;}
if(j==0) cout<<”Nu exista numere prime”;
}
