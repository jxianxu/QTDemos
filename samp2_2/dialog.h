#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_chxUnderline_clicked(bool checked);

    void on_chxItalic_clicked(bool checked);

    void on_chxBold_clicked(bool checked);

    void setTextFontColor();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
