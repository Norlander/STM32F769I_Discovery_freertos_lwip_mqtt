/*
 * app_mqtt.h
 *
 *  Created on: Jan 8, 2018
 *      Author: mattias
 */

#include "mqtt.h"

#ifndef APP_MQTT_H_
#define APP_MQTT_H_

mqtt_client_t static_client;

static void mqtt_incoming_publish_cb(void *arg, const char *topic, u32_t tot_len);
static void mqtt_pub_request_cb(void *arg, err_t result);
static void my_mqtt_publish(mqtt_client_t *client, void *arg);
static void mqtt_incoming_data_cb(void *arg, const u8_t *data, u16_t len, u8_t flags);
static void mqtt_sub_request_cb(void *arg, err_t result);
void mqtt_do_connect(mqtt_client_t *mqtt_client);
void MQTTInitThread(void const * argument);

#endif /* APP_MQTT_H_ */
