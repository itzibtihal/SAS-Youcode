#include <stdio.h>
#include <windows.h>

void setConsoleColor(int textColor, int bgColor) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, textColor | (bgColor << 4));
}

void resetConsoleColor() {
    setConsoleColor(7, 0); // Réinitialiser aux couleurs par défaut (texte blanc sur fond noir)
}

void bonjour() {
    setConsoleColor(14, 1); // Jaune sur fond bleu (vous pouvez utiliser d'autres combinaisons)
    printf("YouCode\n");
    resetConsoleColor();
}

int main() {
    bonjour();
    return 0;
}
