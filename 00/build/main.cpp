#include <qapplication.h>
#include "adamwizard.h"

int main(int argc, char* argv[])
{
	QApplication app(argc, argv);

	AdamWizard wizard;
	wizard.show();
	return app.exec();
}