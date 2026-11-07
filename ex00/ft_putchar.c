#include <unistd.h>

// Declaración o definición de ft_putchar
void ft_putchar(char c) {
    write(1, &c, 1);
}
