#ifndef STRINGLIST_H
#define STRINGLIST_H

#include <QObject>
#include <QList>
#include <QString>

class StringList : public QObject {
    Q_OBJECT

private:
    QList<QString> delegateList;

    QString formatFirst();
public:
    StringList();

    Q_INVOKABLE QList<QString> add(const QString _newString);
    Q_INVOKABLE QList<QString> deleteLast();
    Q_PROPERTY(QString formatted READ formatted NOTIFY listChanged)
    QString formatted();

signals:
    void listChanged();
};

#endif // STRINGLIST_H
