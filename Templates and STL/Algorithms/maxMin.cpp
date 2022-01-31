#include<bits/stdc++.h>
using namespace std;
            
            
int main(){
             vector<int> vec ={23,4,213,4,36,4,756,34};
         // find the element with maximum value in array or vector... 

                    //  Below is  the traditional method for finding the maximum value element. ///
                        int maximum = INT_MIN;
                        for (auto it : vec)
                        {
                            if (it  > maximum)
                            {
                                maximum = it;
                            }
                            
                        }
                        cout<<"maximum = "<<maximum;

            
            //
            
                        // Now, the simplest method to find it maximum and minimum
                                // Syntax : *max_element(range) & *min_element(range)
                        int maximumVec = *max_element(vec.begin(), vec.end());
                        cout<<maximumVec<<endl;
                        int minimumVec = *min_element(vec.begin(), vec.end());
                        cout<<minimumVec<<endl;
                        // The above method also works for arrays 
            
return 0;
}