#pragma once

#include <stdint.h>
#include <stdbool.h>

struct brake_config_s;

struct brake_s {
    uint16_t sample;
    struct brake_config_s * config;
};

struct brake_config_s {
    uint16_t (*brake_sample_get)();
};

void brake_init(
    struct brake_s * brake,
    struct brake_config_s * config
);

void brake_ts(
    struct brake_s * brake
);

uint8_t brake_pressure_get(
    struct brake_s * brake
);

bool brake_light_get(
    struct brake_s * brake
);

int brake_light_set(
    struct brake_s * brake,
    bool on
);


