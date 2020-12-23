#include <iostream>
using namespace std;

class A
{
public:
    int Apub = 10;
    A()
    {
        cout<<"Constructor A"<<endl;
    }
    A(int x)//constructor overloading
    {
        cout<<"Protected value of class A "<<Apro<<endl;
    }
 
private:
    string Apri = "private string A";
protected:
    int Apro = 20;
    
    
};
class B : public A{
public:
    int Bpub = 30;
    B()
    {
    cout<<"Protected value of class A "<<Apro<<endl;
    }
    
};
class C
{
    B b;
    A a;
public:
    C()
    {
    cout<<"Public value of class B "<<b.Bpub<<endl;
//        cout<<"Private value of class A "<<a.Apro<<endl; cannot be called
//        cout<<"Protected value of class A "<<a.Apro<<endl; cannot be called

    }
};

int main()
{
    A a(1);
    B b;
    C c;
    cout<<"Hello world"<<endl;
    return 0;
}
