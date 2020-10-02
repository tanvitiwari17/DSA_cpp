/*
class template is also called generic class
template<class type> class class_name{...};
*/

#include <iostream>
using namespace std;

template<class T>
class ArrayList
{
private:
    struct ControlBlock
    {
        int capacity;
        T *arr_ptr;
    };
    ControlBlock *s;
public:
    ArrayList(int capacity)
    {
        s=new ControlBlock;
        s->capacity=capacity;
        s->arr_ptr = new T[s->capacity];
    }
    void AddELement(int index, T data)
    {
        if(index>=0&&index<=s->capacity-1)
            s->arr_ptr[index]=data;
        else
            cout<<"\nArray index is not valid";
    }
    void ViewElement(int index, T &data)
    {
        if (index>=0&&index<=s->capacity-1)
            data=s->arr_ptr[index];
        else
            cout<<"\nArray index is not valid";
    }
    void ViewList()
    {
        int i;
        for(i=0;i<s->capacity;i++)
            cout<<" "<<s->arr_ptr[i];
    }
};
int main()
{
    float data;
    ArrayList <float>list1(4);
    list1.AddELement(0,3.2);
    list1.AddELement(1,4.1);
    list1.AddELement(2,5.4);
    list1.AddELement(3,2.2);
    list1.ViewElement(0,data);
    cout<<"Value in the array is "<<data<<endl;
    list1.ViewList();
    return 0;
}
