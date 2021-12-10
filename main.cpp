
#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int pos;
    char n[10][20], f[1][20];
    for (int i=0; i<10; i++){
        cin >> n[i];
    }
    cin >> f[0];

    if (ricerca(n, f, pos)){
        cout << pos << endl;
    }else{
        cout << "non presente" << endl;
    }
    return 0;
}
