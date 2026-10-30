#include<stdio.h>
#include<string.h>
int main(){
    char word[] = "APPLE";
    int i=0,a=0,len;
    len=strlen(word);
    char guess[len];
    for(i; i<len; i++){
        printf("_ ");
    }
    printf("%d %c\n",len,word[0]);
    while(a<len){
        printf("enter guess letter :");
        scanf ("%c",guess[a]);
        if(guess[a]==word[a]){
            printf("right\n");
        }
        i++;
        
    }
    return 0;
}