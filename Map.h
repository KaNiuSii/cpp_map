#ifndef MAP_H
#define MAP_H

#include <iostream>
#include <vector>
#include <utility>

template<typename Key, typename Value>
class Map {
private:
    std::vector<std::pair<Key, Value>> data;

public:
    void add(const Key& key, const Value& value) {
        data.push_back(std::make_pair(key, value));
    }

    Value* find(const Key& key) {
        for (auto& item : data) {
            if (item.first == key) {
                return &item.second;
            }
        }
        return nullptr;
    }

    friend std::ostream& operator<<(std::ostream& os, const Map& map) {
        for (const auto& item : map.data) {
            os << "Key -> " << item.first << " | Value -> " << item.second << std::endl;
        }
        return os;
    }
};

#endif // MAP_H
