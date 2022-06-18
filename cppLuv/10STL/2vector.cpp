#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    vector<int> a(5,1);
    //5 values vector initialized with 1 for default it is initialized
    //with  0

    cout << "Capacity of vector: "<<v.capacity() << endl;
    v.push_back(1);
    cout << "Capacity of vector: "<<v.capacity() << endl;
    v.push_back(2);
    cout << "Capacity of vector: "<<v.capacity() << endl;
    v.push_back(3);
    cout << "Capacity of vector: "<<v.capacity() << endl;
    cout << "Size of vector: " << v.size() << endl;
    //capacity matlab kitne ke liye memory h,size matlab kitne elements pade h memory m
    cout << "Element at 2nd Index = "<< v.at(2) << endl;//random access possible
    cout << "First element of vector: "<<v.front() << endl;
    cout << "Last element of vector: "<< v.back() << endl;

    cout << "Before pop" << endl;
    for(int i:v){
        cout << i << " ";
    }cout << endl;

    v.pop_back();
    cout << "After pop" << endl;
    for(int i:v){
        cout << i << " ";
    }cout << endl;

    //******when we clear vector its capacity remains same
    cout << "before clear size-" << v.size() << endl;
    v.clear();
    cout << "after clear size-" << v.size() << endl;
    //for vector iterator 
    v.begin();
    v.end();
    //copying vector in another vector
    
    vector<int> last(a);//a is now copied
    cout << "Printing last" << endl;
    for(int i:last){
        cout << i << " ";
    }cout << endl;
    cout <<"empty:" << v.empty()<<endl;

    return 0;
}
//inserts elements from the back
//vector is dynamic array which stores memory in contigous manner like array
    //----how vector works-----
    // When std::vector’s internal memory completely finishes then it increases the size of its memory. To do that it performs following steps,

    // 1.) It will allocate a bigger chunk of memory on heap i.e. almost double the size of previously allocated.
    // 2.) Then it copies all the elements from old memory location to new one. Yes it copies them, so in case our elements are user defined objects then their copy constructor will be called. Which makes this step quite heavy in terms of speed.
    // 3.) Then after successful copying it deletes the old memory.