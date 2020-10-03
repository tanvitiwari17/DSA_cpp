/*
File Handling

-Data Persistence: life of data
-Stream: flow of data
        from program to file - output stream
        from file to program - input stream
            - istream -istream_withassign -(cin)
                      -ifstream
     ios-|            -iostream-|
                                 - fstream
            - ostream -iostream-|
                      -ofstream
                      -ostream_withassign -(cout)

to write into file - ofstream obj
to read from a file - ifstream obj
to open file - open(".."), if file is not present in the hard disc, open creates a new file

file opening modes:
- ios::in       input/read : only with ifstream obj
- ios::out      output/write : only with ofstream obj ,overwrite the content( i.e. old data id deleted)
- ios::app      append
- ios::ate      update
- ios::binary   binary : special characters (like \n) have no meaning and print as it is in the file

text mode is the default mode and the special characters have their meaning and work accordingly

fout.open("file_path", ios::app | ios ::binary);

*/

#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    ofstream fout;
    ifstream fin;
    fout.open("myfile.dat"); // open is a member fn of ofstream, to open file :open(file_path, open_mode) (by default ios::out
    fout<<"hello";
    fout.close();
    char ch;
    fin.open("myfile.dat");
    fin>>ch;
    while(!fin.eof())

    {
        cout<<ch;
        fin>>ch;
    }
    fin.close();
    return 0;
}
