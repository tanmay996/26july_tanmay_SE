#include<iostream>
using namespace std;
class matrix
{
    public:
    int num[5],i;
    int addition()
    {
        for(i = 0 ; i < 3 ; i++)
        {
            cout<<"Enter value of "<<i+1<<" - ";
            cin>>num[i];
        }  
        return 0;      
    }
    matrix operator + (matrix obj2)
    {
        matrix obj3;
        for(i = 0 ; i < 3 ; i++)
        {
            obj3.num[i] = num[i] + obj2.num[i]; 
            return obj3;
        }
        
    }
};

int main()
{
    int i;
    matrix obj1 , obj2 , obj3;
    obj1.addition();
    for(i = 0 ; i < 3 ; i++)
    {
        cout<<obj1.num[i]<<"\t";
    }
    cout<<endl;
    obj2.addition();
    for(i = 0 ; i < 3 ; i++)
    {
        cout<<obj1.num[i]<<"\t";
    }
    cout<<endl;
    cout<<"Addition of Two 1D matrix is :"<<endl;
    for(i = 0 ; i < 3 ; i++)
    {
        obj3.num[i] = obj1.num[i] + obj2.num[i];
        cout<<obj3.num[i]<<"\t";
    }
    return 0;
}