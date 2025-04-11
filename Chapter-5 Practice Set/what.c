#include <stdio.h>

int main()
{

    int a = 3;

    printf("%d %d %d\n", a, ++a, a++);
    // left to right for clang(macos)
    //right to left for gcc(windows)
    return 0;
}