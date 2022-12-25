#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;

bool fh(int& arr) {
    return (arr % 2 != 0);
}
bool fh1(int& arr) {
    return (arr % 2 == 0);
}

int main() {
    int n;
    cin >> n;
    vector<int> tigril(n);
    for (auto it = tigril.begin(); it != tigril.end(); ++it) {
        cin >> *it;
    }
    vector<int> vanvan(n);
    if (all_of(tigril.begin(), tigril.end(), fh)) {
        cout << "ALL TICKETS ARE CORRECT";
    }
    else {
        cout << "WRONG" << endl;
        cout << count_if(tigril.begin(), tigril.end(), fh1) << endl;
        for (int i = 0; i < tigril.size(); ++i) {
            if (fh(tigril[i])) {
                vanvan[i] = tigril[i];
            }
        }
        //auto it = unique(vanvan.begin(), vanvan.end());
        auto it = remove(vanvan.begin(), vanvan.end(), 0);
        vanvan.erase(it, vanvan.end());
        for (auto it = vanvan.begin(); it != vanvan.end(); it++) {
            cout << *it << " ";
        }
    }


    cout << endl;

    return 0;
}
// (auto it = tigril.begin(); it != tigril.end(); it++)

