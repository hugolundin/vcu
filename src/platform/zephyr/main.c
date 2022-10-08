#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/drivers/can.h>

#include <zephyr/logging/log.h>
LOG_MODULE_REGISTER(main, CONFIG_APP_LOG_LEVEL);

const struct device * can1 = DEVICE_DT_GET(DT_NODELABEL(can1));

int main(void)
{
    if (!device_is_ready(can1)) {
        return;
    }

    can_start(can1);

    return 0;
}
