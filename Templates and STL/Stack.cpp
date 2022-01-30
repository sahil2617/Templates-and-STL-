// Stack is the LIFO datastructure... 
#include<bits/stdc++.h>
using namespace std;

        template<class T>
        void insert( stack<T> &myStack){

            int n,x;
            cout<<"Insert the no. of the elements to be inserted :";
            cin>>n;
            for (int i = 0; i < n ; i++)
            {   
                cout<<"enter the element "<<i+1<<":";
                cin>>x;
                myStack.emplace(x);
            }  
        }  
            
int main(){
            
        stack<int> st ;
    // general Operations on the Stack are a)push or emplace
    //                                     b)pop
    //                                     c)top 
    //                                     d)size 
    //                                     e)empty

        insert(st);
        
        cout<<"Top of the Stack is "<<st.top()<<endl;
        st.pop();
        cout<<"Top of the Stack is "<<st.top()<<endl;

        cout<<"size of the Stack is "<<st.size()<<endl;
        
        bool result = st.empty(); // returns true or false

        // below is the code or poping all element from the stack. i.e clearing
        while(!st.empty())st.pop();
        cout<<"Top of the Stack is "<<st.top()<<endl;


return 0;
}