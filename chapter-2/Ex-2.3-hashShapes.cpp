#include <iostream>
using namespace std;

int main(){
    for (int row = 1; row <= 4; row++){
        for (int space1 = 1; space1 <= row - 1; space1++){
            cout << " ";
        }
        for (int hash1 = 1; hash1 <= row; hash1++){
            cout << "#";
        }
        for (int space2 = 1; space2 <= 4*(4-row); space2++){
            cout << " ";
        }
        for (int hash2 = 1; hash2 <= row; hash2++){
            cout << "#";
        }
        cout << "\n";
    }

    for (int row2 = 1; row2 <= 4; row2++){
        for (int space3 = 1; space3 <= 4 - row2; space3++){
            cout << " ";
        }
        for (int hash3 = 1; hash3 <= 5 - row2; hash3++){
            cout << "#";
        }
        for (int space4 = 1; space4 <= 4*(row2-1); space4++){
            cout << " ";
        }
        for (int hash4 = 1; hash4 <= 5 - row2; hash4++){
            cout << "#";
        }
        cout << "\n";
    }

}