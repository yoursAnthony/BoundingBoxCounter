#include "Utilities.h"
#include "HashFunctions.h"
#include <unordered_map>

namespace ObjectDetection {

    int FindMaxRepetitionCount(const std::vector<BoundingBox>& boundingBoxes) {
        if (boundingBoxes.empty()) {
            return 0;
        }
        std::unordered_map<BoundingBox, int, BoundingBoxHash> counts;
        int max_count = 0;
        for (const auto& bb : boundingBoxes) {
            int count = ++counts[bb];
            if (count > max_count) {
                max_count = count;
            }
        }
        return max_count;
    }

}








