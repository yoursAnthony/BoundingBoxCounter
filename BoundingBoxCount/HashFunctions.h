#ifndef HASHFUNCTIONS_H
#define HASHFUNCTIONS_H

#include <map>
#include <utility>

#include "Types.h"
#include "BoundingBox.h"

namespace ObjectDetection {

    // Хеш-функция для std::pair<int, int>
    struct PairHash {
        size_t operator()(const std::pair<int, int>& p) const;
    };

    // Хеш-функция для Types
    struct TypesHash {
        size_t operator()(const Types& t) const;
    };

    // Хеш-функция для std::map<Types, float>
    struct MapHash {
        size_t operator()(const std::map<Types, float>& m) const;
    };

}

#endif

