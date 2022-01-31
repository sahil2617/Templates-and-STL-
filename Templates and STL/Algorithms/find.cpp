#include<bits/stdc++.h>
using namespace std;
            
            
int main(){
                 vector<int> vec ={23,4,213,4,36,4,756,34};
        // Given the range of an elements we have to find the first occurence of the any specific element
                    
                        // auto it = find(firstIterator, secondIterator, elementToFind);
                        auto it = find(vec.begin(), vec.end(), 4);//find function returns an iterator 
                        int index = it-vec.begin();//so any iterator minus the begin iterator gives us the index of the iterator..
                        cout<<"Index = "<<index;
            
return 0;
}