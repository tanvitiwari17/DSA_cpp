/*

seekg():
    defined in istream class
    prototype: istream& seekg(streampos pos);  // integer value
               istream& seekg(streamoff off,ios_base::seekdir way);
   pos : new absolute position within the stream(relative to the beginning)
   off is offset value, relative to the way parameter
   way values ios_base::beg, ios_base::cur and ios_base::end

seekp(): moves the position of put pointer
    defined in ostream class
    prototype: ostream& seekp(streampos pos);  // integer value
               ostream& seekp(streamoff off,ios_base::seekdir way);

*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("myfile.txt",ios::ate|ios::app);
    cout<<fout.tellp()<<endl;
    fout<<"ABCDEFG";
    cout<<fout.tellp()<<endl;
    fout.seekp(2,ios_base::beg);
    cout<<fout.tellp();
    fout.close();

    ifstream fin;
    fin.open("myfile.txt");
    cout<<fin.tellg(); // poition of get pointer
    cout<<"\n"<<(char)fin.get();
    cout<<(char)fin.get();
    cout<<"\n"<<fin.tellg();
    // to shift pointer to nth index : fin.seekg(n)
    fin.seekg(6);
    cout<<"\n"<<fin.tellg();
    cout<<"\n"<<(char)fin.get();
    cout<<endl<<fin.tellg();
    // to move pointer 2 spaces ahead of current pointer:
    fin.seekg(2,ios_base::cur);
    cout<<endl<<fin.tellg();

    fin.seekg(2,ios_base::beg);
    cout<<endl<<fin.tellg();
    //cout<<endl<<(char)fin.get();

    fin.seekg(-2,ios_base::end);
    cout<<endl<<fin.tellg();

    return 0;
}
