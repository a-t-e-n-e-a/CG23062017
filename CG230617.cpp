#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

struct move {
	string atype;
	int perso;
	string dir1;
	string dir2;

	move(string a, int p, string d1, string d2){
		atype=a;
		perso=p;
		dir1=d1;
		dir2=d2;
	}

	move(){
		atype="";
		perso=-1;
		dir1="T";
		dir2="T";
	}

};

int main()
{
	//map<int, move> mymoves;
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
            //mymoves.emplace(i,move(atype,index,dir1,dir2));
        }
        cout << atype << " " << index << " " << dir1 << " " << dir2 << endl;
    }
}
