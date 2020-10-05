#include <stdio.h>

int main(int argc, char** argv) {
    if(argc < 2 || argc > 2) {
        printf("Usage: greetings [name]\n");
        return 0;
    }
    printf("Hello %s\n", argv[1]);
    return 0;
}
