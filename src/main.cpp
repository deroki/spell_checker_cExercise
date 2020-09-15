#include <iostream>
#include "dictionary.h"
using namespace  std;

int main() {
    try {
        std::cout << "scheck version 1" << endl;
        Dictionary d("data/mydict.dat");
        string word = "dog";
        while (getline(cin, word)) {
            if (d.check(word)) {
                cout << word << "is ok\n";
            } else {
                cout << word << " is misspelt\n";
            }
        }
    }
    catch ( const ScheckError& e) {
        cerr << "Error: " << e.what() << endl;
    }

}
