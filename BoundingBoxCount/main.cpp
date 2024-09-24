#include <iostream>
#include <vector>

#include "BoundingBox.h"
#include "Utilities.h"

int main() {
    using namespace ObjectDetection;

    std::vector<BoundingBox> boundingBoxes = {
        BoundingBox(
            {
                {Types::car, 0.97f},
                {Types::pedestrian, 0.86f},
                {Types::sign, 0.52f},
                {Types::trafficlight, 0.16f}
            },
            {13, 42},
            {16, 88}
        ),
        BoundingBox(
            {
                {Types::car, 0.93f},
                {Types::pedestrian, 0.54f},
                {Types::sign, 0.10f},
                {Types::trafficlight, 0.06f}
            },
            {12, 32},
            {14, 48}
        ),
        BoundingBox(
            {
                {Types::car, 0.93f},
                {Types::pedestrian, 0.54f},
                {Types::sign, 0.10f},
                {Types::trafficlight, 0.06f}
            },
            {12, 32},
            {14, 48}
        ),
    };

    int maxCount = FindMaxRepetitionCount(boundingBoxes);
    std::cout << maxCount << std::endl;

    return 0;
}
