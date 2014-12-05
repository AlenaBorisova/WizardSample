#ifndef PAGE1_H
#define PAGE1_H

#include <QWidget>
#include "ui_page1.h"

class Page1 : public QWidget
{
	Q_OBJECT

public:
	Page1(QWidget *parent = 0);
	~Page1();
	 void initialize(int value);
	 int returnTimeEducationSpinBoxValue() const;
	 bool returnFlagHowToWork () const;

private:
	Ui::Page1 ui;
};

#endif // PAGE1_H
