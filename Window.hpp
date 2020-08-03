#ifndef WINDOW_HPP
#define WINDOW_HPP
#include <ncurses.h>

namespace Cvar1984
{
    class Window
    {
        public:
            WINDOW *win;
            int height;
            int width;
            int startY;
            int startX;

            Window(int height, int width, int startY, int startX)
            {
                initscr();
                noecho();
                raw();
                this->height = height;
                this->width = width;
                this->startY = startY;
                this->startX = startX;
            }
            void createWindow()
            {
                this->win = newwin(
                        this->height,
                        this->width,
                        this->startY,
                        this->startX
                        );
            }
            void deleteWindow()
            {
                wrefresh(this->win);
                delwin(this->win);
            }
            void moveWindow(int height, int width, int startY, int startX)
            {
                this->deleteWindow();
                this->height = height;
                this->width = width;
                this->startY = startY;
                this->startX = startX;
                this->createWindow();
            }
            ~Window()
            {
                endwin();
            }
    };
}
#endif
