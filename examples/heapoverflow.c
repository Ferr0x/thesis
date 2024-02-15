#include <stdio.h>
#include <stdlib.h>
void setup() {
  setbuf(stdin, NULL);
  setbuf(stderr, NULL);
  setbuf(stdout, NULL);
}

int main(){
    setup();
    puts("Insert your name: ");

    char *buf = malloc(24);
    if (buf == NULL) {
        fprintf(stderr, "Error malloc failed, NO INPUT");
        return 1;
    }
    scanf("%s", buf);
    printf("Hello %s !\n", buf);

    free(buf);
    return 0;
}