#include <stdio.h>

int t1, t2, t3, t4, tomadas;

int main() {
    
    scanf("%d %d %d %d", &t1, &t2, &t3, &t4);
    tomadas = (t1 + t2 + t3 + t4) - 3;
    printf("%d\n", tomadas);
 
    return 0;
}
