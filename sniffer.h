#ifndef SNIFFER_H
#define SNIFFER_H

#include <QObject>

class sniffer : public QObject
{
    Q_OBJECT
public:
    explicit sniffer(QObject *parent = nullptr);

signals:

public slots:
};

#endif // SNIFFER_H