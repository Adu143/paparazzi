#include "modules/finken_logger_test/logger.h"

void finken_evaluate_new_message_init(void) {
  register_periodic_telemetry(DefaultPeriodic, PPRZ_MSG_ID_FINKEN_SYSTEM_SEQUENCE_NUMBER, send_finken_evaluate_new_message_periodic);
}

void send_finken_evaluate_new_message_periodic(struct transport_tx *trans, struct link_device* link)
{
  static uint8_t seq=0;
  DOWNLINK_SEND_FINKEN_SYSTEM_SEQUENCE_NUMBER(
    DefaultChannel,
    DefaultDevice,
    &seq
  );
  seq++;
}
