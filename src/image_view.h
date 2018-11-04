#ifndef IMAGEVIEW_H_
#define IMAGEVIEW_H_

#include <QWidget>

class ImageView : public QWidget
{
	Q_OBJECT
public:
  ImageView();
	~ImageView();

protected:
  void paintEvent(QPaintEvent* e) override;
	void drawPointsFromContour();
	void refreshImageView();
};


#endif
