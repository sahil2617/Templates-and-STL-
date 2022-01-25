
#include<iostream>
using namespace std;
// Reason why we are using the template is because it allow us to use the same class for different dataTypes. 
// only thing we have to do is just pass the parameter to template ...no. of parameter can be single or multiple depending upon the usage 

// Syntax for Creation of Templates 
        // template <class dataTypeVariableName1, class dataTypeVariableName2>
        // Class className{
        //     body
        // };
        // int main(){
        //      className <dataType,dataType> objectName;
        //  }

template <class var>
class operation{
    public:
        var a ;
        operation(var i){
            a = i;
        }
        var sum(var b){
            var j = this->a + b;
            return j;
        }
};

int main(){
operation <double> num1(5.321);
// operation <int> num2(8);
double sum = num1.sum(6.4342);
cout<<sum<<endl;
return 0;
}