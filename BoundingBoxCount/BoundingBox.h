#ifndef BOUNDINGBOX_H
#define BOUNDINGBOX_H

#include <map>
#include <utility>

#include "Types.h"

namespace ObjectDetection {

    class BoundingBox {
    private:
        std::map<Types, float> classConf;
        std::pair<int, int> point1;
        std::pair<int, int> point2;

    public:
        // Конструктор
        BoundingBox(const std::map<Types, float>& classConf,
            const std::pair<int, int>& point1,
            const std::pair<int, int>& point2);

        // Методы доступа
        const std::map<Types, float>& getClassConf() const;
        const std::pair<int, int>& getPoint1() const;
        const std::pair<int, int>& getPoint2() const;

        // Оператор сравнения
        bool operator==(const BoundingBox& other) const;
    };

    // Хеш-функция для BoundingBox
    struct BoundingBoxHash {
        size_t operator()(const BoundingBox& bb) const;
    };

}

#endif


