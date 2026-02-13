#include <stdio.h>
#include <string.h>

int main() {
    char input[128];

    printf("\n=== ORSh Lite Test OS ===\n");
    printf("Enter password: ");
    fgets(input, sizeof(input), stdin);

    if (strncmp(input, "real\n", 5) == 0) {
        printf("\n[ Real Mode ]\n");
    } else {
        printf("\n[ Ephemeral Fake Mode ]\n");
    }

    while (1) {
        printf("orsh> ");
        fgets(input, sizeof(input), stdin);

        if (strncmp(input, "exit", 4) == 0)
            break;

        printf("You typed: %s", input);
    }

    return 0;
}
