#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char **argv) {

    // ostream &myout = (argc > 1 ? *(new ofstream(argv[1])) : cout);
    ostream *pmyout;
    if (argc > 1) {
        pmyout = new ofstream(argv[1]);
    } else {
        pmyout = &cout;
    }
    ostream &myout = *pmyout;

    myout << "Printing text to somewhere." << endl;
    
    if (pmyout != &cout) {
        delete pmyout;
    }
}