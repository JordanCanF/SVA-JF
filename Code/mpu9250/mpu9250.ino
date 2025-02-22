#include <MPU9250.h>
#include <Wire.h>

MPU9250 IMU (Wire, 0x68);  

void setup() {
    Serial.begin(9600);    
    IMU.begin();
}

void loop() {
    IMU.readSensor();  

    // Accelerometer data code
    Serial.print("Accelerometer X axis: ");
    Serial.print(IMU.getAccelX_mss(), 3);
    Serial.print("  Accelerometer Y axis: ");
    Serial.print(IMU.getAccelY_mss(), 3);
    Serial.print("  Accelerometer Z axis: ");
    Serial.println(IMU.getAccelZ_mss(), 3);

    // Gyroscope data code
    Serial.print("Gyroscope X axis(radians): ");
    Serial.print(IMU.getGyroX_rads(), 3);
    Serial.print("  Gyroscope Y axis(radians): ");
    Serial.print(IMU.getGyroY_rads(), 3);
    Serial.print("  Gyroscope Z axis(radians): ");
    Serial.println(IMU.getGyroZ_rads(), 3);

    // Magnetometer data code
    Serial.print("Magnetometer X axis(MicroTesla): ");
    Serial.print(IMU.getMagX_uT(), 3);
    Serial.print("  Magnetometer Y axis(MicroTesla): ");
    Serial.print(IMU.getMagY_uT(), 3);
    Serial.print("  Magnetometer Z axis(MicroTesla): ");
    Serial.println(IMU.getMagZ_uT(), 3);

    // Temperature reading
    Serial.print("Temperature: ");
    Serial.println(IMU.getTemperature_C(), 2);

    Serial.println("*************** Next buffer data ***************");
    Serial.println(" ");
    Serial.println(" ");
    Serial.println(" ");
    Serial.println(" ");
    
    delay(2000);
}