#include "brake.h"

void brake_init(struct brake_s * brake, struct brake_config_s * config)
{
    brake->sample = 0;
    brake->config = config;
}

void brake_ts(struct brake_s * brake)
{
    brake->sample = brake->config->brake_sample_get();
}

uint8_t brake_pressure_get(struct brake_s * brake)
{

}

bool brake_light_get(struct brake_s * brake)
{

}

int brake_light_set(struct brake_s * brake, bool on)
{

}
