
// Priority Queue is the queue which gives the priority to the element having maximum value..
// i.e element in the front will always be the element having max val and so on. 
// It is also called as maximum priority queue

#include<bits/stdc++.h>
using namespace std;

        template<class T>
        void insert( priority_queue<T> &myQueue){

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
            
        priority_queue<int> qu ;
    // general Operations on the priority_queue are a)push or emplace
            //                                     b)pop
            //                                     c)top 
            //                                     d)size 
            //                                     e)empty

        insert(qu);
        
        cout<<"Top of the priority_queue is "<<qu.top()<<endl;
        qu.pop();
        cout<<"Top of the priority_queue is "<<qu.top()<<endl;

        cout<<"size of the priority_queue is "<<qu.size()<<endl;
        
        // bool result = qu.empty(); // returns true or false
        // cout<<result;

        // below is the code or poping all element from the priority_queue. i.e clearing
        // while(!qu.empty())qu.pop();

        

return 0;
}