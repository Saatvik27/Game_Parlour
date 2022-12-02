#include<stdio.h>
int main(){
    char word[100],hint[100];
    printf("Enter a word : ");
    gets(word);
    printf("Enter a hint :");
    gets(hint);
    int size=0;
    int guess[6];
    for(int i=0;i!='\0';i++){
        size+=1;
    }
    for(int j=0;j<size;j++){
        printf("_ ");
    }
    printf("You will have 6 guesses till hangman dies .\n" );
    for(int i=0;i<6;i++){
        printf("Enter Guess : ");
        scanf("%c",&guess[i]);
        for(int j=0;s!=)
    }
    return 0;
}

