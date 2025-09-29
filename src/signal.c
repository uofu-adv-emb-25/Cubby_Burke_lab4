#include "signaling.h"

void signal_handle_calculation(SemaphoreHandle_t request,
                               SemaphoreHandle_t response,
                               struct signal_data *data) {
    // Lock request take
    xSemaphoreTake(request, portMAX_DELAY);
    // Perform calculation
    data->output = data->input + 5;
    // Unlock response give
    xSemaphoreGive(response);
                               }

BaseType_t signal_request_calculate(SemaphoreHandle_t request,
                                    SemaphoreHandle_t response,
                                    struct signal_data *data) {
    // Unlock, request give
    // Call signal_handle_calculation
    // Wait for response give
    // lock respone take
                                    }