#include "curse.h"

curse::curse()
{

}

void curse::run()
{
    while(1)
    {
        msleep(50);
        emit sigxy(QCursor::pos().x(), QCursor::pos().y());
    }
}
