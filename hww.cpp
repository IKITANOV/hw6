# hw6
#include <iostream>

using namespace std;

void obmin(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10;
    int y = 20;
    obmin(&x, &y);
    cout << x << " " << y << "\n";
    return 0;
}
