#include <stdio.h>

void contagem(int x){
    for (int i = 0; i <= x; i++){
        printf("%d\n", i);
    }
}

int main (){
    int x;
    scanf("%d", &x);
    contagem(x);
    return 0;
}
