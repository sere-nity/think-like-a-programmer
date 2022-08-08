#include <iostream>
using namespace std;

int main(){
    for (int row = 1; row <= 4; row++){
        for (int space = 1; space <= 4-row; space++){
            cout << " ";
        }
        for (int hashNum = 1; hashNum <= row*2; hashNum++){
            cout << "#";
        }
        cout << "\n";
    }

    for (int row = 1; row <= 4; row++){
        for (int space = 1; space <= row - 1; space++){
            cout << " ";
        }
        for (int hashNum = 1; hashNum <= 8 - (row-1)*2; hashNum++){
            cout << "#";
        }
        cout << "\n";
    }
}