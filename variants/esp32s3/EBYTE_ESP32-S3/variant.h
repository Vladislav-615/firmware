// Supporting information: https://github.com

// Originally developed for E22-900M30S with ESP32-S3-WROOM-1-N4
// NOTE: Uses ESP32-S3-WROOM-1-N4.json in boards folder (via platformio.ini board field), assumes 4 MB (quad SPI) flash, no PSRAM

#ifndef EBIT_E22_S3_H
#define EBIT_E22_S3_H

//////////////////////////////////////////////////////////////////////////////////
//                                                                              //
//   Have custom connections or functionality? Configure them in this section   //
//                                                                              //
//////////////////////////////////////////////////////////////////////////////////

#define SX126X_CS 10    // EBYTE module's NSS pin
#define LORA_SCK 7     // EBYTE module's SCK pin
#define LORA_MOSI 9   // EBYTE module's MOSI pin
#define LORA_MISO 8    // EBYTE module's MISO pin
#define SX126X_RESET 4  // EBYTE module's NRST pin
#define SX126X_BUSY 21  // EBYTE module's BUSY pin
#define SX126X_DIO1 14  // EBYTE module's DIO1 pin

// Option 1: АКТИВИРОВАНО (Защита от глухоты через DIO2)
#define SX126X_DIO2_AS_RF_SWITCH
#define SX126X_TXEN RADIOLIB_NC
#define SX126X_RXEN RADIOLIB_NC

// Option 2: ОТКЛЮЧЕНО
/*
#define SX126X_DIO2_AS_RF_SWITCH
#define SX126X_TXEN RADIOLIB_NC
#define SX126X_RXEN 5
*/

// Status
#define LED_POWER 47
#define LED_STATE_ON 1 

// Buttons
#define BUTTON_PIN 0 

// I2C для дисплея (Перенесено, чтобы освободить GPIO 8)
#define I2C_SCL 2
#define I2C_SDA 1

// Обязательная системная информация для компилятора Meshtastic
#define LORA_DIO2_AS_RF_SWITCH
#define LORA_RESET SX126X_RESET
#define LORA_BUSY SX126X_BUSY

#endif // EBIT_E22_S3_H