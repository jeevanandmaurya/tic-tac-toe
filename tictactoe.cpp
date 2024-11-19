#include <iostream>

using namespace std;


void printBoard(int entries[],char playerChar[]){

    for (int i = 0; i < 9; i++)
    {
        if ((i+1)%3==0){

            cout<<" "<<playerChar[entries[i]]<<endl;
        }else{
             cout<<" "<<playerChar[entries[i]];
        }
    }
    


}



int main()
{

    int moves = 0;
    // 1-O 2-X
    int turn = 1;
    int GameEnd = 0;//0-not decided,1-plyr1,2-plyr2,3-draw
    char playerChar[] = {'_', 'O', 'X'};

    cout << "Positions\n1 2 3\n4 5 6\n7 8 9\n";

    cout << "\nGame Started\n";

    int entries[9];
    for (int i = 0; i < 9; i++)
    {
        // 0-empty 1-O 2-X
        entries[i] = 0;
    }
    printBoard(entries,playerChar);
    int enteredPos;

    while (!GameEnd)
    {
        
    }
    

    return 0;
}