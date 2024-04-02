#include "ListStack.h"

void ListStack::push(const ValueType& value) {
    data.push_back(value);
}

void ListStack::pop() {
    if (!isEmpty()) {
        data.pop_back();
    }
}

const ValueType& ListStack::top() const {
    return data.back();
}

bool ListStack::isEmpty() const {
    return data.empty();
}

size_t ListStack::size() const {
    return data.size();
}