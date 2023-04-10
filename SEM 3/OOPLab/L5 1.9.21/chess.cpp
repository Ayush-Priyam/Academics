#include <iostream>
using namespace std;

void line(int k)
{
    for (int i = k; i < 8+k; i++)
    {
        if(i%2) cout<<"BLACK\t";
        else cout<<"WHITE\t";
    }
}
void pawn()
{
    for(int i=0;i<8;i++)
        cout<<"Pawn\t";
    cout<<endl;
}
void pieces()
{
    cout<<"Rook\tKnight\tBishop\tQueen\tKing\tBishop\tKnight\tRook"<<endl;
}
int main()
{
    int i,j;
    cout<<"\t\t -----BLACK SIDE-------"<<endl;
    for(i=0;i<8;i++)
    {
        line(i);
        cout<<"\n";
        if (i == 0|| i == 7) pieces();
        if(i==1||i==6) pawn(); 
        cout << "\n";
    }
    cout<<"\t \t ------WHITE SIDE----"<<endl;
    return 0;
}