#include "counter.h"

Counter::Counter() : QObject() {
    count_value = 0;
}

Counter::Counter(int _count) : QObject() {
    count_value = _count;
}

int Counter::count() {
    return count_value;
}

int Counter::inc() {
    ++count_value;
    emit countChanged();
    return count_value;
}

int Counter::dec() {
    --count_value;
    emit countChanged();
    return count_value;
}

void Counter::reset() {
    count_value = 0;
    emit countChanged();
}

void Counter::setCount(int _count) {
    count_value = _count;
    emit countChanged();
}
