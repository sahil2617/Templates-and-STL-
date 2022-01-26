#include<iostream>
#include<vector>
using namespace std;
            
          template <class T>  // Below display should work for all dataTypes thats why template parameter has been used.
    void display( vector<T> myVector){
        for (int i = 0; i < myVector.size(); i++)
        {
            cout<<myVector[i]<<" ";
        }
        cout<<endl;
        }

int main(){
        
        vector <int> myVector;// declaring the vector..

        int element,size=4;

        for (int i = 0; i < size; i++)
        {
            cout<<"Push the Element in the Vector : ";
            cin>>element;
            myVector.push_back(element);// pushing the element into vector 
        }
        display(myVector);

        // inserting an element to the vector 
        vector <int>  :: iterator myIterator; //declaring the iterator
        myIterator = myVector.begin();          // pointing the iterator 
        myVector.insert(myIterator+1,9); // inserting an element to the vector using iterator at specific index
        display(myVector);
        
        // erasing an element from the vector 
        myIterator = myVector.begin();        // pointing the iterator 
        myVector.erase(myIterator,myIterator+2);
        display(myVector);
        
return 0;
}