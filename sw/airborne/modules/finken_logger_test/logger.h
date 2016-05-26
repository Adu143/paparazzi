#pragma once

#include "mcu_periph/link_device.h"
#include "subsystems/datalink/transport.h"
#include "subsystems/datalink/telemetry.h"

extern void finken_evaluate_new_message_init(void);
extern void send_finken_evaluate_new_message_periodic(struct transport_tx *trans, struct link_device* link);
