/*

- pair is a template class in STL
- pair is not a part of container
- we can pair two heterogeneous objects

pair <T1,T2> obj_name

obj_name=make_pair(...); // to insert values

p1.first || p1.second    // to access pairs

==  !=  <  >  <=  >=     // compare to pairs

*/

#include <iostream>
using namespace std;
class student{
private:
    string name;
    int age;
public:
    void setStudent(string s,int a){
    name =s; age = a;
    }
    void showStudent(){
    cout<<"name: "<<name<<" ";
    cout<<"age: "<<age<<endl;
    }
};
int main()
{
    pair <string,int> p1;
    pair <string,string> p2;
    pair <int,student>p3;
    p1=make_pair("Rahul",16);
    p2=make_pair("India","Delhi");
    student s1;
    s1.setStudent("Aisha",19);
    p3=make_pair(1,s1);

    cout<<"Pair 1:"<<p1.first<<" "<<p1.second<<endl;
    cout<<"Pair 2:"<<p2.first<<" "<<p2.second<<endl;
    cout<<"Pair 3:"<<p3.first<<" ";
    student s2=p3.second;
    s2.showStudent();

    return 0;
}
