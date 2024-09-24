#include "BoundingBox.h"

namespace ObjectDetection {

    BoundingBox::BoundingBox(const std::map<Types, float>& classConf,
        const std::pair<int, int>& point1,
        const std::pair<int, int>& point2)
        : classConf(classConf), point1(point1), point2(point2) {}

    const std::map<Types, float>& BoundingBox::getClassConf() const {
        return classConf;
    }

    const std::pair<int, int>& BoundingBox::getPoint1() const {
        return point1;
    }

    const std::pair<int, int>& BoundingBox::getPoint2() const {
        return point2;
    }

    bool BoundingBox::operator==(const BoundingBox& other) const {
        return classConf == other.classConf &&
            point1 == other.point1 &&
            point2 == other.point2;
    }

}

