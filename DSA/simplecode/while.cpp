#include<iostream>

using namespace std;

int main() {
    int n = 10;
    int sum = 0;
    int i = 1;
      
    
    do {

        sum = sum +i;
        cout << sum << endl;  // Output the updated sum
        i++;  // Increment i to eventually end the loop
    } while(i <= n);  // Check if i is still within the limit
    
    cout << "Final sum: " << sum << endl;  // Output the final sum after the loop ends
    return 0;
}
