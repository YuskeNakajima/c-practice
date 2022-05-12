#include <stdio.h>

int main(void) {
    printf("%d\n", 10 + 3);
    printf("%d\n", 10 - 3);
    printf("%d\n", 10 * 3);
    printf("%d\n", 10 / 3); // 除算結果は切り捨てで丸められる
    printf("%d\n", 10 % 3); // 除算結果のあまり
    return 0;
}