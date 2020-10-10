/*

- we can pair multiple objects

tuple<T1,T2,T3> tuple1;

tuple1=make_tuple(...)  // inserting values

get<0>(tuple1);         // accessing tuple members
get<1>(tuple1);
get<2>(tuple1);

==  !=  <  >  <=  >=    // compare to tuples


*/

#include <iostream>
#include<tuple>
using namespace std;

int main()
{
    tuple <string,int,int> t1;
    t1=make_tuple("Rahul",20,50);

    cout<<get<0>(t1)<<endl;
    cout<<get<1>(t1)<<endl;
    cout<<get<2>(t1)<<endl;
    return 0;
}
