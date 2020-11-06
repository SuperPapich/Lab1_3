#ifndef SECOND_WINDOW_H
#define SECOND_WINDOW_H

#include <QDialog>
#include "object_collection.h"
#include <money_stack.h>

namespace Ui {
class second_window;
}

class second_window : public QDialog
{
    Q_OBJECT

public:
    explicit second_window(QWidget *parent = nullptr);
    void insert_data(object_collection obj_collection, int size) const;
    void insert_data_ms(object_collection ms_collection, int size) const;
    ~second_window();


private:
    Ui::second_window *ui;

};

#endif // SECOND_WINDOW_H
