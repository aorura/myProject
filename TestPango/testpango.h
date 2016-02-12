#ifndef TESTPANGO_H
#define TESTPANGO_H

#include <QtGui/QMainWindow>
#include "ui_testpango.h"

class TestPango : public QMainWindow
{
	Q_OBJECT

public:
	TestPango(QWidget *parent = 0, Qt::WFlags flags = 0);
	~TestPango();

private:
	void paintEvent(QPaintEvent * event);
	void drawImage();
	void update_attributes_to_ui();
	void update_attributes_from_ui();
	void update_text();

	void init_font_family();
	void init_pango_enums();

private slots:
	void onApplyAttributes();
	void appendText1();
	void appendText2();
	void appendText3();
	void appendText4();
	void appendText5();
	void appendText6();
	void appendText7();
	void appendText8();
	void appendText9();
	void appendText10();

private:
	Ui::TestPangoClass ui;

	QImage m_image;
	QString str;
	int idx;
};

#endif // TESTPANGO_H
