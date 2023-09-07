#include <Ethernet.h> 
#include <DHT.h>      

// Replace with your network configuration
byte mac[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED };
IPAddress ip(192, 168, 1, 100);
EthernetServer server(80);

#define DHTPIN 2         
#define DHTTYPE DHT22    
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Ethernet.begin(mac, ip);   
  server.begin();             
  dht.begin();
}

void loop() {
  EthernetClient client = server.available(); 

  if (client) {
    String response = "HTTP/1.1 200 OK\r\nContent-Type: text/html\r\n\r\n";
    response += "<html><body>";
    response += "<h1>Arduino Sensor Data</h1>";

    float humidity = dht.readHumidity();
    float temperature = dht.readTemperature();

    response += "<p>Humidity: " + String(humidity) + "%</p>";
    response += "<p>Temperature: " + String(temperature) + "°C</p>";

    response += "</body></html>";

    client.print(response);
    client.stop();        
  }
}
