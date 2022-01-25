#include<iostream>
using namespace std;

    template <class v1 = int, class v2 = float>
    class myClass{
        public:
            v1 a;
            v2 b;
            myClass(v1 x, v2 y){
                a = x;
                b = y;
            }
            void display(){
                cout<<"First data is "<<a<<endl;
                cout<<"Second data is "<<b<<endl;
            }
    };

int main(){
        // just because i have set the default parameters in template, even if i dont pass the dataTypes While creating object it will automatically fetch the default dataTypes... But we have to put empty angular brackets '<>' after class keyword while creating object ...and if we pass dataTypes while object creation the default dataTypes will be modified
        myClass <> obj1(3,53.5);
        obj1.display();
return 0;
}