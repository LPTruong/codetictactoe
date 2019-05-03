
#include<iostream>
using namespace std;

char square[10] = {'o','1','2','3','4','5','6','7','8','9'};

int check();
void board();

int main()
{
	int player = 0;
	int i,choice;

    char tick;
    do
    {
        board();
        if (player%2)
            player =1;
        else
            player=2;
        cout << "Nguoi " << player << " chon vi tri:  ";

        cin >> choice;


        tick=(player == 1) ? 'T' : 'M';

        if (choice == 1 && square[1] == '1')

            square[1] = tick;
        else if (choice == 2 && square[2] == '2')

            square[2] = tick;
        else if (choice == 3 && square[3] == '3')

            square[3] = tick;
        else if (choice == 4 && square[4] == '4')

            square[4] = tick;
        else if (choice == 5 && square[5] == '5')

            square[5] = tick;
        else if (choice == 6 && square[6] == '6')

            square[6] = tick;
        else if (choice == 7 && square[7] == '7')

            square[7] = tick;
        else if (choice == 8 && square[8] == '8')

            square[8] = tick;
        else if (choice == 9 && square[9] == '9')

            square[9] = tick;
        else
        {
            cout<<"\aNhap sai ";

            player--;
            cin.ignore();
            cin.get();
        }
    player++;
    i=check();
    }while(i==-1);
    board();
    if(i==1)

        cout<<"==>\aNguoi "<<player-1<<" thang ";
    else
        cout<<"==>\aHoa roi";

    return 0;
}
// kieu tra thang thua
// 1 tro choi ket thuc va co ket qua
// 0 tro choi ket thuc va hoa
// -1 tro choi van tiep tuc
int check()
{
    if (square[1] == square[2] && square[2] == square[3])

        return 1;
    else if (square[4] == square[5] && square[5] == square[6])

        return 1;
    else if (square[7] == square[8] && square[8] == square[9])

        return 1;
    else if (square[1] == square[4] && square[4] == square[7])

        return 1;
    else if (square[2] == square[5] && square[5] == square[8])

        return 1;
    else if (square[3] == square[6] && square[6] == square[9])

        return 1;
    else if (square[1] == square[5] && square[5] == square[9])

        return 1;
    else if (square[3] == square[5] && square[5] == square[7])

        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
                    && square[4] != '4' && square[5] != '5' && square[6] != '6'
                  && square[7] != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return -1;
}

// tao bang tic tac toe
void board()
{
    //xoa man hinh ban dau de de nhin
    system("cls");
    cout << "\n\n\n\t  Tic Tac Toe\n\n\n";

    cout <<"   Nguoi 1 (T)  <==>  Nguoi 2 (M)" << endl << endl << endl;
    cout << endl;
    cout << "\t     |     |     " << endl;
    cout << "\t  " << square[7] << "  |  " << square[8] << "  |  " <<square[9] << endl;

    cout << "\t_____|_____|_____" << endl;
    cout << "\t     |     |     " << endl;

    cout << "\t  " << square[4] << "  |  " << square[5] << "  |  " <<square[6] << endl;

    cout << "\t_____|_____|_____" << endl;
    cout << "\t     |     |     " << endl;

    cout << "\t  " << square[1] << "  |  " << square[2] << "  |  " <<square[3] << endl;

    cout << "\t     |     |     " << endl << endl;
}
