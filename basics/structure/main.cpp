/*

structure is a collection of dissimilar elements.It is a way to group variables.
It is used to create data type.

*/

#include <iostream>
#include <string.h>
#include<stdio.h>
using namespace std;

struct book                 // outside main, global definition, inside main: local definition
{
    int bookid;
    char title[20];
    float price;
};  // }b2; // another way to create global variable

//book b2; //global variable

void display(book);
book input();
int main()
{
    book b1={100,"Let us C++",250.0};   // struct book b1;  // 26bytes memory //local variable
    display(b1);

    book b2;
    b2.bookid = 110;
   // b2.title = 'Let us C'; - this is incorrect, we are writing name of the array, and it represents the address of the first block,which is a constant, therefore, wrong
    strcpy(b2.title,"Let us C");
    b2.price = 200.0;
    display(b2);

    book b3;
    cout<<"\nEnter bookid, title and price of the book:";
    cin>>b3.bookid>>b3.title>>b3.price;
    display(b3);

    book b4;
    b4= input();
    display(b4);
}
void display(book b)
{
    cout<<"\n"<<b.bookid<<"   "<<b.title<<"   "<<b.price;
}
book input(){
book b;
cout<<"\nEnter bookid, title and price of the book:";
cin>>b.bookid>>b.title>>b.price;
return b;
}
