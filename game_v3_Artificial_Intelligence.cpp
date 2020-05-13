#include <iostream>
#include <math.h>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
char playa1[12];
char playa2[12];
int amount;
int size;
char yyyyy[12];
bool ii;
int h = 0;
void clrscr(){
    for(int i = 0; i < 40; i++){
cout<<"\n";
}
}

void printboard(char board[]){

    for (int i = 0; i < size; i++) {
            cout <<"    ";
        for (int j = 0; j < size; j++) {
           cout <<"| " << board[i * size + j];
        }
        cout <<"|";
        cout <<"\n    ";
        if (i != size-1) {
        for (int x = 0; x < size * 3 + 1; x++)
            cout <<"-";
        cout <<"\n";
        }
    }
}

    int do_turn(char board[]){
         switch (amount){
    case 1:{
        cout << "     1 | 2 | 3 " << endl;
        cout << "     4 | 5 | 6      <- Your options" << endl;
        cout << "     7 | 8 | 9 \n" << endl;

        int turn;
        cin >> turn;
        while(turn > size * size || turn < 1 || board[turn-1]!= ' '){
            cout << "\nEnter number of empty cell\n"<< endl;
            cin >> turn;
        } return turn;
        }
    case 2:{
        cout << "     1 |  2 |  3 |  4 | 5" << endl;
        cout << "     6 |  7 |  8 |  9 | 10" << endl;
        cout << "     11| 12 | 13 | 14 | 15    <- Your options" << endl;
        cout << "     16| 17 | 18 | 19 | 20" << endl;
        cout << "     21| 22 | 23 | 24 | 25\n" << endl;

        int turn;
        cin >> turn;
        while(turn > size * size || turn < 1 || board[turn-1]!= ' '){
            cout << "\nEnter number of empty cell\n"<< endl;
            cin >> turn;
        } return turn;
        }
    case 3:{
        cout << "     1 |  2 |  3 |  4 |  5 |  6 |  7  " << endl;
        cout << "     8 |  9 | 10 | 11 | 12 | 13 | 14  " << endl;
        cout << "     15| 16 | 17 | 18 | 19 | 20 | 21  " << endl;
        cout << "     22| 23 | 24 | 25 | 26 | 27 | 28      <- Your options" << endl;
        cout << "     29| 30 | 31 | 32 | 33 | 34 | 35  " << endl;
        cout << "     36| 37 | 38 | 39 | 40 | 41 | 42  " << endl;
        cout << "     43| 44 | 45 | 46 | 47 | 48 | 49 \n " << endl;

        int turn;
        cin >> turn;
        while(turn > size * size || turn < 1 || board[turn-1]!= ' '){
            cout << "\nEnter number of empty cell\n"<< endl;
            cin >> turn;
        } return turn;
        }
}
}

    bool victory(int r, char board[]){
        char p;
        if (r % 2 == 0)
            p = 'X';
        else
            p = '0';

        int c = 0;

        for (int i = 0; i < size; i++){
            for (int j = 0; j < size; j++){
                if(board[i * size + j] == p)
                    c++;
                else
                    break;
            }
            if (c == size)
                    return true;
            c = 0;
        }

         for (int i = 0; i < size; i++){
            for (int j = 0; j < size; j++){
                if(board[j * size + i] == p)
                    c++;
                else
                    break;
            }
            if (c == size)
                    return true;
            c = 0;
        }

        for (int i = 0; i < size; i++) {
            if (board[i * size + i] == p)
                c++;
            else
                break;
        }
        if (c == size)
            return true;
        c = 0;

        for (int i = 0; i < size; i++) {
            if (board [i * size  + size - i - 1] == p)
                c++;
            else
                break;
        }
        if (c == size)
            return true;

        return false;
    }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    int II_turn(char board[]) {
        int turn = 15;
        int counter = 0;

         for (int i = 0; i < size; i++){
            for (int j = 0; j < size; j++){
               if (board[i * size + j] == '0' )
                    counter++;
                if(board[i * size + j] == ' ')
                    turn = i * size + j;
            }
            if (counter == size-1 & turn != 15){
                    cout<<"for 1\n";
                return turn + 1;
                }
            counter = 0;
            turn = 15;
        }

        for (int i = 0; i < size; i++){
            for (int j = 0; j < size; j++){
               if (board[j * size + i] == '0' )
                    counter++;
                if(board[j * size + i] == ' ')
                    turn = j * size + i;
            }
            if (counter == size-1 & turn != 15){
                    cout<<"for 2\n";
                return turn + 1;}
            counter = 0;
            turn = 15;
        }

        for (int i = 0; i < size; i++){
            for (int j = 0; j < size; j++){
               if (board[i * size + j] == 'X' )
                    counter++;
                if(board[i * size + j] == ' ')
                    turn = i * size + j;
            }
            if (counter = size-1 & turn != 15){
                cout<<"for 3\n";
                return turn + 1;}
            counter = 0;
            turn = 15;
        }

        for (int i = 0; i < size; i++){
            for (int j = 0; j < size; j++){
               if (board[j * size + i] == 'X' )
                    counter++;
                if(board[j * size + i] == ' ')
                    turn = j * size + i;
            }
            if (counter == size-1 & turn != 15){
                    cout<<"for 4\n";
                return turn + 1;}
            counter = 0;
            turn = 15;
        }


        for (int i = 0; i < size; i++){
            for (int j = 0; j < size; j++){
               if (board[i * size + j] == '0' )
                    counter++;
                if(board[i * size + j] == ' ')
                    turn = i * size + j;
            }
            if (counter > 0 & turn != 15){
                cout<<"for 5\n";
                return turn + 1;}
            counter = 0;
            turn = 15;
        }

        for (int i = 0; i < size; i++){
            for (int j = 0; j < size; j++){
               if (board[j * size + i] == '0')
                    counter++;
                if(board[j * size + i] == ' ')

                    turn = j * size + i;
            }

            if (counter > 0 & turn != 15) {
                    cout<<"for 6\n";
                return turn + 1;
            }
            counter = 0;
            turn = 15;
        }


    return 9;
    }

    int main(){
    cout << "\n   Welcome to the Sacred Game of Crosses and Zeroes, or how foolish ones call it - tic tac toe.\n\n\n  What amount of cells board do You wanna play on?\n\n  1) 3x3  2) 5x5   3) 7x7\n" << endl;
    cin >>amount;

    while ( amount != 1 & amount != 2 & amount != 3) {
        cout <<"\nType only 1, 2 or 3\n"<< endl;
        cin >>amount;
    }
        switch(amount) {
        case 1: size = 3;
        break;
        case 2: size = 5;
        break;
        case 3: size = 7;
        }

    char board[size * size];

    for (int i = 0; i < size * size; i++) {
        board[i] = ' ';
    }



cout << "\n Player 1, enter your name"<<endl;
cin >> playa1;
cout <<" Now you, Player 2"<< endl;
cin >> playa2;

if (true) {
    ii = true;
}
    printboard(board);
    for (int i = 0; i < size * size; i++){

        if (i%2 == 0){
             cout <<"\n    it's "<< playa1 <<"'s turn \n"<< endl;}
            else{
                 cout <<"\n    it's "<< playa2<<"'s turn \n"<< endl;;
            }
        int turn = 9;
        if (ii == true & i%2 == 1) {
            turn = II_turn(board);

        }
        else
            turn = do_turn(board);
         if (ii == true & i%2 == 1) {
          cout <<"\nBot's move is "<< turn<<"\n" << endl;
        }
        else
            cout <<"\nYour move is "<< turn<<"\n" << endl;
        clrscr();
        if (i%2 == 0){
            board[turn-1]='X';}
            else{
                board[turn-1]='0';}
            printboard(board);
            if (victory(i, board)) {
                cout <<"\n\n    GAME OVER!\n" << endl;
                if (i % 2 == 0){
                    cout << "    "<< playa1<< " wins!" << endl;
                    ofstream fout("Who is winner.txt");
                    fout << "Winner is " << playa1;
                    fout.close();
                    return 0;
                }
                else{
                    cout << "    "<< playa2<< " wins!" << endl;
                    ofstream fout("Who is winner.txt");
                    fout << "Winner is " << playa2;
                    fout.close();
                    return 0;
                }
            }
    }
     ofstream fout("Who is winner.txt");
    fout << "No winner for taday, son. It's a draw...";
    fout.close();
    cout << "\n    IT'S A DRAW"<<endl;
    return 0;

}

