


#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isAttacking(int size, int b[size][size], int r, int c){
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(i==r || j==c || (i+j)==(r+c)||(i-j)==(r-c)){
                if(b[i][j]==1)
                    return true;
            }
        }
    }
    return false;
}
bool N_Queen(int size, int b[size][size], int N){
    if(N==0){
        return true;
    }
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(isAttacking(size, b, i, j)){
                continue;
            }
            b[i][j]=1;
            if(N_Queen(size, b, N-1)){
                return true;
            }
            b[i][j]=0;
        }
    }
    return false;
}
void display(int size, int a[size][size]){
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int N;
    scanf("%d", &N);
    int size=N;
    int b[N][N];
    memset(b, 0, sizeof(b[0][0]) * size * size);
    if(N_Queen(size, b, N)){
        printf("YES\n");
        display(size, b);
    }
    else{
        printf("NO\n");
    }
    return 0;
}

