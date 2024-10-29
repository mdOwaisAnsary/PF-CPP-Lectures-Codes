#include <iostream>

// cstdlib is needed for atoi()
#include <cstdlib>

using namespace std;

int main() {

    // declaring and initializing character array
    char str[] = "456";
    int num = atoi(str);

   cout << "num = " << num;
    
    return 0;
}
