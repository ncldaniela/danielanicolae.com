#include<iostream.h>
#include<conio.h>
using namespace std;
int n, sol,x[20];
void afis(int k)
{ int i;
sol++;
cout<<"Solutia nr. "<< sol<<" : ";
for(i=1;i<=k;i++) cout<<x[i]<<" ";
cout<<endl;getch();
}
void back(int k, int sp)
{ int i;
if (sp==n) afis(k-1);
else  
	for(i=1;i<=n-sp;i++)
if (i>=x[k-1])
{x[k]=i;
back(k+1, sp+i);}
}
int main()
{
cin>>n;
sol=0;
back(1,0);
cout<<sol<<" solutii";
return 0;
}