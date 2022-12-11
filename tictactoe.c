#include<stdio.h>
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
    else{
        flag=0;
    }
    return(flag);
}
int main(){
    printf("TIC TAC TOE\n");
    char p1,p2;
    printf("Select O/X for P1 :");
    scanf("%c",&p1);
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

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
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
    return 0;}
