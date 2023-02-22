#pragma once
#include "common.h"

namespace nxwz
{

class bitmap
{
public:
    bitmap() = default;
    bitmap(bitmap const&) = default;

    void const* data() const { return 0; }
    uint16_t width() const { return 0; }
    uint16_t height() const { return 0; }
    size_t id() const { return 0; }
};
}