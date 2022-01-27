#include<bits/stdc++.h>
using namespace std;
            
            
int main(){

        //********* Declaration of an Array *************
                    
                    // array <int, 5> array1;
                    // for (int i = 0; i < array1.size(); i++)
                    // {
                    //     cout<<array1[i]<<" ";
                    //     //In this case if the Array is declared but not initialized all the elements of the Array will be filled with garbage values.
                    // }
        
        // **********Array declaration with Initialization********
                   
                    // Case 1

                    //  array <int, 5> array1 = {1};
                    // for (int i = 0; i < array1.size(); i++)
                    // {
                    //     cout<<array1[i]<<" ";
                    //     //In this case if the Array is declared and initialized with only one element, what will happen is the very first element of the array i.e index 0th element will be assigned with it and rest will be assigned with 0.
                    // }

                    // Case 2

                     array <int, 5> array1 = {1,2,31,4,22};
                    for (int i = 0; i < array1.size(); i++)
                    {
                        cout<<array1[i]<<" ";
                        //In this case the Array can be declared and initialized with full capacity 
                    }










return 0;
}