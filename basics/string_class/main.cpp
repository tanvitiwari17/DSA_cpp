/*
Strings:

~ last character of string is always null character(\0)
~ immutable
~ cannot be copied like s1=s2

char s1[10] = "Hello";
s1="Students"  // wrong
strcpy(s1,"Students");

char s2[20];
s2=s1;         // wrong
strcpy(s2,s1);

s2>s1;         // wrong
int i = strcmp(s2,s1);

char s3[30];
s3=s1+s2;      // wrong
strcpy(s3,strcat(s1,s2));


string class:
- container class
- specialization of a more general template class called basic_string
- defining a class in cpp is creating a new data type, string is derived data type
- operators can be overloaded for the class
- useful for data safety and easy manipulation
- the class handles the issues of overrunning the end of array that holds a null terminated string,
    eg: char s1[10];
        strcpy(s1,"Hello online students");

- supports many constructors:
    ~ string()
    ~ string(const char *str)
    ~ string(const string &str)

- operators:
    =,+,+=,==,!=,<,<=,>,>=,[]

*/

#include <iostream>
// #include <string.h> // to use c functions
#include<string>       // to use cpp string class
using namespace std;

int main()
{
    string s1 ; // default constructor, empty string
    string s2="Hello"; // string s2(Hello) or string s2=string("Hello")
    char str[]=" Hiii";
    string s3=str; //string s3(str);
    string s4 = s2; // string s3(s2);
    s1="Morning"; // assignment operator
    string s5;
    s5 = s2+s3;
    cout<<"s1="<<s1<<endl;
    cout<<"s2= "<<s2<<endl;
    cout<<"s3= "<<s3<<endl;
    cout<<"s4= "<<s4<<endl;
    cout<<"s5= "<<s5<<endl;
    s1+=s3;
    cout<<"s1= "<<s1;
    return 0;
}
