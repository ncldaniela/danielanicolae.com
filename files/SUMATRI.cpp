#include <fstream.h>
#include <iostream.h>
int n,t[50][50],s[50][50];
/* în tabloul s memoram sumele maxime. s[i][j]=suma maxima ce s-ar putea obtine parcurgand triunghiul cu varful în punctul de pe linia I si coloana j; pe noi ne intereseaza s[1][1]*/
void citire() {
/* citeste triunghiul de numere intr-o matrice x patratica */
int i,j;
ifstream f("triunghi.txt");
f>>n;
for(i=1;i<=n;i++)
for(j=1;j<=i;j++)
f>>t[i][j];
for(i=1;i<=n;i++)
for(j=i+1;j<=n;j++)
t[i][j]=0;
f.close();
}
void suma() {
/*determina sumamaxima ce s-ar putea obtine parcurgandtriunghiul conform enuntului */
int i,j;
for(i=1;i<=n;i++)
s[n][i]=t[n][i];
for(i=n-1;i>=1;i--)
for(j=1;j<=i;j++)
if(s[i+1][j]>s[i+1][j+1])
s[i][j]=s[i+1][j]+t[i][j];
else s[i][j]=s[i+1][j+1]+t[i][j];
}
int main () 
{int i,j;
suma();
for(i=1;i<=n;i++)
{for(j=1;j<=n;j++)
	cout<<t[i][j]<<" ";
cout<<endl;}
for(i=1;i<=n;i++)
{for(j=1;j<=n;j++)
	cout<<s[i][j]<<" ";
cout<<endl;}
cout<<'\n'<<"Suma maxima este "<<s[1][1]<<'\n';
return 0; }