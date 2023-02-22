#pragma once
#include "common.h"

namespace nxwz
{

class audio
{
public:
    audio() = default;
    audio(audio const&) = default;

    void const* data() const { return 0; }
    uint32_t length() const { return 0; }
    size_t id() const { return 0; }
};
}