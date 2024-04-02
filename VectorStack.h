#pragma once
#include <vector>
#include "StackImplementation.h"

class VectorStack : public IStackImplementation {
public:
    void push(const ValueType& value) override;
    void pop() override;
    const ValueType& top() const override;
    bool isEmpty() const override;
    size_t size() const override;

private:
    std::vector<ValueType> data;
};