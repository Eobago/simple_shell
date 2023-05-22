#include "main.h"

void get_sigint(int sig)
{
    (void)sig;
    write(STDOUT_FILENO, "\n^-^ ", 5);
}
