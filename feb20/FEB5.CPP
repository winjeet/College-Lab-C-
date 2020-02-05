#include<iostream.h>
#include<conio.h>
class B;
class A
{
  int a;
  public:
     void get(int x)
     {
	a=x;
     }
     void disp()
     {
	cout<<"A= "<<a;
     }
   friend float avg(A,B);
};
class B
{
  int b;
  public:
  void read(int x)
  {
     b=x;
  }
  void print()
  {
    cout<<"\nB= "<<b;
  }
 friend float avg(A,B)
};
float avg(A M,B N)
{
     return((M.a + N.b)/2);
}
void main()
{
  A oba;
  B obb;
  int R,t,s;
  clrscr();
  cout<<"enter "<<t;
  cin>>t;
  cout<<"enter "<<s;
  cin>>s;
  oba.get(t);
  obb.read(s);
  oba.disp();
  obb.print();
  R=avg(oba,obb);
  cout<<"\nAverage = "<<R<<endl;

getch();
}
