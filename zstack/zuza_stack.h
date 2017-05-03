#pragma once

namespace zuza {

    class stack {
    public:
        stack();

        unsigned size() const;
        bool empty() const;

        void push_back(int element);
        int pop_back();
    };

}
