#include <stdio.h>

int t, n[1000], a;

int main() {
 
    scanf("%d", &t);
    a = 0;
    for(int i = 0; i < 1000; i++){
        n[i] = a;
        a++;
        if(a == t){
            a = 0;
        }
    }
    for(int i = 0; i < 1000; i++){
        printf("N[%d] = %d\n", i, n[i]);
    }
 
    return 0;
}
