#include <iostream>
#include <iomanip> // For setw and setfill

using namespace std;

void printTriangle(int rows, bool reverse = false) {
    int spaces = reverse ? 0 : rows - 1;
    int stars = reverse ? rows : 1;

    for (int i = 0; i < rows; i++) {
        cout << setw(spaces) << setfill(' ') << ""; // Print spaces
        cout << setw(stars) << setfill('*') << "";  // Print stars
        cout << endl;

        if (reverse) {
            spaces++;
            stars -= 2;
        } else {
            spaces--;
            stars += 2;
        }
    }
}

void printDiamond(int rows) {
    printTriangle(rows);
    printTriangle(rows - 1, true); // Print reversed triangle (bottom half)
}

int main() {
    int rows = 5; // You can change the number of rows here

    cout << "Triangle:" << endl;
    printTriangle(rows);

    cout << "\nReverse Triangle:" << endl;
    printTriangle(rows, true);

    cout << "\nDiamond:" << endl;
    printDiamond(rows);

    return 0;
}
