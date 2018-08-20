#include <fstream>
using namespace std;
ifstream fin(“date.in”);
ofstream fout(“date.out”);
int main ()
{//declarari
int salar, b[10], i,n,c[10], nrmon=0, csalar, sol=0;
//citire
fin>>salar;csalar=salar;
fin>>n;
for(i=0;i<n;i++)
fin>>b[i];
//greedy
for(i=0;i<n;i++)
{c[i]=salar/b[i];
nrmon=nrmon+c[i];
salar=salar%b[i];
};
//afisare
fout<<endl<<csalar<<” ? “;
for(i=0;i<n;i++)
{if (i!=0) fout<<”+”;
fout<<c[i]<<”*”<<b[i];
sol=sol+c[i]*b[i];
}
fout<<”=”<<sol<<endl<<”Nr. de mon folosite:”<<nrmon;
if (salar==0) fout<<endl<<”Salariul a fost achitat integral.”;
else fout<<endl<<”Salariul NU a fost achitat integral.”;
return 1;
}
