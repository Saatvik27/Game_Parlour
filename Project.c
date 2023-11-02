#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int hangman(int x){
if(x==0){
printf("__________________\n");
printf("\t|\n");
printf("\t|\n");
printf("     ________\n");
printf("    |        |\n");
printf("    |        |\n");
printf("    |        |\n");
printf("    |________|\n");
printf("\t|\n");
printf("       /|\\\n");
printf("      / | \\\n");
printf("     /  |  \\\n");
printf("    /   |   \\\n");
printf("\t|\n");
printf("       / \\\n");
printf("      /   \\\n");
printf("     /     \\\n");
printf("    /       \\\n");
}
else if(x==1){
printf("__________________\n");
printf("\t|\n");
printf("\t|\n");
printf("     ________\n");
printf("    |        |\n");
printf("    |        |\n");
printf("    |        |\n");
printf("    |________|\n");
printf("\t|\n");
printf("       /|\\\n");
printf("      / | \\\n");
printf("     /  |  \\\n");
printf("    /   |   \\\n");
printf("\t|\n");
printf("         \\\n");
printf("          \\\n");
printf("           \\\n");
printf("            \\\n");
}

else if(x==2){
printf("__________________\n");
printf("\t|\n");
printf("\t|\n");
printf("     ________\n");
printf("    |        |\n");
printf("    |        |\n");
printf("    |        |\n");
printf("    |________|\n");
printf("\t|\n");
printf("       /|\\\n");
printf("      / | \\\n");
printf("     /  |  \\\n");
printf("    /   |   \\\n");
printf("\t|\n");
}

else if(x==3){
printf("__________________\n");
printf("\t|\n");
printf("\t|\n");
printf("     ________\n");
printf("    |        |\n");
printf("    |        |\n");
printf("    |        |\n");
printf("    |________|\n");
printf("\t|\n");
printf("       /|\n");
printf("      / | \n");
printf("     /  |  \n");
printf("    /   |   \n");
printf("\t|\n");
}

else if(x==4){
printf("__________________\n");
printf("\t|\n");
printf("\t|\n");
printf("     ________\n");
printf("    |        |\n");
printf("    |        |\n");
printf("    |        |\n");
printf("    |________|\n");
printf("\t|\n");
printf("        |\n");
printf("        | \n");
printf("        |  \n");
printf("        |   \n");
printf("\t|\n");
}

else if(x==5){
printf("__________________\n");
printf("\t|\n");
printf("\t|\n");
printf("     ________\n");
printf("    |        |\n");
printf("    |        |\n");
printf("    |        |\n");
printf("    |________|\n");}
else if(x==6){
printf("__________________\n");
printf("\t|\n");
printf("\t|\n");
printf("\n");

printf(" ___               __     __          __  __ \n");
printf("|      /\\  |\\  /| |      |  | \\    / |   |  |  \n");
printf("|  _  /__\\ | \\/ | |--    |  |  \\  /  |-- |--\\  \n");
printf("|__| /    \\|    | |__    |__|   \\/   |__ |   \\ \n");

}
return 0;}

int sudoku(){

 printf("   1 2 3 | 4 5 6 | 7 8 9\n");
 printf("\n");
 printf("1  . . 2 | . 1 . | . 7 .\n");
 printf("2  . . 8 | . 7 9 | 2 6 .\n");
 printf("3  . . . | . . 3 | . . 5\n");
 printf("  -------+-------+-------\n");
 printf("4  3 . . | 5 . 6 | . 8 .\n");
 printf("5  . . . | . 4 . | . . .\n");
 printf("6  . 7 . | 8 . 1 | . . 4\n");
 printf("  -------+-------+-------\n");
 printf("7  4 . . | 7 . . | . . .\n");
 printf("8  . 9 5 | 1 6 . | 3 . .\n");
 printf("9  . 2 . | . 5 . | 6 . .\n\n\n");
 }
