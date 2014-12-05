#include "page1.h"

Page1::Page1(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

Page1::~Page1()
{

}
void Page1::initialize(int value)
{
	ui.timeEductaionSpinBox->setValue(value);
}
int Page1::returnTimeEducationSpinBoxValue() const
{
	return ui.timeEductaionSpinBox->value();
	
	//return ui.spinBox->value();
}
bool Page1::returnFlagHowToWork () const
{
	return ui.FlagHowToWork->isChecked();
}
