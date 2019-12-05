#ifndef COUNTER_H
#define COUNTER_H

#include <QObject>

class Counter : public QObject {
    Q_OBJECT

private:
    int count_value;
public:
    Counter();
    Counter(int _counter);
    int count();
    void setCount(int _count);

    Q_PROPERTY(int count READ count WRITE setCount NOTIFY countChanged)
    Q_INVOKABLE int inc();
    Q_INVOKABLE int dec();
    Q_INVOKABLE void reset();
signals:
    void countChanged();
};

#endif // COUNTER_H
