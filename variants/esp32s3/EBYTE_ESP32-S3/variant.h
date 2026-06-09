// Supporting information: https://github.com
// Configured for EBYTE E22-900V30S and ESP32-S3 Super Mini

#ifndef EBIT_E22_S3_H
#define EBIT_E22_S3_H

#define SX126X_CS 10    // EBYTE module's NSS pin // FIXME: rename to SX126X_SS
#define LORA_SCK 7     // EBYTE module's SCK pin
#define LORA_MOSI 9   // EBYTE module's MOSI pin
#define LORA_MISO 8    // EBYTE module's MISO pin
#define SX126X_RESET 4  // EBYTE module's NRST pin
#define SX126X_BUSY 21  // EBYTE module's BUSY pin
#define SX126X_DIO1 14  // EBYTE module's DIO1 pin


#define SX126X_DIO2_AS_RF_SWITCH
#define SX126X_TXEN RADIOLIB_NC
#define SX126X_RXEN RADIOLIB_NC

// Системные пины во избежание конфликтов
#define BUTTON_PIN    0    // Кнопка Boot
#define LED_POWER     47   // Светодиод перенесен на свободный пин
#define LED_STATE_ON  1 


// Переназначаем I2C шину дисплея, так как GPIO 8 занят под LORA_MISO
#define I2C_SCL       2    // Боковая гребенка
#define I2C_SDA       1    // Боковая гребенка

#endif // EBIT_E22_S3_H






