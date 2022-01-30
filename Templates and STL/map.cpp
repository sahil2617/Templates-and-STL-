// Maps always stores the pair of element in asccending order according to the KEYs..
// unorderedMaps doesnt stores element in any order.
// Maps and unorderedMaps always stores the Unique KEYs..i.e no two pair of elemen can have same Keys..

    // Below functions and operattions are same for both Maps and UnorderedMaps... 


#include<bits/stdc++.h>
using namespace std;
            

    template <class S, class T>
    void display(map<S, T> &myMap){

        for(auto it : myMap){
            cout<<it.first<<" "<<it.second<<endl;
        }

    }

int main(){
        map< string, int> map1; // for ordrerd map
        // unordered_map< string, int> map2; // for unordrerd map
                
        // Inserting the value in the Map...
            //     a) map_name["Key"] = value;
            //     b) map_name.emplace("Key", value);
            //      c) map_name.insert("Key", value);
                map1["sahil"] = 212010023;
                map1.emplace("Doraemon", 21);
                map1["Aahil"] = 212010023;
                map1["Abhishek"] = 2120100;
                map1.emplace("Shaikh", 343);
                map1["Abhishek"] = 212; ///since the maps stores only unique keys the value of the key will be overwritten..
                display(map1);
        
        // Erasing from the maps 
            // a) map_name.erase("key");
            // b) map_name.erase(iterator);
            // c) map_name.erase(range);
            // d) map_name.clear(); // used for clear the whole map.

        // finding the pair of element in the map.
            // map_name.find("key"); // this will return an iteratr to that key;

        // finding and erasing the eelement
            map1.erase(map1.find("sahil"));
            display(map1);
        //

return 0;
}