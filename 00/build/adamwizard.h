#ifndef ADAMWIZARD_H
#define ADAMWIZARD_H

#include <qwizard.h>

QT_BEGIN_NAMESPACE
class QCheckBox;
class QGroupBox;
class QLabel;
class QLineEdit;
class QRadioButton;
QT_END_NAMESPACE

class AdamWizard : public QWizard
{

public:
	AdamWizard(QWidget* parent = nullptr);
	void accept() override;

};

class Page1 : public QWizardPage
{

public:
	Page1(QWidget* parent = nullptr);

private:
	QLabel* label;
};

class Page2 : public QWizardPage
{

public:
	Page2(QWidget* parent = nullptr);

private:
	QLabel* page2Label;
	QLineEdit* page2LineEdit;
	QCheckBox* page2CheckBox;
	QGroupBox* page2GroupBox;
	QRadioButton* page2Radio1;
	QRadioButton* page2Radio2;
	QRadioButton* page2Radio3;

};

class LastPage : public QWizardPage
{

public:
	LastPage(QWidget* parent = nullptr);

private:
	QLabel* label;

};


#endif