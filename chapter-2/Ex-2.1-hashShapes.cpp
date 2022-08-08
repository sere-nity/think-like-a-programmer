#include <iostream>
using namespace std;

int main(){
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