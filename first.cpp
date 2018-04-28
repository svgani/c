#include<iostream>
using namespace std;

class test{
char a[20];
public:
void getname()
{
cout<<"enter name"<<endl;
cin>>a;
}
void printname()
{
cout<<a<<endl;
}
};

int main()
{
test a;
a.getname();
a.printname();
}
