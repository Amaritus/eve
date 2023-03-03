#include <QtWidgets>
#include "adamwizard.h"

AdamWizard::AdamWizard(QWidget* parent)
	: QWizard(parent)
{
	addPage(new Page1);
	addPage(new Page2);
	addPage(new LastPage);

	setWindowTitle(tr("ADAM Wizard v0.0"));
}

void AdamWizard::accept()
{

}

Page1::Page1(QWidget* parent) : QWizardPage(parent)
{
	setTitle(tr("ADAM Wizard v0.0"));
	setSubTitle(tr("Welcome to Page 1"));
	label = new QLabel(tr("This is a test wizard for ADAM. "
						  "Expect a great many things to be "
						  "broken and error-prone. Thank you "
						  "for your cooperation."));
	label->setWordWrap(true);

	QVBoxLayout* layout = new QVBoxLayout;
	layout->addWidget(label);
	setLayout(layout);
}

Page2::Page2(QWidget* parent) :QWizardPage(parent)
{
	setTitle(tr("ADAM Wizard v0.0"));
	setSubTitle(tr("This is Page 2. Almost done!"));
	
	page2Label = new QLabel(tr("Enter text: "));
	page2LineEdit = new QLineEdit;
	page2Label->setBuddy(page2LineEdit);

	page2GroupBox = new QGroupBox(tr("Options Group Box"));

	page2Radio1 = new QRadioButton(tr("Default Option"));
	page2Radio2 = new QRadioButton(tr("Option 2"));
	page2Radio3 = new QRadioButton(tr("Option 3"));

	page2CheckBox = new QCheckBox(tr("Optional option that is optional"));

	QVBoxLayout* groupBoxLayout = new QVBoxLayout;
	groupBoxLayout->addWidget(page2Radio1);
	groupBoxLayout->addWidget(page2Radio2);
	groupBoxLayout->addWidget(page2Radio3);
	groupBoxLayout->addWidget(page2CheckBox);
	page2GroupBox->setLayout(groupBoxLayout);

	QGridLayout* layout = new QGridLayout;
	layout->addWidget(page2Label, 0, 0);
	layout->addWidget(page2LineEdit, 0, 1);
	layout->addWidget(page2GroupBox, 2, 0);
	setLayout(layout);

}

LastPage::LastPage(QWidget* parent) : QWizardPage(parent)
{
	setTitle(tr("ADAM Wizard v0.0"));
	setSubTitle(tr("THE FINAL PAGE"));

	label = new QLabel(tr("Hopefully it won't break when you hit finish..."));
	label->setWordWrap(true);

	QVBoxLayout* layout = new QVBoxLayout;
	layout->addWidget(label);
	setLayout(layout);
}