#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    stack<int> s;
    for(int i = 0; i < N; i++) {
        string op;
        cin >> op;
        if(op == "push") {
            int num;
            cin >> num;
            s.push(num);
            vector<int> temp;
            while(!s.empty()) {
                temp.push_back(s.top());
                s.pop();
            }
            for(int j = temp.size() - 1; j >= 0; j--) {
                cout << temp[j];
                if(j!= 0) cout << " ";
            }
            cout << endl;
            for(int j = 0; j < temp.size(); j++) {
                s.push(temp[j]);
            }
        } else if(op == "pop") {
            if(!s.empty()) {
                s.pop();
                vector<int> temp;
                while(!s.empty()) {
                    temp.push_back(s.top());
                    s.pop();
                }
                for(int j = temp.size() - 1; j >= 0; j--) {
                    cout << temp[j];
                    if(j!= 0) cout << " ";
                }
                cout << endl;
                for(int j = 0; j < temp.size(); j++) {
                    s.push(temp[j]);
                }
            }
        }
    }
    return 0;
}
