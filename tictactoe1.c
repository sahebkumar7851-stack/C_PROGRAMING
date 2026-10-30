#include<stdio.h>
int main (){
    char board[9] = {'1','2','3','4','5','6','7','8','9'};
    int moves =0, i,position,winner=0;
    char player = 'x'; 
    while(moves<9 && winner == 0){
        printf("\n");
        printf(" %c | %c | %c\n",board[0],board[1],board[2]);
        printf("---|---|---\n");
        printf(" %c | %c | %c\n",board[3],board[4],board[5]);
        printf("---|---|---\n");
        printf(" %c | %c | %c\n",board[6],board[7],board[8]);

        printf("player %c,position(1-9) :",player);
        scanf ("%d",&position);

        if(position<1 ||position>9 || board[position-1] == 'x' || board[position-1] == '0'){
            printf("Invalid move! Try again.\n");
            continue;
        }

        board[position-1] = player;
        moves++;
        for(i=0; i<3; i++){
            if (board[i*3] == player && board[i*3+1] == player && board[i*3+2] == player){
                winner = 1;
            }
            if (board[i] == player && board[i+3] == player && board[i+6] == player){
                winner = 1;
            }
        }
        if (board[0] == player&& board[4] == player && board[8] == player){
            winner = 1;
        }
        if (board[2] == player && board[4] == player && board[6] == player){
            winner = 1;
        }
        if(winner == 0){
            if(player == 'x'){
                player = '0';
            }
            else{
                player = 'x';
            }
        }
    }
    printf("\n");
    printf(" %c | %c | %c\n",board[0],board[1],board[2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n",board[3],board[4],board[5]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n",board[6],board[7],board[8]);

    if(winner == 1){
        printf("player %c wins!",player);
    }
    else{
            printf("It's a draw");
        }
    return 0;
}