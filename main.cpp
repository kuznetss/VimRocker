#include <ncurses.h>

int main()
{
    initscr();                   // Переход в curses-режим
    printw("hHello world!!\n");  // Отображение приветствия в буфер
    refresh();                   // Вывод приветствия на настоящий экран
    getch();                     // Ожидание нажатия какой-либо клавиши пользователем
    endwin();                    // Выход из curses-режима. Обязательная команда.
    return 0;
}
