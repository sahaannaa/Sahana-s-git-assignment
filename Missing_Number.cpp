// find_missing_number.cpp

#include <bits/stdc++.h>

using namespace std;

int find_missing_number(int arr[], int size) 
{
         int number = (size + 1) * (size + 2) / 2; 
    for (int i = 0; i < size; i++) 
    {
        number -= arr[i]; 
    }
    printf("The missing number in the array is: %d\n", number);






}

// ----------------------------------------Don't Touch--------------------------------------------------------------------

void run_test_cases() {
    // Test case 1: Missing number is 4
    int arr1[] = {1, 2, 3, 5};
    assert(find_missing_number(arr1, sizeof(arr1) / sizeof(arr1[0])) == 4);

    // Test case 2: Missing number is 7
    int arr2[] = {1, 2, 3, 4, 5, 6, 8, 9, 10};
    assert(find_missing_number(arr2, sizeof(arr2) / sizeof(arr2[0])) == 7);

    // Add more test cases as needed

    cout << "All test cases passed!" << endl;
}

int main() {
    // Run the test cases
    run_test_cases();
    return 0;
}
