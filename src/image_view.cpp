#include "image_view.h"


ImageView::ImageView()
{
	setMouseTracking(true);
	setAutoFillBackground(true);
	QPalette p = palette();
	p.setColor(QPalette::Background, Qt::black);
	setPalette(p);
}

ImageView::~ImageView()
{

}

void ImageView::paintEvent(QPaintEvent* e)
{
}

void ImageView::drawPointsFromContour()
{
}

void ImageView::refreshImageView()
{
}