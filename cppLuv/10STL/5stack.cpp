#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<string> s;
    s.push("anant");
    s.push("strong");
    s.push("chaudhary");

    cout << "top element->"<< s.top() << endl;
    s.pop();
    cout << "top element->"<< s.top() << endl;

    cout << "size of stack: " << s.size() << endl;
    cout << "empty or not: " << s.empty() << endl;

    cout << "printing the stack:" << endl;
    
    while(s.empty()==false){
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}
//stack --> first in last out concept 
//shaadi ki plates jo sabse pehle rakkhi gai vo last me uthegi