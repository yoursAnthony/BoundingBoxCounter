#include <functional>
#include "HashFunctions.h"

namespace ObjectDetection {

    size_t PairHash::operator()(const std::pair<int, int>& p) const {
        return std::hash<int>()(p.first) ^ (std::hash<int>()(p.second) << 1);
    }

    size_t TypesHash::operator()(const Types& t) const {
        return std::hash<int>()(static_cast<int>(t));
    }

    size_t MapHash::operator()(const std::map<Types, float>& m) const {
        size_t seed = 0;
        for (const auto& kv : m) {
            size_t h1 = TypesHash()(kv.first);
            size_t h2 = std::hash<float>()(kv.second);
            seed ^= h1 + 0x9e3779b9 + (seed << 6) + (seed >> 2);
            seed ^= h2 + 0x9e3779b9 + (seed << 6) + (seed >> 2);
        }
        return seed;
    }

    size_t BoundingBoxHash::operator()(const BoundingBox& bb) const {
        size_t seed = 0;
        size_t classConfHash = MapHash()(bb.getClassConf());
        size_t point1Hash = PairHash()(bb.getPoint1());
        size_t point2Hash = PairHash()(bb.getPoint2());
        seed ^= classConfHash + 0x9e3779b9 + (seed << 6) + (seed >> 2);
        seed ^= point1Hash + 0x9e3779b9 + (seed << 6) + (seed >> 2);
        seed ^= point2Hash + 0x9e3779b9 + (seed << 6) + (seed >> 2);
        return seed;
    }

}