int checkedmatrix(char m[10][5]){
    int flag;
    for(int i=0;i<10;i++){
        for(int j=0;j<5;j++){
            if(m[i][j]=='_'){
                flag=1;
                break;
            }
            else{
                flag=0;
            }
        }
    }
    return flag;
}
int checkadjacent(int x,int num[5]){
    int count;
   int  values[]={x-6,x-5,x-4,x-1,x,x+1,x+4,x+5,x+6};
    for(int i=0;i<5;i++){
        for(int j=0;j<9;j++){
            if(num[i]==values[j]){
                count++;
            }
        }
    }
    return count;

}
int wincase(char x, char m[3][3]){
int flag;
if(m[0][0]==x && m[0][1]==x && m[0][2]==x){
flag=1;
}
else if(m[0][0]==x && m[1][0]==x && m[2][0]==x){
flag=1;
}
else if(m[0][0]==x && m[1][1]==x && m[2][2]==x){
flag=1;
}
else if(m[2][0]==x && m[2][1]==x && m[2][2]==x){
flag=1;
}
else if(m[0][2]==x && m[1][2]==x && m[2][2]==x){
flag=1;
}
else if(m[0][2]==x && m[1][1]==x && m[2][0]==x){
flag=1;
}
else if(m[1][0]==x && m[1][1]==x && m[1][2]==x){
flag=1;
}
else if(m[0][1]==x && m[1][1]==x && m[2][1]==x){
flag=1;
}
else{
flag=0;
}
return(flag);
}
int filled(char m[3][3]){
int flag,count=0;
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
if(m[i][j]!='_'){
count++;
}
}
}
if(count==9){
flag=1;
}
else{
flag=0;
}
return flag;
}


