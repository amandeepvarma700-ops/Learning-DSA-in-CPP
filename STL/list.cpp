// list in STL is a contiguous container that allows the inserting and erasing of elements in constant time and iterating in both directions. kind of a doubly linked list.



#include<bits/stdc++.h>
using namespace std;

void printList(list<int> l){
    for(auto it = l.begin(); it != l.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

int main(){
    list<int> li;
    li.push_back(10);
    li.push_back(20);
    li.push_back(30);
    li.push_front(56);
    li.push_front(0);

    //pop
    li.pop_front();
    li.pop_back();

    cout<<"The elements in the list are: ";
    printList(li);

    //some major operations

    li.reverse();
    printList(li);
    li.sort();
    printList(li);


}