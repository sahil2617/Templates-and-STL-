#include<iostream>
using namespace std;
// multiple comma separated parameters can be passed in template 
template <class v1, class v2>
class myClass{
    public:
        v1 data1;
        v2 data2;

        myClass(v1 a, v2 b){
            data1 = a;
            data2 = b;
        }

        void display(){
            cout<<"1st data is "<<data1<<endl;
            cout<<"2nd data is "<<data2<<endl;
        }

};

int main(){
        // while creating the object of the template class, we have to define the dataTypes of the parameter passed in template like this 
        myClass <int,int> myObj(3.5,4.3434);
        myObj.display();
return 0;
}