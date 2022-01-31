#include<bits/stdc++.h>
using namespace std;
            
            
int main(){
            vector<int> vec ={23,4,213,4,36,4,756,34};
            
         // Given the range of elements and want to find the sum of all elements in that range 
                    // Traditional way of doing it 
                        int sum = 0;
                        for (auto i = vec.begin(); i < vec.end(); i++)
                        {
                            sum += *i;
                        }
                        cout<<sum<<endl;
                        
                    // Modern way of doing it.. 
                        // syntax : accumulate(firstIterator, lastIterator, InitialSum)
                        int sum1 = accumulate(vec.begin(), vec.end(),0);
                        cout<<sum1<<endl;
            
return 0;
}