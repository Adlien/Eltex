#include <stdio.h>

int main() {
    int  number;
    unsigned char newByte;

    printf("--> ");
    scanf("%d", &number);
    printf("%d\n", number);

    printf("Введите новое значение для третьего байта (0-255): ");
    scanf("%hhu", &newByte); // Используем %hhu для ввода беззнакового char

    if (newByte > 255) {
        printf("Ошибка: Значение должно быть в диапазоне от 0 до 255.\n");
        return 1;
    }

    number = (number & 0xFF00FFFF) | (newByte << 8);
    printf("Измененное число: %d\n", number);
    
    return 0;
}
