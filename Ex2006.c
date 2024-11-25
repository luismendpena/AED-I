#include <stdio.h>

int t, m = 0;
int chas[5];
 
int main() {
    
    scanf("%d", &t);
    for(int i = 0; i < 5; i++){
        scanf("%d", &chas[i]);
        if(chas[i] == t){
            m++;
        }
    }
    
    printf("%d\n", m);
    
    return 0;
}
