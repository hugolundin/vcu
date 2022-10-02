#pragma once

#include <stdint.h>

struct brake_s {
    uint8_t value;
};

void brake_init(struct brake_s * brake);
