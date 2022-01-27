#include<bits/stdc++.h>
#include<vector>
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
        

        // ############# 1D vectors ##################
                    // vector <int> myVector;// declaring the vector..
                    // insert(myVector);
                    // display(myVector);
                    

                    // vector <int> myVector2(i,j)This syntax basically says that create an int vector and initialize that with i no. of indexes and fill those indexes with element j. for e.g

                    // vector <int> myVector2(4,44);///this syntax is used the fill the elements in the vector with {44,44,44,44}..
                    

                    // **************duplicating the vector into an another vector... 
                    // vector <int> myVector2(myVector);// this will clone the entire vector  
                    // vector <int> myVector2(myVector.begin(),myVector.end()-2); //this will clone the vector from given references...
                    // display(myVector2);

                    //*************** Swapping the two vectors.
                    // vector <int> myVector2(4,44);///this syntax is used the fill the elements in the vector with {44,44,44,44}..
                    // display(myVector2);
                    // myVector.swap(myVector2);// This swaps the given two vectors..
                    // display(myVector);
                    // display(myVector2);
                

                    //*************** inserting an element to the vector 
                    // vector <int>  :: iterator myIterator; //declaring the iterator
                    // myIterator = myVector.begin();          // pointing the iterator 
                    // myVector.insert(myIterator+1,9); // inserting an element to the vector using iterator at specific index
                    // display(myVector);
                    
                    //***************** erasing an element from the vector 
                    // myIterator = myVector.begin();        // pointing the iterator 
                    // myVector.erase(myIterator,myIterator+2);
                    // display(myVector);

        //  #################### 2D vector############################

            // vector <int> vector2d1;
            // insert(vector2d1);
            // vector <int> vector2d2;
            // insert(vector2d2);
            // vector <int> vector2d3;
            // insert(vector2d3);

            // vector<vector<int>> vec;
            // vec.emplace_back(vector2d1);
            // vec.emplace_back(vector2d2);
            // vec.emplace_back(vector2d3);


            // cout<<"Modern Way of printing the 2D vector.. "<<endl;
            // for (auto vect: vec)
            // {
            //     for (auto it: vect)
            //     {
            //         cout<<it<<" ";
            //     }
            //     cout<<endl;
            // }   
            // cout<<endl;
            // till now we were taking the inputs from user to fill the vector...

            // Now what if someone want 2D vector to initialized with some specific element...
            // for e.g  declare and initialized the 5x5 2D vector...let see


                vector<vector<int>> vec(5, vector<int> (5,9)); //refer line45 for 1D dimension array initialization...


            cout<<"Traditional Way of printing the 2D vector.. "<<endl;
            // Traditional way of printing the vector...
            for (int i = 0 ; i < vec.size() ; i++)
            {
                for (int j = 0 ; j < vec[i].size() ; j++)
                {
                     cout<<vec[i][j]<<" ";
                }
                cout<<endl;
            }
            
            // ########################### 3D Vector #########################
            // The below syntax is used for declaring and initializing the 4x4x4 3D vector with 9 on each element  
            vector<vector<vector<int>>> vector3d(4, vector<vector<int>>(4, vector<int> (4,9)));
    
    
    return 0;
}


//  Uncomment each block and run .... 