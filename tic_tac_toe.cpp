#include<iostream>
using namespace std;
void draw();
void player1();
void player2();
bool X_wins();
bool O_wins();
char ch[9]={'1','2','3','4','5','6','7','8','9'};int num1,num2;
int main()
{
    do
    {
        draw();
        player1();
        draw();
       if(X_wins())
        {
            cout<<"\n\t\t-----Player 1 WINS !!!!!-----";break;
        }
        player2();
        draw();
        if(O_wins())
        {
             cout<<"\n\t\t-----Player 2 WINS !!!!!-----";break;
        }
    } while(true);
}
void draw()
{
    cout<<"\n\t\t\t----------TIC TAC TOE GAME----------";
    cout<<"\n\tPlayer 1 : X\n\tPlayer 2 : O";
    cout<<endl<<endl;
    cout<<"\t\t\t\t"<<ch[0]<<"  |  "<<ch[1]<<"  |  "<<ch[2]<<"\n";
    cout<<"\t\t\t\t--------------\n";
    cout<<"\t\t\t\t"<<ch[3]<<"  |  "<<ch[4]<<"  |  "<<ch[5]<<"\n";
    cout<<"\t\t\t\t--------------\n";
    cout<<"\t\t\t\t"<<ch[6]<<"  |  "<<ch[7]<<"  |  "<<ch[8]<<"\n";
}
void player1()
{
    cout<<"\nPlayer 1 : Enter Number (1-9) : ";
    cin>>num1;
    switch(num1)
    {
        case 1 : ch[0]='X';break;
        case 2 : ch[1]='X';break;
        case 3 : ch[2]='X';break;
        case 4 : ch[3]='X';break;
        case 5 : ch[4]='X';break;
        case 6 : ch[5]='X';break;
        case 7 : ch[6]='X';break;
        case 8 : ch[7]='X';break;
        case 9 : ch[8]='X';break;
        default : cout<<"\nPlease Enter Valid Choice : ";player1();break;
    }
}
void player2()
{
    cout<<"\nPlayer 2 : Enter Number (1-9) : ";
    cin>>num2;
    switch(num2)
    {
        case 1 : ch[0]='O';break;
        case 2 : ch[1]='O';break;
        case 3 : ch[2]='O';break;
        case 4 : ch[3]='O';break;
        case 5 : ch[4]='O';break;
        case 6 : ch[5]='O';break;
        case 7 : ch[6]='O';break;
        case 8 : ch[7]='O';break;
        case 9 : ch[8]='O';break;
        default : cout<<"\nPlease Enter Valid Choice : ";player2();break;
    }
}
bool X_wins()
{
    if(ch[0]=='X' && ch[1]=='X' && ch[2]=='X')
    return true;
    else if(ch[3]=='X' && ch[4]=='X' && ch[5]=='X')
    return true;
    else if(ch[6]=='X' && ch[7]=='X' && ch[8]=='X')
    return true;
    else if(ch[0]=='X' && ch[4]=='X' && ch[8]=='X')
    return true;
    else if(ch[0]=='X' && ch[3]=='X' && ch[6]=='X')
    return true;
    else if(ch[1]=='X' && ch[4]=='X' && ch[7]=='X')
    return true;
    else if(ch[2]=='X' && ch[5]=='X' && ch[8]=='X')
    return true;
    else if(ch[2]=='X' && ch[4]=='X' && ch[6]=='X')
    return true;
    else 
    {
        return false;
        cout<<"\n\t-----DRAW-----";
    }
    
}
bool O_wins()
{
    if(ch[0]=='O' && ch[1]=='O' && ch[2]=='O')
    return true;
    else if(ch[3]=='O' && ch[4]=='O' && ch[5]=='O')
    return true;
    else if(ch[6]=='O' && ch[7]=='O' && ch[8]=='O')
    return true;
    else if(ch[0]=='O' && ch[4]=='O' && ch[8]=='O')
    return true;
    else if(ch[0]=='O' && ch[3]=='O' && ch[6]=='O')
    return true;
    else if(ch[1]=='O' && ch[4]=='O' && ch[7]=='O')
    return true;
    else if(ch[2]=='O' && ch[5]=='O' && ch[8]=='O')
    return true;
    else if(ch[2]=='O' && ch[4]=='O' && ch[6]=='0')
    return true;
    else
    {
        return false;
        cout<<"\n\t-----DRAW-----";
    }
}