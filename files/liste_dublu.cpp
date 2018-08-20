#include<iostream>
using namespace std;
struct Nod

      {int info;
       Nod *next,*back;
       };
 Nod *prim, *ultim;
void creare_lista()
{Nod *c;
 c=new Nod;
 cout<<"info ";
 cin>>c->info;
 if(!prim)
   {prim=c;
    prim->next=0;
    prim->back=0;
    ultim=prim;
    }
 else
   {ultim->next=c;
    c->back=ultim;
    ultim=c;
    ultim->next=0;
   }
}
void adaug_sfarsit()
{Nod *c;
c=new Nod;
cout<<"info ";
 cin>>c->info;
ultim->next=c;
    c->back=ultim;
    ultim=c;
    ultim->next=0;}
void adaug_inceput()
{Nod *c;
c=new Nod;
cout<<"info ";
 cin>>c->info;
 c->back=0;
 c->next=prim;
 prim->back=c;
 prim=c;}
void adaug_dupa()
{Nod *c,*a;int x; 
//Nod *a retine adresa nodului ce se va insera in lista 
//cu *c se face avansarea in lista pana la nodul ce contine valoarea dupa 
//care se face inserarea; evident se porneste de la primul; 
cout<<"Dupa cine inserati?";cin>>x;
c=prim; 
while(c->info!=x &&c) 
c=c->next; 
a=new Nod; 
cout<<"valoarea de inserat "; 
cin>>a->info; 
a->next=c->next; 
a->back=c;
c->next->back=a;
c->next=a; 
if(c==ultim) ultim=a;}
void listare_stanga_dreapta()
{Nod *c;
 c=prim;
 while(c)
    {cout<<c->info<<" ";
     c=c->next;}
cout<<"\n";
}
void listare_dreapta_stanga()
{Nod *c;
 c=ultim;
 while(c)
    {cout<<c->info<<" ";
     c=c->back;}
cout<<"\n";
}
void sterg_prim()
{Nod *c;
c=prim;
prim=prim->next;
prim->back=0;
delete c;}

void sterg_ultim()
{Nod *c;
c=ultim;
ultim=ultim->back;
ultim->next=0;
delete c;}
void sterg_interior()
{Nod *c;int x; 
cout<<"Ce stergeti?";cin>>x;
c=prim; 
while(c->info!=x &&c) 
c=c->next; 
if (c==prim) sterg_prim();
else if (c==ultim) sterg_ultim();
else
{c->back->next=c->next;
c->next->back=c->back;
delete c;}}
void caut()
   {Nod *c;int x;
   cout<<"ce cautati?";cin>>x;
   c=prim;
   while ( c->info!=x && c )
	   c=c->next;
   if (c) cout<<"l-am gasit";
   else cout<<"nu l-am gasit";
   }
int  main()
   {int n,i;
        cout<<"cate elemente va avea lista?";
    cin>>n;
    for(i=1;i<=n;i++)
      creare_lista();
	  cout<<endl<<"Elementele listei de la stanga la dreapta sunt:"<<"\n";
    listare_stanga_dreapta();
    cout<<endl<<"Elementele listei de la dreapta la stanga sunt:"<<"\n";
    listare_dreapta_stanga();
	cout<<"adaug la sfarsit"<<"\n";
	adaug_sfarsit();
	cout<<endl<<"Elementele listei de la stanga la dreapta sunt:"<<"\n";
    listare_stanga_dreapta();
	cout<<"adaug la inceput"<<"\n";
	adaug_inceput();
	cout<<endl<<"Elementele listei de la stanga la dreapta sunt:"<<"\n";
    listare_stanga_dreapta();
	cout<<"inserare dupa:"<<"\n";
	adaug_dupa();
	cout<<endl<<"Elementele listei de la stanga la dreapta sunt:"<<"\n";
    listare_stanga_dreapta();
	cout<<"sterg primul"<<"\n";
	sterg_prim();
	cout<<endl<<"Elementele listei de la stanga la dreapta sunt:"<<"\n";
    listare_stanga_dreapta();
	cout<<"sterg ultimul"<<"\n";
	sterg_ultim();
	cout<<endl<<"Elementele listei de la stanga la dreapta sunt:"<<"\n";
    listare_stanga_dreapta();
	cout<<"sterg interior"<<"\n";
	sterg_interior();
	cout<<endl<<"Elementele listei de la stanga la dreapta sunt:"<<"\n";
    listare_stanga_dreapta();
	caut();
		    return 0;
    } 