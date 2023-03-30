/*
 * Реализуйте шаблонную версию класса Array.
 * Список всех операций, которые должен поддерживать класс Array:
 * - Конструктор класса, который создает Array размера size,
 *   заполненный значениями value типа T.
 *   Считайте что у типа T есть конструктор, который можно вызвать 
 *   без параметров, либо он ему не нужен.
 * - Конструктор копирования, который создает копию параметра.
 *   Считайте, что для типа T определен оператор присваивания.
 * - Деструктор класса
 * - Оператор присваивания.
 * - Метод size(), который возвращает размер массива.
 * - Две версии оператора доступа по индексу.
*/

#include <iostream>
#include <cstddef>

using namespace std;

template <typename T>
class Array {
public:
    explicit Array(size_t size = 0, const T& value = T()) {
        data_ = new T[size];
        size_ = size;
        for (size_t i = 0; i < size; i++)
            data_[i] = value;
    }

    Array(const Array& a) : size_ (a.size_), data_ (new T[a.size_]) {
        for (size_t i = 0; i < a.size_; i++)
            data_[i] = a[i];
     }

    ~Array() {
        delete[] data_;
     }

    Array& operator=(const Array& a) {
        if (this != &a) {
            delete[] data_;
            size_ = a.size_;
            data_ = new T[size_];
            for (size_t i = 0; i < size_; i++)
                data_[i] = a.data_[i];
        }
        return *this;
    }

    size_t size() const {
        return size_;
    }

    T& operator[](size_t i) {
        return data_[i];
    }
    
    const T& operator[](size_t i) const {
        return data_[i];
    }

private:
    T *data_;
    size_t size_;
};