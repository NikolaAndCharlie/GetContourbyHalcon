#ifndef INSPECT_H_
#define INSPECT_H_

#include <QObject>

class Inspect
{
public:
	Inspect();
	~Inspect();
	void getContourPoints();
	void setContourContours();
	void saveNewModelFile(const QString& s);
};




#endif
