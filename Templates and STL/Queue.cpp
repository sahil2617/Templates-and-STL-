// Queue is the FIFO datastructure... 
#include<bits/stdc++.h>
using namespace std;

        template<class T>
        void insert( queue<T> &myQueue){

            int n,x;
            cout<<"Insert the no. of the elements to be inserted :";
            cin>>n;
            for (int i = 0; i < n ; i++)
            {   
                cout<<"enter the element "<<i+1<<":";
                cin>>x;
                myQueue.emplace(x);
            }  
        }  
            
int main(){
            
        queue<int> qu ;
    // general Operations on the Queue are a)push or emplace
    //                                     b)pop
    //                                     c)Front 
    //                                     d)size 
    //                                     e)empty

        insert(qu);
        
        cout<<"Top of the Queue is "<<qu.front()<<endl;
        qu.pop();
        cout<<"Top of the Queue is "<<qu.front()<<endl;

        cout<<"size of the Queue is "<<qu.size()<<endl;
        
        bool result = qu.empty(); // returns true or false

        // below is the code or poping all element from the Queue. i.e clearing
        while(!qu.empty())qu.pop();


return 0;
}