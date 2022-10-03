#include "brake.h"

static uint16_t brake_sample_get()
{
    return 0;
}

int main(int argc, char const *argv[])
{
    struct brake_s brake = {0};

    brake_init(&brake, &(struct brake_config_s){
        .brake_sample_get = brake_sample_get
    });

    while(true) {
        brake_ts(&brake);
    }

    return 0;
}
