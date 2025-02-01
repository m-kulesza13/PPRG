#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main()
{
    cout<<"Przejdz Labirynt"<<endl<<"Wskazówki odnośnie poruszania się:"<<endl<<"l - krok w lewo"<<endl<<"p - krok w prawo"<<endl<<"d - krok w dół"<<endl<<"g - krok w góre"<<endl;
    cout<<"Nacisniety klawisz: "<<endl;
    string labirynt [10];
    labirynt [0] = "####################";
    labirynt [1] = "###   ##############";
    labirynt [2] = "### #  ##   ########";
    labirynt [3] = "### ##    # ########";
    labirynt [4] = "$   ####### ###### @";
    labirynt [5] = "#########   ###### #";
    labirynt [6] = "######### #######  #";
    labirynt [7] = "#########     ##  ##";
    labirynt [8] = "#############    ###";
    labirynt [9] = "####################";
    for (int i=0; i<=9; i++)
        {
            cout<<labirynt[i]<<endl;
        }
    int graczX, graczY, start_labiryntu=4;
    graczX = 0;
    graczY = 4;
    gotoxy(graczX, start_labiryntu+graczY);
    cout<<"X";
    while (labirynt[graczY][graczX]!='@')
    {
        gotoxy(0,8);
        cout<<"$";         
        gotoxy(20, 3);
        char klawisz;
        cin>>klawisz;   
        switch (klawisz)
        {
            case 'g':
                if(labirynt[graczY-1][graczX] == ' ' || labirynt[graczY-1][graczX] == '@')
                {
                    gotoxy(graczX, start_labiryntu+graczY);
                    cout<<" ";
                    graczY = graczY -1; 
                    gotoxy(graczX, start_labiryntu+graczY);
                    cout<<"X";
                }
                    break;
            case 'd':
                if(labirynt[graczY+1][graczX] == ' ' || labirynt[graczY+1][graczX] == '@')
                {
                    gotoxy(graczX, start_labiryntu+graczY);
                    cout<<" ";
                    graczY = graczY +1; 
                    gotoxy(graczX, start_labiryntu+graczY);
                    cout<<"X";
                }
                break;
            case 'p':
                if(labirynt[graczY][graczX+1] == ' ' || labirynt[graczY][graczX+1] == '@')
                {   
                    gotoxy(graczX, start_labiryntu+graczY);
                    cout<<" ";
                    graczX = graczX +1; 
                    gotoxy(graczX, start_labiryntu+graczY);
                    cout<<"X";
                }
                break; 
            case 'l':
                if(labirynt[graczY][graczX-1] == ' ' || labirynt[graczY][graczX-1] == '@')
                {
                    gotoxy(graczX, start_labiryntu+graczY);
                    cout<<" ";
                    graczX = graczX -1; 
                    gotoxy(graczX, start_labiryntu+graczY);
                    cout<<"X";
                }
                break;       
        }     
    }

    gotoxy(11,13);
    cout<<endl<<"Gratulacje udało ci się pokonać labirynt!";
    return 0;
}