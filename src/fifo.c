#include "fifo.h"

void fifo_worker_handler(QueueHandle_t requests, QueueHandle_t results, int id) {
    
    while(1) {
        struct request_msg msg;
        if(xQueueReceive(requests, &msg, portMAX_DELAY) == pdTRUE){ // Receive from requests queue
            msg.output = msg.input + 5;
            msg.handled_by = id;
            vTaskDelay(30);
            xQueueSendToBack(results, &msg, portMAX_DELAY); // Send to results queue
        }
    }
}