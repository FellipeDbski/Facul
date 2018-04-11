#include <stdio.h>
#include <stdlib.h>

int teste(int y){
    if (y <20){
        y = teste(y * y  + 1);
    }
    return (y);
}

int main()
{
    int x;
    x = teste(1);
    printf("Resultado Multiplicação %d", x);
    getchar();
    return 0;
}
