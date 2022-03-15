//
//// DUMMY IMPLEMENTATION
//#include <unordered_map>
//#include <unordered_set>
//#include <string>
//#include <iostream>
//
//template <typename ValueType>
//class RadixTree {
//public:
//    RadixTree() {
//        m_map = new std::unordered_map<std::string, ValueType>;
//    }
//    ~RadixTree() {
//        delete m_map;
//    }
//    void insert(std::string key, const ValueType& value);
//    ValueType* search(std::string key) const;
//private:
//     std::unordered_map<std::string, ValueType>* m_map;
//};
//
//
//
//template <typename ValueType>
//void RadixTree<ValueType>::insert(std::string key, const ValueType& value)  {
//
//    // pass in a COPY to the value in map
//    ValueType copy = value;
//    (*m_map)[key] = copy;
//}
//
//// MAKE IT CONST WHEN MODIFYING
//template <typename ValueType>
//ValueType* RadixTree<ValueType>::search(std::string key) const {
////    typename std::unordered_map<std::string, ValueType>::iterator p;
//    if (m_map->find(key) == m_map->end()) {
//        return nullptr;
//   }
     else {
        return &((m_map->find(key))->second);
      }

}
