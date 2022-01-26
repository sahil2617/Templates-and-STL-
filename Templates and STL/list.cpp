#include <iostream>
#include <list>
using namespace std;
void display(list<int> &myList)
{
    list<int>::iterator iter;
    for (iter = myList.begin(); iter != myList.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
}
int main()
{

    list<int> list1(3);
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(4);

    display(list1); // when you will see the output for list1 you will get 6 elements with zeros at starting 3 places  because while declaring the list we have mentioned that list is of size 3  which means it has 3 no valued element in it i.e 0. so to fill those places iterator will be used

    list<int>::iterator iter1;
    iter1 = list1.begin();
    *iter1 = 3;
    iter1++;
    *iter1 = 34;
    iter1++;
    *iter1 = 2;
    iter1++;
    display(list1); // now the zeros at the first three places has been replaced by 3,34,2 respectively.Because using iterator we are referencing to the begining of the list

    list1.pop_back();  //removes the last element from the list
    list1.pop_front(); // removes the first element from the list
    list1.remove(34);  // removes the elemet from the list if present
    list1.sort();      // sorts the element in the list
    display(list1);
    return 0;
}