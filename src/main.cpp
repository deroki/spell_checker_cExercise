#include <iostream>
#include "dictionary.h"
#include "parser.h"

using namespace  std;

int main() {
    try {
        std::cout << "scheck version 1" << endl;
        Dictionary d("data/mydict.dat");

        ifstream sub("data/sub1.txt");
        if ( !sub.is_open()){
            throw ScheckError("could not open sub file");
        }

        Parser p(sub);

        string word;
        while( ( word = p.NextWord() ) != "") {
            if (d.check( word )) {
                cout << word << " is OK\n";
            }
            else{
                cout << word << " is misspelled\n";
            }
        }
    }
    catch ( const ScheckError& e) {
        cerr << "Error: " << e.what() << endl;
    }

}
