#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> array(N);
    for (int i = 0; i < N; ++i) {
        cin >> array[i];
    }

    for (int i = 0; i < N; ++i) {
        if (array[i] % 2 != 0) {
            cout << array[i] << ' ';
        }
    }

    return 0;
}

