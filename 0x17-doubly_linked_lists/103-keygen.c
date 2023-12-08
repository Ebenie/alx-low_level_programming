#include <stdio.h>
#include <string.h>

void generate_key(char *username, char *key) {

    snprintf(key, 100, "%s%s", username, "SOME_FIXED_STRING");
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <username>\n", argv[0]);
        return 1;
    }

    char username[100];
    char key[100];
    snprintf(username, sizeof(username), "%s", argv[1]);


    generate_key(username, key);
    printf("%s\n", key);

    return 0;
}
