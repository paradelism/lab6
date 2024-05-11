#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int sum=0;
    int desatky, sotni, odynytsi;
    for (int i = 100; i < 1000; i++) {
        odynytsi = (i % 10);
        desatky = (i % 100) / 10;
        sotni = i / 100;
        if (odynytsi == desatky || odynytsi == sotni || desatky == sotni) {
            sum++;
        }
    }
    cout << sum;

    return 0;
}
