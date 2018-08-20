#include <fstream>
using namespace std;
ifstream fin (“date.in”);
ofstream fout(“date.out”);
int main ()
{//declarare
int pret[10], vol[10],i,n,sac,vfurt=0,aux, sch;
//citire
fin>>sac;
fin>>n;
for(i=0;i<n;i++)
fin>>vol[i]>>pret[i];
//GREEDY
//faza 1: hotul ordoneaza obiectele descrescator, dupa raportul pret/volum
do{
sch=0;
for(i=0;i<n-1;i++)
it (pret[i]/vol[i]<pret[i+1]/vol[i+1])
{sch=1;
aux=pret[i];pret[i]=pret[i+1];pret[i+1]=aux;
aux=vol[i];vol[i]=vol[i+1];vol[i+1]=aux;
}
} while (sch);
//faza 2: hotul pune obiectele in sac
for(i=0;i<n && sac>0;i++)
if (sac>=vol[i])
{sac=sac-vol[i];
vfurt=vfurt+pret[i];
}
//afisare
fout<<endl<<”In sac a ramas “<<sac<<” spatiu.”<<endl<<”Valoarea furtului este “<<vfurt;
return 1;
}
