/*
dynamic constructor:
-constructor can allocate dynamically created me memory to the object
i.e. object is going to use memory region,dynamically created by constructor


*/

#include <iostream>
using namespace std;
class A
{
private:
    int a,b;
    int *p;
public:
    A(){
        a=0;b=0;
        p= new int;
    }
    A(int x,int y,int z){
    a=x;
    b=y;
    p=new int;
    *p=z;
    }
    void show_data()
    {
        cout<<"a="<<a<<" b="<<b<<" p="<<*p;
    }
};
int main()
{
    A o1,o3(3,4,5);
    o3.show_data();
    return 0;
}
