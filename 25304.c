#include <stdio.h>

int main(void) {
    int m; scanf("%d", &m);
    int cnt; scanf("%d", &cnt);

    int sum = 0;
    while(cnt--){
        int a, b; scanf("%d %d", &a, &b);
        sum += a * b;
    }
    
    if ( sum == m ) printf("Yes");
    else printf("No");
    
    return 0;
}
