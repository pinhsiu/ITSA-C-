#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int N;
    scanf("%d", &N);
    for(int i = 1; i <= N; i++){
        printf("%d*%d=%d\n", i, i, i * i);
    }
}
