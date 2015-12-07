#include <iostream>
#include <stack>
using namespace std;
int main() {
    int size;
    cin >> size;
    if(size < 1)
        return 0;
    
    stack<int> v;
    int n;
    while(cin >> n)
        v.push(n);
    
    cout << v.top();
    while(v.size()) {
        v.pop();
        cout << ' ' << v.top();
    }
    return 0;
}
