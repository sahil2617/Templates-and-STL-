#include<bits/stdc++.h>
using namespace std;
            
            
int main(){
                vector<int> vec ={23,4,213,4,36,4,756,34};
         // Given the range of an elements we have to find the specific element which is repeating the maximum times.
                    //Traditional method
                        int counter = 0;
                        int x = 4;
                        for (auto i = vec.begin(); i < vec.end(); i++)
                        {
                            if (*i == x)
                            {
                                counter++;
                            }
                        }
                         cout<<counter<<endl;
                        
                    // // Modern way.. Syntax : count(startIterator, EndIterator, valueToCount)
                        int counter1 = count(vec.begin(), vec.end(), 4); 
                         cout<<counter1<<endl;
            
return 0;
}