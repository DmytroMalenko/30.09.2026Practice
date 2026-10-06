#include <iostream>
#include <cstdlib>
using namespace std; 

int main()
{
    /* Task 1 
    int sum = 0;
    int array[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int min = array[0][0];
    int max = array[0][0];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            sum += array[i][j];
        }
    }
    cout << "Sum of number is: " << sum << "\n";


    double average = (double)sum / 12;
    cout << "Average number is: " << average << "\n";

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (array[i][j] < min) {
                min = array[i][j];
            }
        }
    }

    cout << "Min number is: " << min << "\n";


    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (array[i][j] > max) {
                max = array[i][j];
            }
        }
    }

    cout << "Max number is: " << max << "\n";

    */

    /* Task 2 

    int array[3][4] = {
        {32, 9, 1, 0},
        {2, 0, 2, 1},
        {11, 7, 12, 0}
    };

    int total = 0;

    for (int i = 0; i < 3; i++) {
        int sum = 0;

        for (int j = 0; j < 4; j++) {
            cout << array[i][j] << "\t";
            sum += array[i][j];
        }

        cout << "| " << sum << endl;

        total += sum;
    }

    cout << "------------------------------------" << "\n";

    for (int j = 0; j < 4; j++) {
        int sum = 0;

        for (int i = 0; i < 3; i++) {
            sum += array[i][j];
        }
        cout << sum << "\t";

    }

    cout << "| " << total << "\n";

    */

    /* Task 3 */

    int arr1[5][10];

    int arr2[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            arr1[i][j] = rand() % 51;
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            arr2[i][j] = arr1[i][j * 2] + arr1[i][j * 2 + 1];
        }
    }

    cout << "Array 1:" << "\n";

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            cout << arr1[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "Array 2:" << "\n";

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << arr2[i][j] << " ";
        }
        cout << "\n";
    }
    
}
