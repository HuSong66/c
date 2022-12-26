#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int a[10] = {6, 9, 3, 8,2, 7, 5, 4, 1, 0};
    sort(a, a + 10);

    for (int i = 0; i < 10; i++) cout << a[i] << ' ';
    cout << endl;
    return 0;
}