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
to open file - open(".."), if file is not present in the hard disc, open creates a new file
*/

#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("myfile.dat"); // open is a member fn of ofstream, to open file
    fout<<"hello";
    fout.close();
    return 0;
}
