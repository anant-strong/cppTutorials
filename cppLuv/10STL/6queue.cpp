#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> q;

    q.push("anant");
    q.push("strong");
    q.push("chaudhary");

    cout << "Size before pop: " << q.size() << endl;
    cout << "Front element: " << q.front() << endl;
    q.pop();
    cout << "Front element: " << q.front() << endl;
    cout << "Size after pop: " << q.size() << endl;
    cout << "empty or not: " << q.empty() << endl;
    return 0;
}
//queue--> means line, first in first out concept