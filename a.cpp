#include <iostream>
using namespace std;
int main() {
    int jum = 40;
    string nama[jum];
    string nim[jum];
    float persentasehadir[jum];
    for (int i = 0; i < jum; i++) {
        cin >> nama[i];
        cin >> nim[i];
        cin >> persentasehadir[i];
    }
    for (int i = 0; i < jum; i++) {
        cout << nama[i] << " " << nim[i] << " " << persentasehadir[i] << "%" << endl;
    }
}
