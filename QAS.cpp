#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    string s;
    cin >> s;

    while (x--) {
        for (int i = 0; i < n - 1; i++) { // Stop at n-1 to prevent accessing s[i+1] out of bounds
            if (s[i] == 'B' && s[i + 1] == 'G') {
                swap(s[i], s[i + 1]); // Use the built-in swap function for clarity
                i++; // Skip the next position to avoid re-checking after a swap
            }
        }
    }

    cout << s << endl;
    return 0;
}
