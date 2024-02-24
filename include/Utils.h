#pragma once
#include <memory>

class Run{
public:
    bool running;
};


inline std::shared_ptr<Run> RUN = std::make_shared<Run>();