int main(){
    FILE *fp;
    char line[10000];
    fp=fopen("instructions.txt","r");
    while(fgets(line,10000,fp) != NULL){
        printf ("%s\n",line);
    }
    fclose(fp);
    int op;
    printf("\n1: TicTacToe\n2: Minesweeper\n3: Sudoku\n4: Hangman\n");
    printf("Enter Option No. :");
    scanf("%d",&op);
    if(op==1){
printf("TIC TAC TOE\n");
char p1,p2;
printf("Select O/X for P1 :");
scanf("%s",&p1);
if(p1=='O'){
p2='X';
}
else if(p1=='X'){
p2='O';
}
printf(" 1 | 2 | 3 \n");
printf("---|---|---\n");
printf(" 4 | 5 | 6 \n");
printf("---|---|---\n");
printf(" 7 | 8 | 9 \n");
char matrix[3][3];
int num;
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
matrix[i][j]='_';
}
}
printf("\n");
for(int i=0;i<100;i++){
for(int j=0;j<100;j++){
if((wincase(p1,matrix)==1 || wincase(p2,matrix)==1) && filled(matrix)==1){
break;
}
else if((wincase(p1,matrix)==0 && wincase(p2,matrix)==0) && filled(matrix)==0){
printf("P1 : Enter Box Number - ");
scanf("%d",&num);
if(num==1 && matrix[0][0]=='_'){
matrix[0][0]=p1;
}
else if(num==2 && matrix[0][1]=='_'){
matrix[0][1]=p1;
}
else if(num==3 && matrix[0][2]=='_'){
matrix[0][2]=p1;
}
else if(num==4 && matrix[1][0]=='_'){
matrix[1][0]=p1;
}
else if(num==5 && matrix[1][1]=='_'){
matrix[1][1]=p1;
}
else if(num==6 && matrix[1][2]=='_'){
matrix[1][2]=p1;
}
else if(num==7 && matrix[2][0]=='_'){
matrix[2][0]=p1;
}
else if(num==8 && matrix[2][1]=='_'){
matrix[2][1]=p1;
}
else if(num==9 && matrix[2][2]=='_'){
matrix[2][2]=p1;
}
printf("\n");
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
if(j==0 || j==1){
printf(" %c |",matrix[i][j]);
}
else{
printf(" %c ",matrix[i][j]);
}
}
if(i==0 || i==1){
printf("\n---|---|---\n");
}
else{
printf("\n");
}
}
if(wincase(p1,matrix)!=1 && filled(matrix)==0){
printf("P2 : Enter Box Number - ");
scanf("%d",&num);
if(num==1 && matrix[0][0]=='_'){
matrix[0][0]=p2;
}
else if(num==2 && matrix[0][1]=='_'){
matrix[0][1]=p2;
}
else if(num==3 && matrix[0][2]=='_'){
matrix[0][2]=p2;
}
else if(num==4 && matrix[1][0]=='_'){
matrix[1][0]=p2;
}
else if(num==5 && matrix[1][1]=='_'){
matrix[1][1]=p2;
}
else if(num==6 && matrix[1][2]=='_'){
matrix[1][2]=p2;
}
else if(num==7 && matrix[2][0]=='_'){
matrix[2][0]=p2;
}
else if(num==8 && matrix[2][1]=='_'){
matrix[2][1]=p2;
}
else if(num==9 && matrix[2][2]=='_'){
matrix[2][2]=p2;
}
printf("\n");
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
if(j==0 || j==1){
printf(" %c |",matrix[i][j]);
}
else{
printf(" %c ",matrix[i][j]);
}
}
if(i==0 || i==1){
printf("\n---|---|---\n");
}
else{
printf("\n");
}
}
}
}
}
}
if(wincase(p1,matrix)==1){
printf("P1 Wins");
}
else if(wincase(p2,matrix)==1){
printf("P2 Wins");
}
else if(wincase(p1,matrix)==0 && wincase(p2,matrix)==0 && filled(matrix)==1){
printf("Draw");
}
}
else if(op==2){
    printf("Mine Sweeper\n");
    printf("|---|---|---|---|---|\n");
    printf("| 1 | 2 | 3 | 4 | 5 |\n");
    printf("|---|---|---|---|---|\n");
    printf("| 6 | 7 | 8 | 9 | 10|\n");
    printf("|---|---|---|---|---|\n");
    printf("| 11| 12| 13| 14| 15|\n");
    printf("|---|---|---|---|---|\n");
    printf("| 16| 17| 18| 19| 20|\n");
    printf("|---|---|---|---|---|\n");
    printf("| 21| 22| 23| 24| 25|\n");
    printf("|---|---|---|---|---|\n");
    printf("| 26| 27| 28| 29| 30|\n");
    printf("|---|---|---|---|---|\n");
    printf("| 31| 32| 33| 34| 35|\n");
    printf("|---|---|---|---|---|\n");
    printf("| 36| 37| 38| 39| 40|\n");
    printf("|---|---|---|---|---|\n");
    printf("| 41| 42| 43| 44| 45|\n");
    printf("|---|---|---|---|---|\n");
    printf("| 46| 47| 48| 49| 50|\n");
    printf("|---|---|---|---|---|\n\n");


    char matrix[10][5];
    for(int i=0;i<10;i++){
        for(int j=0;j<5;j++){
            matrix[i][j]='_';
        }
    }
    printf("\n|---|---|---|---|---|\n");
    for(int i=0;i<10;i++){
        printf(" ");
        for(int j=0;j<5;j++){
            printf(" %c |",matrix[i][j]);
        }
        printf("\n|---|---|---|---|---|\n");
    }
    printf("When you Enter a number , the box will display the number of adjacent boxes having mines otherwise it will display 0\n");
    int num[5],n;

    for (int i = 0; i <= 4; i++)  {
        num[i] = rand() % 50 + 1;
        }

        printf("%d %d %d %d %d\n",num[0],num[1],num[2],num[3],num[4]);
        int m[10][5]={{-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1}};
    for(int i=0;i<=4;i++){
        switch(num[i]){
            case 1:
            matrix[0][0]='/';
            break;
            case 2:
            matrix[0][1]='/';
            break;
            case 3:
            matrix[0][2]='/';
            break;
            case 4:
            matrix[0][3]='/';
            break;
            case 5:
            matrix[0][4]='/';
            break;
            case 6:
            matrix[1][0]='/';
            break;
            case 7:
            matrix[1][1]='/';
            break;
            case 8:
            matrix[1][2]='/';
            break;
            case 9:
            matrix[1][3]='/';
            break;
            case 10:
            matrix[1][4]='/';
            break;
            case 11:
            matrix[2][0]='/';
            break;
            case 12:
            matrix[2][1]='/';
            break;
            case 13:
            matrix[2][2]='/';
            break;
            case 14:
            matrix[2][3]='/';
            break;
            case 15:
            matrix[2][4]='/';
            break;
            case 16:
            matrix[3][0]='/';
            break;
            case 17:
            matrix[3][1]='/';
            break;
            case 18:
            matrix[3][2]='/';
            break;
            case 19:
            matrix[3][3]='/';
            break;
            case 20:
            matrix[3][4]='/';
            break;
            case 21:
            matrix[4][0]='/';
            break;
            case 22:
            matrix[4][1]='/';
            break;
            case 23:
            matrix[4][2]='/';
            break;
            case 24:
            matrix[4][3]='/';
            break;
            case 25:
            matrix[4][4]='/';
            break;
            case 26:
            matrix[5][0]='/';
            break;
            case 27:
            matrix[5][1]='/';
            break;
            case 28:
            matrix[5][2]='/';
            break;
            case 29:
            matrix[5][3]='/';
            break;
            case 30:
            matrix[5][4]='/';
            break;
            case 31:
            matrix[6][0]='/';
            break;
            case 32:
            matrix[6][1]='/';
            break;
            case 33:
            matrix[6][2]='/';
            break;
            case 34:
            matrix[6][3]='/';
            break;
            case 35:
            matrix[6][4]='/';
            break;
            case 36:
            matrix[7][0]='/';
            break;
            case 37:
            matrix[7][1]='/';
            break;
            case 38:
            matrix[7][2]='/';
            break;
            case 39:
            matrix[7][3]='/';
            break;
            case 40:
            matrix[7][4]='/';
            break;
            case 41:
            matrix[8][0]='/';
            break;
            case 42:
            matrix[8][1]='/';
            break;
            case 43:
            matrix[8][2]='/';
            break;
            case 44:
            matrix[8][3]='/';
            break;
            case 45:
            matrix[8][4]='/';
            break;
            case 46:
            matrix[9][0]='/';
            break;
            case 47:
            matrix[9][1]='/';
            break;
            case 48:
            matrix[9][2]='/';
            break;
            case 49:
            matrix[9][3]='/';
            break;
            case 50:
            matrix[9][4]='/';
            break;
        }
    int flag=0;
    while(checkedmatrix(matrix)!=0 && flag==0){
        printf("Enter a number to check if the box has a mine or not :\n");
        scanf("%d",&n);
        for(int j=0;j<5;j++){
            if(num[j]==n){
                printf("You hit a mine.");
                flag=1;
                break;
            }
        }
        if(flag==0 && checkedmatrix(matrix)==0){
            printf("You win");
        }
        switch(n){
            case 1:
            m[0][0]=checkadjacent(n,num);
            matrix[0][0]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 2:
            m[0][1]=checkadjacent(n,num);
            matrix[0][1]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 3:
            m[0][2]=checkadjacent(n,num);
            matrix[0][2]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 4:
            m[0][3]=checkadjacent(n,num);
            matrix[0][3]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 5:
            m[0][4]=checkadjacent(n,num);
            matrix[0][4]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 6:
            m[1][0]=checkadjacent(n,num);
            matrix[1][0]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 7:
            m[1][1]=checkadjacent(n,num);
            matrix[1][1]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 8:
            m[1][2]=checkadjacent(n,num);
            matrix[1][2]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 9:
            m[1][3]=checkadjacent(n,num);
            matrix[1][3]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 10:
            m[1][4]=checkadjacent(n,num);
            matrix[1][4]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 11:
            m[2][0]=checkadjacent(n,num);
            matrix[2][0]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 12:
            m[2][1]=checkadjacent(n,num);
            matrix[2][1]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 13:
            m[2][2]=checkadjacent(n,num);
            matrix[2][2]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 14:
            m[2][3]=checkadjacent(n,num);
            matrix[2][3]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 15:
            m[2][4]=checkadjacent(n,num);
            matrix[2][4]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 16:
            m[3][0]=checkadjacent(n,num);
            matrix[3][0]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 17:
            m[3][1]=checkadjacent(n,num);
            matrix[3][1]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 18:
            m[3][2]=checkadjacent(n,num);
            matrix[3][2]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 19:
            m[3][3]=checkadjacent(n,num);
            matrix[3][3]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 20:
            m[3][4]=checkadjacent(n,num);
            matrix[3][4]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 21:
            m[4][0]=checkadjacent(n,num);
            matrix[4][0]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 22:
            m[4][1]=checkadjacent(n,num);
            matrix[4][1]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 23:
            m[4][2]=checkadjacent(n,num);
            matrix[4][2]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 24:
            m[4][3]=checkadjacent(n,num);
            matrix[4][3]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 25:
            m[4][4]=checkadjacent(n,num);
            matrix[4][4]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 26:
            m[5][0]=checkadjacent(n,num);
            matrix[5][0]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 27:
            m[5][1]=checkadjacent(n,num);
            matrix[5][1]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 28:
            m[5][2]=checkadjacent(n,num);
            matrix[5][2]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 29:
            m[5][3]=checkadjacent(n,num);
            matrix[5][3]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 30:
            m[5][4]=checkadjacent(n,num);
            matrix[5][4]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 31:
            m[6][0]=checkadjacent(n,num);
            matrix[6][0]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 32:
            m[6][1]=checkadjacent(n,num);
            matrix[6][1]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 33:
            m[6][2]=checkadjacent(n,num);
            matrix[6][2]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 34:
            m[6][3]=checkadjacent(n,num);
            matrix[6][3]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 35:
            m[6][4]=checkadjacent(n,num);
            matrix[6][4]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 36:
            m[7][0]=checkadjacent(n,num);
            matrix[7][0]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 37:
            m[7][1]=checkadjacent(n,num);
            matrix[7][1]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 38:
            m[7][2]=checkadjacent(n,num);
            matrix[7][2]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 39:
            m[7][3]=checkadjacent(n,num);
            matrix[7][3]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 40:
            m[7][4]=checkadjacent(n,num);
            matrix[7][4]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 41:
            m[8][0]=checkadjacent(n,num);
            matrix[8][0]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 42:
            m[8][1]=checkadjacent(n,num);
            matrix[8][1]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 43:
            m[8][2]=checkadjacent(n,num);
            matrix[8][2]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 44:
            m[8][3]=checkadjacent(n,num);
            matrix[8][3]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 45:
            m[8][4]=checkadjacent(n,num);
            matrix[8][4]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 46:
            m[9][0]=checkadjacent(n,num);
            matrix[9][0]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 47:
            m[9][1]=checkadjacent(n,num);
            matrix[9][1]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 48:
            m[9][2]=checkadjacent(n,num);
            matrix[9][2]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 49:
            m[9][3]=checkadjacent(n,num);
            matrix[9][3]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;
            case 50:
            matrix[9][4]=checkadjacent(n,num);
            matrix[9][4]='/';
            printf("\n|---|---|---|---|---|\n");
            for(int i=0;i<10;i++){
                printf(" ");
                for(int j=0;j<5;j++){
                    printf(" %2d|",m[i][j]);
                }
                printf("\n|---|---|---|---|---|\n");
            }
            break;

        }
    }



    }
}
else if(op==3){
sudoku();
int y=0;
 int r1[9][9]={{0,0,2,0,1,0,0,7,0},
               {0,0,8,0,7,9,2,6,0},
               {0,0,0,0,0,3,0,0,5},
               {3,0,0,5,0,6,0,8,0},
               {0,0,0,0,4,0,0,0,0},
               {0,7,0,8,0,1,0,0,4},
               {4,0,0,7,0,0,0,0,0},
               {0,9,5,1,6,0,3,2,0},
               {0,2,0,0,5,0,6,0,0}};

 int c1[9][9]={{9,3,2,6,1,5,4,7,8},
               {1,5,8,4,7,9,2,6,3},
               {6,4,7,2,8,3,1,9,5},
               {3,1,4,5,9,6,7,8,2},
               {2,8,9,3,4,7,5,1,6},
               {5,7,6,8,2,1,9,3,4},
               {4,6,1,7,3,2,8,5,9},
               {8,9,5,1,6,4,3,2,7},
               {7,2,3,9,5,8,6,4,1}};

int l,l1,p;
while (1){
printf("enter your position of the guess(row,column)==");
scanf ("%d %d",&p,&l);
printf("enter your answer==");
scanf ("%d",&l1);
switch (p){
case 1:
        if (l1==c1[p-1][l-1]){
        y+=1;
        r1[p-1][l-1]=c1[p-1][l-1];
        printf("correct answer\n");
         for(int i=0; i<9; i++) {
    for(int j=0; j<9; j++) {
        if (r1[i][j]==0) printf(". ");
        else printf("%d ", r1[i][j]);
        if (((j+1)%3==0)&j<8) printf("| ");
    }
    printf("\n");
    if (((i+1)%3==0)&(i<8)){
    printf("------+-------+-------\n");}
  }}
        break;
    case 2:
        if (l1==c1[p-1][l-1]){
        y+=1;
        r1[p-1][l-1]=c1[p-1][l-1];
        printf("correct answer\n");
         for(int i=0; i<9; i++) {
    for(int j=0; j<9; j++) {
        if (r1[i][j]==0) printf(". ");
        else printf("%d ", r1[i][j]);
        if (((j+1)%3==0)&j<8) printf("| ");
    }
    printf("\n");
    if (((i+1)%3==0)&(i<8)){
    printf("------+-------+-------\n");}
  }}
        break;
    case 3:
        if (l1==c1[p-1][l-1]){
        y+=1;
        r1[p-1][l-1]=c1[p-1][l-1];
        printf("correct answer\n");
         for(int i=0; i<9; i++) {
    for(int j=0; j<9; j++) {
        if (r1[i][j]==0) printf(". ");
        else printf("%d ", r1[i][j]);
        if (((j+1)%3==0)&j<8) printf("| ");
    }
    printf("\n");
    if (((i+1)%3==0)&(i<8)){
    printf("------+-------+-------\n");}
  }}
        break;
    case 4:
        if (l1==c1[p-1][l-1]){
        y+=1;
        r1[p-1][l-1]=c1[p-1][l-1];
        printf("correct answer\n");
         for(int i=0; i<9; i++) {
    for(int j=0; j<9; j++) {
        if (r1[i][j]==0) printf(". ");
        else printf("%d ", r1[i][j]);
        if (((j+1)%3==0)&j<8) printf("| ");
    }
    printf("\n");
    if (((i+1)%3==0)&(i<8)){
    printf("------+-------+-------\n");}
  }}
        break;
    case 5:
        if (l1==c1[p-1][l-1]){
        y+=1;
        r1[p-1][l-1]=c1[p-1][l-1];
        printf("correct answer\n");
         for(int i=0; i<9; i++) {
    for(int j=0; j<9; j++) {
        if (r1[i][j]==0) printf(". ");
        else printf("%d ", r1[i][j]);
        if (((j+1)%3==0)&j<8) printf("| ");
    }
    printf("\n");
    if (((i+1)%3==0)&(i<8)){
    printf("------+-------+-------\n");}
  }}
        break;
    case 6:
        if (l1==c1[p-1][l-1]){
        y+=1;
        r1[p-1][l-1]=c1[p-1][l-1];
        printf("correct answer\n");
         for(int i=0; i<9; i++) {
    for(int j=0; j<9; j++) {
        if (r1[i][j]==0) printf(". ");
        else printf("%d ", r1[i][j]);
        if (((j+1)%3==0)&j<8) printf("| ");
    }
    printf("\n");
    if (((i+1)%3==0)&(i<8)){
    printf("------+-------+-------\n");}
  }}
        break;
    case 7:
        if (l1==c1[p-1][l-1]){
        y+=1;
        r1[p-1][l-1]=c1[p-1][l-1];
        printf("correct answer\n");
         for(int i=0; i<9; i++) {
    for(int j=0; j<9; j++) {
        if (r1[i][j]==0) printf(". ");
        else printf("%d ", r1[i][j]);
        if (((j+1)%3==0)&j<8) printf("| ");
    }
    printf("\n");
    if (((i+1)%3==0)&(i<8)){
    printf("------+-------+-------\n");}
  }}
        break;
    case 8:
        if (l1==c1[p-1][l-1]){
        y+=1;
        r1[p-1][l-1]=c1[p-1][l-1];
        printf("correct answer\n");
         for(int i=0; i<9; i++) {
    for(int j=0; j<9; j++) {
        if (r1[i][j]==0) printf(". ");
        else printf("%d ", r1[i][j]);
        if (((j+1)%3==0)&j<8) printf("| ");
    }
    printf("\n");
    if (((i+1)%3==0)&(i<8)){
    printf("------+-------+-------\n");}
  }}
        break;
    case 9:
        if (l1==c1[p-1][l-1]){
        y+=1;
        r1[p-1][l-1]=c1[p-1][l-1];
        printf("correct answer\n");
         for(int i=0; i<9; i++) {
    for(int j=0; j<9; j++) {
        if (r1[i][j]==0) printf(". ");
        else printf("%d ", r1[i][j]);
        if (((j+1)%3==0)&j<8) printf("| ");
    }
    printf("\n");
    if (((i+1)%3==0)&(i<8)){
    printf("------+-------+-------\n");}
  }}
        break;
    }
    if (y>=52){
    printf("#####GAME OVER YOU WON#####");
     break;}

}
}
else if(op==4){
 char word[100],hint[100];
    printf("Enter a word : ");
    scanf("%s",word);
    printf("Enter a hint : ");
    scanf("%s",hint);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    int size=0;
    char guess[100];
    for(int i=0;word[i]!='\0';i++){
        size+=1;
    }
    printf("You will have 6 guesses till hangman dies .\n" );
    hangman(0);
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
    int flag=0;
    int incorrect=0;
    for(int i=0;i<size+6;i++){
        if(strcmp(g,word)==0 || incorrect==6){
            break;
        }
        else{
        printf("Enter Guess : ");
        scanf("%s",&guess[i]);
        for(int j=0;word[j]!='\0';j++){
            if(guess[i]==word[j]){
                g[j]=guess[i];
                flag=1;
            }
        }
        if(flag==0){
            incorrect+=1;
        }
        hangman(incorrect);
        printf("\n");
        printf("%s",g);
        printf("\n");
        }
        count=0;
        flag=0;
    }
}
    return 0;
    }
