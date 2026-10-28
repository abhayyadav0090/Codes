#include <iostream>
#include <algorithm> // for min, max, minmax, sort
#include <numeric>   // for accumulate
#include <vector>

using namespace std; // Avoids writing std:: repeatedly

int main() {
    // Example data
    vector<int> numbers = {42, 17, 8, 99, 23};

    // 1. min
    int smallest = min(42, 17);
    cout << "Min of 42 and 17: " << smallest << "\n";

    // 2. max
    int largest = max(42, 17);
    cout << "Max of 42 and 17: " << largest << "\n";

    // 3. minmax
    pair<int, int> result = minmax({42, 17, 8, 99, 23});
    int minVal = result.first;
    int maxVal = result.second;
    cout << "Min = " << minVal << ", Max = " << maxVal << "\n";

    // 4. sort
    sort(numbers.begin(), numbers.end());
    cout << "Sorted numbers: ";
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << "\n";

    // 5. accumulate
    int sum = accumulate(numbers.begin(), numbers.end(), 0);
    cout << "Sum of numbers: " << sum << "\n";

    return 0;
}


/*
    Output:
    
    Min of 42 and 17: 17
    Max of 42 and 17: 42
    Min = 8, Max = 99
    Sorted numbers: 8 17 23 42 99 
    Sum of numbers: 189
 */