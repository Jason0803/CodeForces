#include <iostream>
using namespace std;
int main() {
    int k;
    cin >> k;
    int count = 1;
    int a = 19;
    while(count != k) {
        a++;
        int tempa, tempb;
        tempa = 0;
        tempb = a;
        while(tempb > 0) {
            tempa += tempb % 10;
            tempb /= 10;
        }
        if(tempa == 10) count++;
    }
    cout << a << '\n';
    return 0;
}

