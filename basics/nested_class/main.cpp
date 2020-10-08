/*
class inside a class is called nested class.
A nested class is a member and as such has the same access rights as any other member.
The members of enclosing class have no special access to members of nested class;

*/

#include <iostream>
#include<string.h>
using namespace std;
class Student
{
private:
    int rollno;
    char name[20];

        class Address{
    private:
        int houseno;
        char street[20];
        char city[20];
        char state[20];
        char pincode[7];
    public:
        void setAddress(int h,char *s,char *c, char *st, char *p)
        {
            houseno = h;
            strcpy(street,s);
            strcpy(city,c);
            strcpy(state,st);
            strcpy(pincode,p);
        }
        void show_address()
        {
            cout<<houseno<<endl;
            cout<<street<<" "<<city;
            cout<<" " <<pincode<<endl;
            cout<<state;
        }
        };

    Address add;
public:
    void set_roll(int r)
    {
        rollno = r;
    }
    void setName(char *n)
    {
    strcpy(name,n);
    }
    void set_address(int h,char *s, char *c, char *st,char *p)
    {
        add.setAddress(h,s,c,st,p);
    }
    void show_student()
    {
        cout<<"Student Data:"<<endl;
        cout<<"rollno: "<<rollno;
        cout<<"\nname: "<<name;
        cout<<"\naddress: ";
        add.show_address();
    }
};
int main()
{
    Student s1;
    s1.set_roll(100);
    s1.setName("Rahul");
    s1.set_address(301,"AC block","Shalimar Bagh","Delhi","201304");
    s1.show_student();

    return 0;
}
