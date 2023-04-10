#include <bits/stdc++.h>
using namespace std;

class CreateBoard
{
private:
    string b = "Black";
    string w = "White";

    enum color
    {
        black,
        white
    };

    void ColorLine(int a)
    {

        for (int i = 0; i < 8; i++)
        {
            a == 1 ? (i % 2 != 0 ? cout << setw(7) << b : cout << setw(7) << w) : (i % 2 == 0 ? cout << setw(7) << b : cout << setw(7) << w);
        }
        cout << endl;
    }
    void PawnLine()
    {
        for (int i = 0; i < 8; i++)
        {
            cout << setw(7) << "Pawn";
        }
        cout << endl
             << endl;
    }
    void EmptyLine()
    {
        for (int i = 0; i < 8; i++)
        {
            cout << setw(7) << "";
        }
        cout << endl
             << endl;
    }
    void StartLine()
    {
        cout << setw(7) << "Rook" << setw(7) << "Bishop" << setw(7) << "Bishop" << setw(7) << "Queen" << setw(7) << "King" << setw(7) << "Bishop" << setw(7) << "Bishop" << setw(7) << "Rook";
        cout << endl
             << endl;
    }

public:
    CreateBoard()
    {
        ColorLine(white);
        StartLine();
        ColorLine(black);
        PawnLine();
        ColorLine(white);
        EmptyLine();
        ColorLine(black);
        EmptyLine();
        ColorLine(white);
        EmptyLine();
        ColorLine(black);
        EmptyLine();
        ColorLine(white);
        PawnLine();
        ColorLine(black);
        StartLine();
    }
};

int main()
{
    CreateBoard FirstBoard;
    return 0;
}