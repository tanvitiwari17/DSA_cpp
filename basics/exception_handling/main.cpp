/*

Exception is any abnormal behavior, run time error.
Exception Handling : built in error handling mechanism to manage and respond to runtime errors.
keywords:
~try ~catch ~throw
- Program statements that you want to monitor for exceptions are contained in try block
- If any exception occurs within the try block, it is thrown.
- The exception is caught, using catch, and processed.

catch : any type of data can be caught, including classes that we create
throw: throw exception;  throw must be executed either within the try block or from any function that is called within the block calls.

*/

#include <iostream>
using namespace std;
void fun()
{
    throw 10;
}
int main()
{
    cout<<"Welcome";
    try{
    fun(); // or directly throw 10 ;
    cout<<"\nIn Try";
    }
    catch(int e){
    cout<<"\nException no: "<<e;
    }
    cout<<"\nLast line";
    return 0;
}

/* for multiple throws , create multiple catches, or :
{
    int i=3;
    cout<<"Welcome";
    try{
    if (i==1)
        throw 10 ;
    if (i==2)
        throw "hello";
    if (i==3)
        throw 4.7;
    cout<<"\nIn Try";
    }
    catch(...){   // catches any type of thrown exception
    cout<<"\nException Occurred ";
    }
    cout<<"\nLast line";
    return 0;
}
*/
