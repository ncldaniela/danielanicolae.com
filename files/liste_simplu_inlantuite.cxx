#include <iostream>
using namespace std;
#include <conio.h>
struct nod
  {int info;
   nod *next;};
 nod *p,*u ;         // acceseaza primul respective ultimul nod
int n;                  //numarul de noduri
void cre_ad()     //functia de creare si adaugare  a unui nou element
{nod *c;
 if(!p)                   //daca lista este vida (p==0) se aloca primul nod
    {p=new nod;
 cout<<"valoare primului nod: ";
     cin>>p->info;
	 p->next=0;
     u=p;            //la creare primul si ultimul nod vor fi identici
     }
 else                             //altfel se adauga un nou element la sfarsit
     { c=new nod;          //se aloca un nou nod
       cout<<"informatia utila : ";
       c->next=0;
	   cin>>c->info;        //se completeaza campul informatie utila
       u->next=c;            //se adauga dupa ultimul nod
       u=c;                      //se stabileste noul nod c ca fiind ultimul
       }
                 //campul adresa urmatoare a ultimului nod este 0
     }
void afis()  //functia de afisare parcurge elementele cu afisare
{nod *c;
 c=p;                //se porneste de la primul nod din lista
 while(c)           //cat timp c retine o adresa nenula
   {cout<<c->info<<" ";//se afiseza campul informatie utila
    c=c->next;}             //se avanseaza la urmatoarea adresa, la urmatorul nod
cout<<"\n";
}
void inserare_dupa()
{ nod *c,*n;int nou,x;
cout<<" dupa cine inserati? ";cin>>x;
cout<<" ce inserati? ";cin>>nou;
c=p;
while ((c->info!=x)&&(c->next!=0))
{c=c->next;}
if (c->info==x)
{n=new nod;
n->info=nou;
n->next=c->next;
c->next=n;afis();}
else cout<<"nu-l gasesc";}
void inserare_inainte_prim()
{nod *c,*n;int nou;
cout<<" ce inserati?";cin>>nou;
n=new nod;
n->info=nou;
n->next=p;
p=n;}
void sterg()
{nod *c,*a; int val;//a se sterge, c este precedentul sau.Se va genera o noua //legatura intre c si a->next
cout<<" ce sterg?";cin>>val;
 c=p;
 if(p->info==val) //daca primul nod retine val se sterge primul
   {a=p;          //se retine in a
    p=p->next; //primul va deveni urmatorul element
    free(a);}          //se elibereaza memoria
 else
    {while(c->next->info!=val &&c)//se pozitioneaza pe elementul ce urmeaza a    //fi sters
       c=c->next;
     a=c->next;
     c->next=a->next;
     if(a==u) u=c;
     free(a);}// se elibereaza memoria
 }

int main()
{cout<<"n="; cin>>n;
  for(int i=1;i<=n;i++)
     cre_ad( );
cout<<"\n";
afis();
cout<<"INSERARE INAINTE DE PRIM"<<"\n";
inserare_inainte_prim();afis();
cout<<"INSERARE DUPA UN ELEMENT"<<"\n";
inserare_dupa();
sterg();
afis();
return 0;
}