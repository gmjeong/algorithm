#include <stdio.h>

#define MAX_PAPER 100
#define HEIGHT 100
#define WIDTH 100

int main() {
    int num = 0;
    int x, y;
    int cnt = 0;
    int map[HEIGHT][WIDTH] = {0,};

    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        scanf("%d %d", &x, &y);
        // printf("x: %d y: %d\n", x, y);

        for (int j = x; j < x + 10; j++) {
            for (int k = y; k < y + 10; k++) {
                if (map[j][k] == 1) {
                    continue;
                }
                map[j][k] = 1;
                cnt++;
            }
        }
    }

    printf("%d\n", cnt);
    return 0;
}
