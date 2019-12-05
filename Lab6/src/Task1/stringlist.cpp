#include "stringlist.h"

#include <QChar>

StringList::StringList() {}

QString StringList::formatted() {
    QString result = "";

    if( ! delegateList.isEmpty()) {
        result.append(formatFirst());
    }

    for(int i = 1; i < delegateList.size(); i++) {
        result.append(", ").append(delegateList.at(i));
    }

    return result;
}

QList<QString> StringList::add(const QString _newString) {
    delegateList.append(_newString);
    emit listChanged();
    return delegateList;
}

QList<QString> StringList::deleteLast() {
    if( ! delegateList.isEmpty() ) {
        delegateList.pop_back();
        emit listChanged();
    }
    return delegateList;
}

QString StringList::formatFirst() {
    QString first = delegateList.at(0);
    QChar firstChar = first.at(0).toUpper();
    first = first.remove(0, 1);
    first.push_front(firstChar);

    return first;
}
