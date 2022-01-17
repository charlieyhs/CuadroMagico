#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class QStandardItemModel;


class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_ComprobarPushButton_clicked();
    void on_QuitarAplicacionPushButton_clicked();

    void on_actionComenzarelcuadradomagico_triggered();

private:
    void sumaFilas();
    void sumaColumnas();
    void sumaDiagonalPrincipal();
    void sumaDiagonalSecundaria();
    bool compruebaCuadradoMagico()const;
    int obtieneElemento(int fila, int col)const;


    Ui::Widget *ui;
    QStandardItemModel *mModel;
    int mSumaDeDiagonalPrincipal;
    int mSumaDeDiagonalSecundaria;
};
#endif // WIDGET_H
