#include <iostream>
using namespace std;

int power(int baseNum, int powNum) {
    int result = 1;
    
    for (int i = 0; i < powNum;i++) {
        result = result * powNum;

    }    
    return result;

}

int main() {

    cout << power(8, 3);
    
    return 0;
}
