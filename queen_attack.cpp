//Trikidou Eleonora

/*Given the position of two queens on a chess board, indicate whether or not they are positioned so that they can attack each other.

In the game of chess, a queen can attack pieces which are on the same row, column, or diagonal.

A chessboard can be represented by an 8 by 8 array.
*/

#include <iostream>

using namespace std;

int main()
{

    int row1, row2, col1, col2;
    cin >> row1;
    cin >> col1;
    cin >> row2;
    cin >> col2;

    if(row1>=0 && row1 <=7 && row2>=0 && row2 <=7 && col1>=0 && col1 <=7 && col2>=0 && col2<=7)
    {
       if(row1==row2 || col1==col2)
         cout << "Yes!The two queens can attack each other" << endl;
       else if(abs(row1-row2)==abs(col1-col2))
         cout << "Yes!The two queens can attack each other" << endl;
       else
         cout <<"No!The two queens cannot attack each other"<<endl;

    }

    return 0;
}
