#include <stdio.h>

static char* secret_var = "Syed";

static char* get_secret () {
    secret_var = "Ahamed";
    return secret_var;
}

void public_reveal() {
    char* reveal = get_secret();
    printf("%s is the secret\n", reveal);
}

int main() {
    printf("%s is the secret before the release\n", secret_var);
    public_reveal();
}