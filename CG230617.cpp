#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int size;
    cin >> size; cin.ignore();
    int unitsPerPlayer;
    cin >> unitsPerPlayer; cin.ignore();
    string row;
    string atype;
    int index;
    string dir1;
    string dir2;
    int unitX;
    int unitY;
    int otherX;
    int otherY;
    int legalActions;
    // game loop
    while (1) {
        for (int i = 0; i < size; i++) {
            cin >> row; cin.ignore();
        }
        for (int i = 0; i < unitsPerPlayer; i++) {
            cin >> unitX >> unitY; cin.ignore();
        }
        for (int i = 0; i < unitsPerPlayer; i++) {
        	cin >> otherX >> otherY; cin.ignore();
        }
        cin >> legalActions; cin.ignore();
        for (int i = 0; i < legalActions; i++) {
            cin >> atype >> index >> dir1 >> dir2; cin.ignore();
        }
        cout << atype << " " << index << " " << dir1 << " " << dir2 << endl;
    }
}
