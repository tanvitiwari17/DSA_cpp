/*

first step of OOPs 5 concepts: Encapsulation

Encapsulation is the act of combining properties and methods related to the same entity.

*/

/*

Data Security : access: private , protected, public

*/

#include <iostream>
#include <string.h>
#include<stdio.h>
using namespace std;

struct book
{
private:

    int bookid;
    char title[20];
    float price;

public:

    // functions are called member functions.
    void input()
    {
        cout<<"\nEnter bookid, title and price of the book:";
        cin>>bookid>>title>>price;
    }
    void display()
    {
      cout<<"\n"<<bookid<<"   "<<title<<"   "<<price;
    }
};

int main()
{
    book b1;
    //b1.bookid displaces error since the variable is private
    b1.input();
    b1.display();
}

