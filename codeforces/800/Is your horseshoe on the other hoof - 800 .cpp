#include <iostream>
#include <set>
using namespace std;

int main() {
    set <int> number;
    for(int i =0;i<4;i++){
        int j;
        cin>>j;
        number.insert(j);
    }
    cout << 4-number.size() << endl;
    return 0;
}