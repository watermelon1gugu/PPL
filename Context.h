//
// Created by archchen on 2020/1/25.
//

#ifndef SCURMVISION_BASE_CONTEXT_H
#define SCURMVISION_BASE_CONTEXT_H

#include <unordered_map>

class Context {
public:
    Context()= default;
    void free();
    bool isContinue();

    void breakOff();

private:
    bool _isContinue = true;
};


#endif //SCURMVISION_BASE_CONTEXT_H
