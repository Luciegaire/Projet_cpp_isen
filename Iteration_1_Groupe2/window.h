#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QFont>
#include <QPushButton>
#include <QApplication>
#include <QLabel>
#include <QTextEdit>
#include <QString>
#include "Constante.h"
#include "Addition.h"

class Window : public QWidget
{
    Q_OBJECT
public:
    explicit Window(QWidget *parent = nullptr);
    QList<QString> getElements();

private slots:
    void valider();

private:
    QLabel *resultat;
    QLabel *classique;
    QLabel *polonaise;
    QTextEdit *_champ1;
    QTextEdit *_champ2;
    Addition *_addition;

signals:


};

#endif // WINDOW_H
