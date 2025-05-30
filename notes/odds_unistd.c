#include <unistd.h>
#include <fcntl.h>     // para open()
#include <string.h>    // para strlen()
#include <stdlib.h>    // para itoa, se usar itoa customizada
#include <stdio.h>

// Função auxiliar para converter número para string
void long_to_str(long num, char *buffer)
{
    char temp[32];
    int i = 0, j = 0;

    if (num == 0) {
        buffer[0] = '0';
        buffer[1] = '\0';
        return;
    }

    while (num > 0) {
        temp[i++] = (num % 10) + '0';
        num /= 10;
    }

    // Inverter a string
    while (i > 0) {
        buffer[j++] = temp[--i];
    }

    buffer[j] = '\0';
}

int main() {
    int even_fd, odd_fd;
    int n = 10;

    // Abrir os ficheiros (modo escrita, criar se não existir, truncar se existir)
    even_fd = open("event.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    odd_fd = open("odds.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    if (even_fd < 0 || odd_fd < 0) {
        write(STDERR_FILENO, "Erro ao abrir ficheiros.\n", 26);
        return 1;
    }

    char buffer[64];

    for (int k = 0; k <= n; k++) {
        char num_str[32];
        long_to_str(k, num_str);

        // Montar a linha de saída
        snprintf(buffer, sizeof(buffer), "\t%5s\n", num_str);

        if (k % 2 == 0) {
            write(even_fd, buffer, strlen(buffer));
        } else {
            write(odd_fd, buffer, strlen(buffer));
        }
    }

    // Fechar ficheiros
    close(even_fd);
    close(odd_fd);

    return 0;
}
