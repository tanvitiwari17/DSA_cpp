#include <iostream>
using namespace std;
void PrintSub(string str, string curr =" ", int index =0)
{
    if(index ==str.length())
    {
        cout<<curr<<" ";
        return;
    }
    PrintSub(str,curr,index+1);
    PrintSub(str,curr+str[index],index+1);
}

int main()
{
    PrintSub("ABC");
    return 0;
}
