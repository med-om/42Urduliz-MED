#include <unistd.h>

// Declaración o definición de ft_putchar
void ft_putchar(char c) {
    write(1, &c, 1); // Esto es lo que realmente imprime el carácter en la terminal
}
