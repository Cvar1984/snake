#ifndef OBJECT_HPP
#define OBJECT_HPP

namespace Cvar1984
{
    class Object
    {
        protected:
            int positionLeft = 0;
            int positionRight = 0;
            int positionUp = 0;
            int positionDown = 0;
            int sizeUp = 0;
            int sizeDown = 0;
            int sizeLeft = 0;
            int sizeRight = 0;

        public:
            void moveLeft(int size = 1)
            {
                this->positionLeft += size;
                this->positionRight -= size;
            }
            void moveRight(int size = 1)
            {
                this->positionRight += size;
                this->positionLeft -= size;
            }
            void moveUp(int size = 1)
            {
                this->positionUp += size;
                this->positionDown -= size;
            }
            void moveDown(int size = 1)
            {
                this->positionDown += size;
                this->positionUp -= size;
            }
            void resizeLeft(int size = 1)
            {
                this->sizeLeft += size;
            }
            void resizeRight(int size = 1)
            {
                this->sizeRight += size;
            }
            void resizeUp(int size = 1)
            {
                this->sizeUp += size;
            }
            void resizeDown(int size = 1)
            {
                this->sizeDown += size;
            }
    };
}
#endif
