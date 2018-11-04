#include "inspect.h"
#include <halconcpp/HalconCpp.h>


using namespace HalconCpp;

Inspect::Inspect()
{

}

Inspect::~Inspect()
{

}

void SaveModelFile(HTuple& ModelID, QString& s)
{
  HTuple htuple_s = s.toStdString().c_str();
	WriteDeformableModel(ModelID, htuple_s);
}


void Inspect::getContourPoints()
{
}

void Inspect::setContourContours()
{
}

void Inspect::saveNewModelFile(const QString& s)
{

}