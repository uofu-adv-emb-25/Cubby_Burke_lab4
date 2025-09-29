#include "signaling.h"

void signal_handle_calculation(SemaphoreHandle_t request,
                               SemaphoreHandle_t response,
                               struct signal_data *data) {
    // Lock request take
    // Perform calculation
    // Unlock request give?
                               }

BaseType_t signal_request_calculate(SemaphoreHandle_t request,
                                    SemaphoreHandle_t response,
                                    struct signal_data *data) {
    // Lock request take
    // Call signal_handle_calculation
    // Wait for response give
    // Unlock request give
                                    }