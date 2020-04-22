#include <stdio.h>
#include <math.h>
 int main() {
  int x1, y1, x2, y2;
  int _ = scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
  int dx = abs(x2 - x1);
  int dy = abs(y2 - y1);
  if (dx == dy) {
    printf("%d %d %d %d\n", x1, y2, x2, y1);
  } else if (dx == 0) {
    if (x1 + dy > 1000) {
      if (x1 - dy >= 1000) {
        dy = -dy;
      } else {
        printf("-1\n");
        return 0;
      }
    }
    printf(" %d %d %d %d\n", x1+dy, y1, x1+dy, y2);
  } else if (dy == 0){
    if (y1 + dx > 1000) {
      if (y1 - dx >= 1000) {
        dx = -dx;
      } else {
        printf(" -1\n");
        return 0;
      }
    }
    printf("  %d %d %d %d\n", x1, y1+dx, x2, y1+dx);
  } else {
    printf("  -1\n");
  }
  return 0;
}