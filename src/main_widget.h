#ifndef  MAINWIDGET_H_
#define  MAINWIDGET_H_

#include <QWidget>
#include <QObject>
#include "image_view.h"
#include "inspect.h"

class QLabel;
class QLineEdit;
class QPushButton;

class MainWidget : public QWidget
{
	Q_OBJECT
public:
	MainWidget();
  ~MainWidget();

private:
 void getFilePath();
 void setUI();
 void setConnect();

 QLineEdit* m_get_file_path_line_edit;
 QLineEdit* m_load_image_line_edit;
 QLineEdit* m_set_contrast_line_edit;
 QLineEdit* m_save_file_line_edit;

 QString m_file_path;

 QPushButton* m_save_file_button;
 QPushButton* m_load_file_button;
 QPushButton* m_refresh_button;
 QPushButton* m_load_image_button;
 QPushButton* m_show_contour_button;

 ImageView* m_image_view;
 Inspect* m_inspect;
public slots:
  void getContoursPoints();
	void showContoursPoints();
	void saveNewModel();


};



#endif
