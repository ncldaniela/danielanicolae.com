#include<iostream.h>
#include<conio.h>
struct nod
{char nume[30];
nod*st,*dr;};
nod *r;
  void svd(nod *c)
 {if(c){svd(c->st);
 cout<<c->nume<<" ";
 svd(c->dr);}}
 void vsd(nod *c)
 {if(c)
 {cout<<c->nume<<" ";
 vsd(c->st);vsd(c->dr);}}
 void sdv(nod *c)
 {if(c)
 {sdv(c->st);
 sdv(c->dr);
 cout<<c->nume<<" ";}}
 nod* citire_h()
 {int nr;nod*c;char s[30];
 cout<<"nume: ";
 cin.get(s,100);cin.get();
 if(strcmp(s,"*"))
 {c=new nod;
 strcpy(c->nume,s);
 c->st=citire_h();
 c->dr=citire_h();
 return c;}
 else return 0;}
int  main()
 { r=citire_h();
 cout<<endl<<"parcurgere svd - in inordine "<<endl;svd(r);
 cout<<endl<<"parcurgere vsd - in preordine "<<endl;vsd(r);
 cout<<endl<<"parcurgere sdv - in postordine "<<endl;sdv(r);
return 0;}
