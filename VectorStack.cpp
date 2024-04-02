#include "VectorStack.h"

void VectorStack::push(const ValueType& value) {
    data.push_back(value);
}

void VectorStack::pop() {
    if (!isEmpty()) {
        data.pop_back();
    }
}

const ValueType& VectorStack::top() const {
    return data.back();
}

bool VectorStack::isEmpty() const {
    return data.empty();
}

size_t VectorStack::size() const {
    return data.size();
}