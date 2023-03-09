#include <iostream>
#include <vector>
#include <iterator>
#include <charconv>
using namespace std;


using std::cout; using std::vector;
using std::endl; using std::copy;
using std::cin;

int main() {
    //This part of the program takes in the user input into a vector for later conversion.
    int input, n;
    vector<int> V;
    cout << "Enter the number ascii values you wish input: ";
    cin >> n;
    cout << "Enter your ascii values to be evaluated by the program: " << endl;
    for (int i = 0;i < n;i++) {
        cin >> input;
        V.push_back(input);
    }
    (V);
    //End of user input section.
    
    //This section of the program converts the before entered ascii values into their respected symbols.
    vector<char> chars {};

    chars.reserve(V.size());
    for (auto &n : V) {
        chars.push_back(n);
    }
    
    copy(chars.begin(), chars.end(),
              std::ostream_iterator<char>(cout, "  "));

    return EXIT_SUCCESS;
}
//End of program.