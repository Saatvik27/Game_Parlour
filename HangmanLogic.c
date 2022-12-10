#include<stdio.h>
#include<string.h>
int main(){
    char word[100],hint[100];
    printf("Enter a word : ");
    gets(word);
    printf("Enter a hint :");
    gets(hint);
    int size=0;
    char guess[100];
    for(int i=0;word[i]!='\0';i++){
        size+=1;
    }
    printf("You will have 6 guesses till hangman dies .\n" );
    printf("Your hint is : %s\n",hint);
    for(int j=0;j<size;j++){
        printf("_");
    }
    printf("\n");
    int x;
    if(size>6){
        x=size;
    }
    else{
        x=6;
    }
    char g[100];
    for(int i=0;i<size;i++){
        g[i]='_';
    }
    int count=0;
    for(int i=0;i<x;i++){
        if(strcmp(g,word)==0){
            break;
        }
        else{
        printf("Enter Guess : ");
        scanf("%s",&guess[i]);
        for(int j=0;word[j]!='\0';j++){
            if(guess[i]==word[j]){
                g[j]=guess[i];
            }
        }
        printf("%s",g);
        printf("\n");
        }
    }

    return 0;
}


