#ifndef SEARCHFORM_H
#define SEARCHFORM_H

#include <QMainWindow>

namespace Ui {
class searchform;
}

class searchform : public QMainWindow
{
    Q_OBJECT

public:
    explicit searchform(QWidget *parent = nullptr);
    ~searchform();

private:
    Ui::searchform *ui;
};

#endif // SEARCHFORM_H
