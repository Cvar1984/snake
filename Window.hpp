#ifndef WINDOW_HPP
#define WINDOW_HPP
#include <ncurses.h>

namespace Cvar1984
{
    class Window
    {
        protected:
            WINDOW *win;
            int height;
            int width;
            int startY;
            int startX;

            void deleteWindow()
            {
                wrefresh(this->win);
                delwin(this->win);
            }
            void createWindow()
            {
                this->win = newwin(
                        this->height,
                        this->width,
                        this->startY,
                        this->startX
                        );
                wrefresh(this->win);
            }

        public:
            Window(int height, int width, int startY, int startX)
            {
                initscr();
                noecho();
                raw();
                this->height = height;
                this->width = width;
                this->startY = startY;
                this->startX = startX;
                this->createWindow();
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
