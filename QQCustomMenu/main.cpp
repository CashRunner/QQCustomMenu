#include "QQCustomMenu.h"
#include <QtWidgets/QApplication>

#pragma execution_character_set("utf-8")

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QQCustomMenu w;
	w.addMenuItem(QIcon(":/Resources/busy.png"), "æµ");
	w.addMenuItem(QIcon(":/Resources/hide.png"), "����");
	w.addMenuItem(QIcon(":/Resources/lock.png"), "����");
	w.addSeparator();
	w.addMenuItem(QIcon(":/Resources/offLine.png"), "����");
	w.addMenuItem(QIcon(":/Resources/message.png"), "��Ϣ");
	w.show();
	return a.exec();
}
