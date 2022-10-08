#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/drivers/can.h>

#include <zephyr/logging/log.h>
LOG_MODULE_REGISTER(main, CONFIG_APP_LOG_LEVEL);

CAN_MSGQ_DEFINE(can_rx_queue, 2);
const struct device * can1 = DEVICE_DT_GET(DT_NODELABEL(can1));

static void apps_task(void *arg1, void *arg2, void *arg3)
{

}

static void brake_task(void *arg1, void *arg2, void *arg3)
{

}

static void can_tx_task(void *arg1, void *arg2, void *arg3)
{

}

static void cooling_task(void *arg1, void *arg2, void *arg3)
{

}

static void inverter_task(void *arg1, void *arg2, void *arg3)
{

}

static void speaker_task(void *arg1, void *arg2, void *arg3)
{

}

int main(void)
{
    can_start(can1);
    struct can_frame frame;

    while (1) {
        k_msgq_get(&can_rx_queue, &frame, K_FOREVER);
    }
}
