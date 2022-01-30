// MultiMap always stores the pair of element in asccending order according to the KEYs..

    // in multimaps there can be two elements with same key...


#include<bits/stdc++.h>
using namespace std;
            

    template <class S, class T>
    void display(multimap<S, T> &myMap){

        for(auto it : myMap){
            cout<<it.first<<" "<<it.second<<endl;
        }

    }

int main(){
        multimap< string, int> map1; // for ordrerd multimap
               
        // Inserting the value in the Map...
            //     a) multimap_name["Key"] = value;
            //     b) multimap_name.emplace("Key", value);
   
                map1.emplace("Doraemon", 21);
                map1.emplace("Doraemon", 2451);
                map1.emplace("Doraemon", 251);
                map1.emplace("Shaikh", 34334);
                map1.emplace("Shaikh", 3243);
                map1.emplace("Shaikh", 3463);
                display(map1);
        
        // Erasing from the multimaps 
            // a) map_name.erase("key");
            // b) map_name.erase(iterator);
            // c) map_name.erase(range);
            // d) map_name.clear(); // used for clear the whole map.

        // finding the pair of element in the map.
            // map_name.find("key"); // this will return an iteratr to that key;

        // finding and erasing the eelement
        //     map1.erase(map1.find("sahil"));
        //     display(map1);
        // //

return 0;
}