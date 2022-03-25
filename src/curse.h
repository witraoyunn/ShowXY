#ifndef CURSE_H
#define CURSE_H

#include <QObject>
#include <QThread>
#include <QCursor>

class curse : public QThread
{
    Q_OBJECT
public:

    curse();
    void run();

signals:
    void sigxy(int nx, int ny);
};

#endif // CURSE_H
