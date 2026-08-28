#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    if(n < 3) {
        cout << "false";
        return 0;
    }

    int i = 0;

    while(i + 1 < n && arr[i] < arr[i + 1])
        i++;

    if(i == 0 || i == n - 1) {
        cout << "false";
        return 0;
    }

    while(i + 1 < n && arr[i] > arr[i + 1])
        i++;

    if(i == n - 1)
        cout << "true";
    else
        cout << "false";

    return 0;
}