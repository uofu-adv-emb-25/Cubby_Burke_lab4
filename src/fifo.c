#include "fifo.h"

void fifo_worker_handler(QueueHandle_t requests, QueueHandle_t results, int id) {
    struct request_msg msg;
    while(1) {
        if(xQueueReceive(requests, &msg, portMAX_DELAY) == pdTRUE){ // Receive from requests queue
            msg.output = msg.input + 5;
            msg.handled_by = id;
            vTaskDelay(30);
            xQueueSendToBack(requests, &msg, portMAX_DELAY); // Send to results queue
        }
    }
}