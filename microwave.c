#include <ncurses.h>
#include <string.h>

/* gcc microwave.c -lncurses -o microwave */

int row, col;

void m_clear_screen()
{
    clear();
}

/* m_get_row_col(int row, int col)
{
    getmaxyx(stdscr, row, col);
    return 
}*/

void m_setup(int row, int col) 
{
    m_clear_screen();

    char mesg[] = "Entering setup...";
    getmaxyx(stdscr,row,col); 
    mvprintw(row/2,(col-strlen(mesg))/2,"%s",mesg);
}

int main()
{
    int ch;

    initscr();                        /* Start curses mode. */
    raw();                            /* Don't buffer input. */
    keypad(stdscr, TRUE);             /* Enable F keys. */
    printw("Welcome to Microwave!");  /* Print welcome. */
    refresh();                        /* Print screen. */
    getch();                          /* Wait for input. */

    m_setup(row, col);

    printw("ROW: %d .", row);

    getch();                          /* Wait for input. */
    endwin();                         /* End curses mode. */

    return 0;

}
