#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Temperature and Humidity Monitoring using DHT11
 * @author YOUR_NAME
 * @date YYYY-MM-DD
 *
 * @details
 * This program reads environmental data from the DHT11 sensor
 * and displays temperature and humidity values on Serial Monitor.
 * Students must complete the TODO sections.
 */

#include <DHT.h>
#define DHTPIN 2        // Data pin connected to pin 2
#define DHTTYPE DHT11   // Sensor type

// TODO 1:
// Define the DHT data pin (Use digital pin 2)

// TODO 2:
// Define the DHT sensor type (DHT11)

// TODO 3:
// Create a DHT object using the defined pin and sensor type

DHT dht(DHTPIN, DHTTYPE);

void setup() {
    Serial.begin(9600);
    dht.begin();

void loop() {

    float humidity = dht.readHumidity();
    float temperature = dht.readTemperature();

    Serial.print("Humidity: ");
    Serial.print(humidity);
}

    // TODO 7:
    // Read humidity value from sensor

    // TODO 8:
    // Read temperature value from sensor

    // TODO 9:
    // Check if either reading failed using isnan()
    // If failed, print error message and return

    // TODO 10:
    // Print formatted temperature and humidity values

    // TODO 11:
    // Add a 2-second delay before next reading
}
