#include<bits/stdc++.h>
using namespace std;

            template <class T>  // Below display should work for all dataTypes thats why template parameter has been used.
    void display( vector<T> myVector){
        // for (auto it = myVector.begin(); it<myVector.end(); it++){
        //     cout<<*it<<" ";
        // }
        // An another way of printing the vector or arrays... basically the below loop is forEach loop which is iterating to each element...
        for (auto it : myVector){
            cout<<it<<" ";
        }
        cout<<endl;
        }

         template <class S> 
        void insert( vector<S> &myVector){

            int element,size;
            cout<<" enter the size of the vector you want ";
            cin>>size;
                    for (int i = 0; i < size; i++)
                    {
                        cout<<"Push the Element in the Vector : ";
                        cin>>element;
                        // myVector.push_back(element);// pushing the element into vector 
                            // myVector.push_back and myVector.emplace_back both are doing the same work but emplace_back takes less time to execute than push_back thats the reason majority of CPer use this....   
                        myVector.emplace_back(element);// pushing the element into vector 
                    }
                    
        }    
            
int main(){
         
        vector<int> vec;
        insert(vec);
        display(vec);  

            // sort an array  or vector ... syntax : sort(range);      
            sort(vec.begin(),vec.end());
            display(vec);        


            // reverses an array or vector ... syntax : reverse(range);
            reverse(vec.begin()+1,vec.end()-1);
            display(vec);              

return 0;
}