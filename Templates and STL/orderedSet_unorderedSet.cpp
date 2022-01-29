// Below the function given are for ordered set the same follows with the unordered Set 
//    orderedSet generally keeps element in ascending order and the TimeComplexity of any function performed on it is      O(log(n))..
//    UnorderedSet generally keeps element in any order and the TimeComplexity of any function performed on it is O(1)..




#include <bits/stdc++.h>
using namespace std;

template <class T>
// void insert(set<T> &mySet) // this is for set
void insert(unordered_set<T> &mySet) // this is for unordered set
{
    // Inserting an element to the Set: 
        // a)   mySet = {1,23,4,23,44,23,2};// this is the method of initializing the set..

        // b) manual insertion of element in the Set
                int n;
                cout << "Enter no. of Elements to be entered in the Set";
                cin >> n;
                for (int i = 0; i < n; i++)
                {
                    int x;
                    cout << "Enter the element " << i + 1 << ":";
                    cin >> x;
                    // mySet.insert(x); .mySet.insert(x) and mySet.emplace(x) do the same thing only diffference is   emplace method works faster that is why sport programmers uses it.
                    mySet.emplace(x);
                }
}
template <class T>
// void display(set<T> &mySet) // this is for set
void display(unordered_set<T> &mySet) //this is for unordered set
{
    // Set can be displayed in this way...
        for (auto it : mySet)
        {
            cout << it << " ";
        }
        cout << endl;
}

int main()
{
    // set<int> st; //This is for ordered Set.
    unordered_set<int> st; // This is for unordered set
    insert(st);
    display(st);

    // Erase functionality in Sets

            // // 1. st.erase(iterator) // erase method can take an iterator and the element where the iterator is pointing will be erased./..
            // st.erase(st.begin()); // st.begin() points towards the very first element of the set st, so the first element will be deleted
            // display(st);

            // // 2. st.erase(range)
            // st.erase(st.begin(), st.end()); //  the erase fnction can also take the range . in this example it starts from begin and erases till the last element , range can be user defined
            // display(st);

            // // 3. st.erase(key)
            // st.erase(3); // this erase method also takes the key to be erased. Key in the sense any specific element of the set, if that element is present in the set it will be erased.
            // display(st);

    // Finding the element in the set.. 
            // auto it = st.find(6); ///st.find(element) method returns an iterator to the element...and if the element is not found the iterator is returned to the st.end();
            // st.erase(it);   
            // display(st);

    // Finding the size of any set 

            // int sizeOfSet = st.size();
            // cout<<"Size of the Set is:"<<sizeOfSet;


    // Deleting an entire Set 
            // Both the below method is used to clear an entire Set 
            // st.clear();
            // st.erase(st.begin(),st.end())




    return 0;
}