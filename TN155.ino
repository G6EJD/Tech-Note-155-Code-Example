void setup() {
  Serial.begin(115200);
}

float voltage;

void loop() {
  voltage = getBatteryVoltage() / 1000;
  Serial.println(voltage);

  voltage = getBatteryVoltage() / 1000.0;
  Serial.println(voltage);

  voltage = (float)getBatteryVoltage() / 1000;
  Serial.println(voltage);

  delay(10000);
}

int getBatteryVoltage(){
  return 3888; // milliVolts
}
