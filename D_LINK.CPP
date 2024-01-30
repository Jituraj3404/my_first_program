#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
struct node
{
int data;
node *next,*prev;
};
node *f,*l;
void creation()
{
 f=new node;
 char ch;
 node *t,*p;
 cout<<"Enter data : ";
 cin>>f->data;
 f->prev=NULL;
 f->next=NULL;
 l=f;
 p=f;
 cout<<"Do you want two create more node press Y/N : ";
 ch=getche();
 while(ch=='y' || ch == 'Y')
 {
     t=new node;
     cout<<"\nEnter data : ";
     cin>>t->data;
     t->next=NULL;
     t->prev=p;
     p->next=t;
     l=p=t;
     cout<<"Do you want to craete more data press Y/N : ";
     ch=getche();
}}
void display()
{
 node *t;
 t=f;
 cout<<"DATA"<<endl;
 while(t!=NULL)
 {
 cout<<t->data<<endl;
 t=t->next;
 }
 }
 void dispback()
 {
 node *t;
 t=l;
 cout<<"DATA"<<endl;
 while(t!=NULL)
 {
 cout<<t->data<<endl;
 t=t->prev;
 }}
 void insbeg()
 {
  node *t;
  t=new node;
  if(t==NULL)
  {
   cout<<"OVERFLOW";
   exit(1);
  }
  cout<<"Enter new data :";
  cin>>t->data;
  t->prev=NULL;
  t->next=f;
  f=t;
 }
 void insend()
 {
  node *t;
  t=new node;
  cout<<"enter data :";
  cin>>t->data;
  t->next=NULL;
  t->prev=l;
  l->next=t;
  l=t;
}
void del()
{
  node *t,*p;
  int d;
  cout<<"Enter Item to be deleted :";
  cin>>d;
  t=f;
  while(t->data!=d && t!=NULL)
  t=t->next;
  if(t==NULL)
  {
   cout<<"Data not found!";
   getch();
   }
   p=t;
   p=p->prev;
   p->next=t->next;
   p=t;
   p=p->next;
   p->prev=t->prev;
   delete t;
  }
void main()
{
 clrscr();
 int n;
lk: cout<<"1.Creation"<<endl;
 cout<<"2.Insertion at the Beginning"<<endl;
 cout<<"3.Insertion at the Ending"<<endl;
 cout<<"4.Dispaly forward"<<endl;
 cout<<"5.Display Backward"<<endl;
 cout<<"6.Delete"<<endl;
 cout<<"7.Exit ";
 cout<<"Enter your choice : ";
 cin>>n;
 switch(n)
 {
  case 1:
  creation();
  break;
  case 2:
  insbeg();
  break;
  case 3:
  insend();
  break;
  case 4:
  display();
  break;
  case 5:
  dispback();
  break;
  case 6:
  del();
  break;
  case 7:
  exit(0);
  default:
  cout<<"Wrong input! " ;
  }
  getch();
  clrscr();
  goto lk;
  getch();
  }