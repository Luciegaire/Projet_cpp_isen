#include "window.h"

// Version 1 pour addition

Window::Window(QWidget *parent) : QWidget(parent)
{
    setFixedSize(600, 330);

    // Consigne
    QLabel *consigne = new QLabel(this);
    consigne->setText("Entrer dans les champs un nombre et cliquer sur valider votre saisie");
    consigne->setFont(QFont("Arial", 10));
    consigne->setGeometry(10, 5, 500, 30);

    // Bouton quitter pour quitter la fenêtre proprement
    QPushButton *quit = new QPushButton(tr("Quitter"), this);
    quit->setFont(QFont("Arial", 10, QFont::Bold));
    quit->setGeometry(495, 5, 100, 30);

    // Pour associer le bouton quitter au fait de quitter l'application
    connect(quit, SIGNAL(clicked()), qApp, SLOT(quit()));

    // Champs de récupération des caractères entrés
    _champ1 = new QTextEdit(this);
    _champ2 = new QTextEdit(this);
    _champ1->setGeometry(150, 85, 100, 30);
    _champ2->setGeometry(350, 85, 100, 30);

    // Signe plus
    QLabel *plus = new QLabel(this);
    plus->setText("+");
    plus->setFont(QFont("Arial", 10));
    plus->setAlignment(Qt::AlignHCenter);
    plus->setGeometry(250, 85, 100, 30);

    // Bouton valider pour valider la saisie
    QPushButton *valid = new QPushButton(tr("Valider"), this);
    valid->setFont(QFont("Arial", 10, QFont::Bold));
    valid->setGeometry(250, 165, 100, 30);

    // Pour associer le bouton valider au fait de valider la saisie
    connect(valid, SIGNAL(clicked()), this, SLOT(valider()));

    // Resultat
    resultat = new QLabel(this);
    resultat->setVisible(false);

    // Notation classique
    classique = new QLabel(this);
    classique->setVisible(false);

    // Notation polonaise inversée
    polonaise = new QLabel(this);
    polonaise->setVisible(false);
}

void Window::valider() {
    // Récupération du contenu des champs
    QString strChamp1 = _champ1->toPlainText();
    QString strChamp2 = _champ2->toPlainText();
    
    if (!strChamp1.isNull() && !strChamp2.isNull() && strChamp1.toFloat() && strChamp2.toFloat()){
        // Création de deux constantes pour l'addition simple
        Constante *c1 = new Constante(strChamp1.toFloat());
        Constante *c2 = new Constante(strChamp2.toFloat());
        _addition = new Addition(c1, c2);

        // Affichage du résultat
        resultat->setVisible(true);
        QString result;
        result.setNum(_addition->calcul());
        resultat->setText(result);
        resultat->setFont(QFont("Arial", 12));
        resultat->setAlignment(Qt::AlignHCenter);
        resultat->setGeometry(0, 215, 600, 30);

        // Affichage de la notation classique
        classique->setVisible(true);
        classique->setText(" ( " + strChamp1 + " + " + strChamp2 + " ) ");
        classique->setFont(QFont("Arial", 12));
        classique->setAlignment(Qt::AlignHCenter);
        classique->setGeometry(0, 250, 600, 30);

        // Affichage de la polonaise inversée
        polonaise->setVisible(true);
        polonaise->setText(strChamp1 + " " + strChamp2 + " + ");
        polonaise->setFont(QFont("Arial", 12));
        polonaise->setAlignment(Qt::AlignHCenter);
        polonaise->setGeometry(0, 285, 600, 30);
    }
    
    // On efface le contenu des champs
    _champ1->clear();
    _champ2->clear();
}
