#ifndef UTILITIES_H
#define UTILITIES_H

#include <vector>
#include "BoundingBox.h"

namespace ObjectDetection {

	int FindMaxRepetitionCount(const std::vector<BoundingBox>& boundingBoxes);

}

#endif


