#include<stdio.h>
int main (){
    char board[9] = {'1','2','3','4','5','6','7','8','9'};
    int moves=0,position,winner=0;
    char player = 'x';
    while(winner == 0 && moves<9){
        printf(" %c | %c | %c \n",board[0],board[1],board[2]);
        printf("---|---|---\n");
        printf(" %c | %c | %c \n",board[3],board[4],board[5]);
        printf("---|---|---\n");
        printf(" %c | %c | %c \n",board[6],board[7],board[8]);

        printf("player %c,enter position(1-9) :",player);
        scanf("%d",&position);

        if(position<1 || position>9 || board[position-1]=='x' || board[position-1]=='0'){
            printf("\ninvalid moves,try again!\n");
            continue;
        }
         board[position-1]=player;

        if(board[0]==player && board[3]==player && board[6]==player){
            winner=1;
        }
        if(board[1]==player && board[4]==player && board[7]==player){
            winner=1;
        }
        if(board[2]==player && board[5]==player && board[8]==player){
            winner=1;
        }
        if(board[0]==player && board[1]==player && board[2]==player){
            winner=1;
        }
        if(board[3]==player && board[4]==player && board[5]==player){
            winner=1;
        }
        if(board[6]==player && board[7]==player && board[8]==player){
            winner=1;
        }
        if(board[2]==player && board[4]==player && board[6]==player){
            winner=1;
        }
        if(board[0]==player && board[4]==player && board[8]==player){
            winner=1;
        }
        if(winner==0){
         if(player=='x'){
            player='0';
         }
         else{
            player='x';
        }
       }
       moves++;
    }
    printf(" %c | %c | %c \n",board[0],board[1],board[2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n",board[3],board[4],board[5]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n",board[6],board[7],board[8]);
    if(winner == 1){
        printf("player %c,Wins!",player);
    }
    else{
        printf("It's a draw!");
    }
    return 0;
}