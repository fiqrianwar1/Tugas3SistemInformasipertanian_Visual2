#ifndef FORMPELANGGAN_H
#define FORMPELANGGAN_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlRecord>
#include <QSqlQueryModel>

namespace Ui {
class FormPelanggan;
}

class FormPelanggan : public QWidget
{
    Q_OBJECT

public:
    explicit FormPelanggan(QWidget *parent = nullptr);
    void loadTablePelanggan();
    ~FormPelanggan();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_tablePelanggan_activated(const QModelIndex &index);

private:
    Ui::FormPelanggan *ui;
    QSqlDatabase koneksi;
    QSqlQuery sql;
    QSqlRecord cari;
    QSqlQueryModel * tabelModel;
};

#endif // FORMPELANGGAN_H
