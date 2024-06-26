#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;

    queue<int> arr;
    string command;
    int element;

    for (int i = 0; i < N; ++i) {
        cin >> command;
        if (command == "push") {
            cin >> element;
            arr.push(element);
        } else if (command == "pop") {
            if (!arr.empty()) {
                arr.pop();
            }
        }

        queue<int> temp = arr;
        while (!temp.empty()) {
            cout << temp.front() << " ";
            temp.pop();
        }
        cout << endl;
    }

    return 0;
}

