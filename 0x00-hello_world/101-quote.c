#include <stdio.h>
#include <unistd.h>
int main(void) {
    const char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    const size_t len = sizeof(msg) - 1; // subtract 1 to exclude null terminator

    ssize_t nwritten = write(STDERR_FILENO, msg, len);
    if (nwritten != len) {
        return 1;
    }

    return 0;
}
