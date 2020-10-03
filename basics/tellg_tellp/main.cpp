/*
tellg():
    ~defined in istream class.
    ~prototype: streampos tellg();
    ~returns the position of the current character in the input stream.

tellp():
    ~defined in ostream class.
    ~prototype: streampos tellp();
    ~returns the position of the current character in the output stream.

if we append to a file, it still starts its indexing from zero when adding new lines, ignoring the prewritten data.
*/

#include<fstream>
#include <iostream>
using namespace std;

int main()
{
ofstream fout;
char ch;
fout.open("my_file2.dat");
fout<<"Hello";
in t pos;
pos = fout.tellp(); // returns 5, because it now points next to "o" of hello.
cout<<pos;
fout.close();
}
