#include <stdio.h>
#include <string.h>

void reverse(void) {
    char buf[80];
    int i;

    gets(buf);
    for (i = strlen(buf) - 1; i >= 0; i--) {
        putchar(buf[i]);
    }
}

int main(int argc, char *argv[]) {
    switch (getchar()) {
    case 'r':
        reverse();
        break;
    default:
        puts("I don't know how to do that!");
        break;
    }
    return 0;
}
