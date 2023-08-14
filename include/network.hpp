// network.hpp - Part of ESP32 Ruuvitag Collector
// Hannu Pirila 2019
#ifndef network_hpp
#define network_hpp

#include <Arduino.h>
#include <WiFi.h>
#include "config.hpp"
#include "Influx.hpp"
#include "PubSubClient.h"
#include <sstream>

namespace network {
    namespace wifi{
        void begin();
    }
    namespace ntp{
        void update();
    }
    namespace influx{
        void begin();
        bool write(std::string dataIn);
    }
    namespace mqtt{
        void begin();
        void publish(std::string topic,std::string payload);
        void publishDiscovery(std::string mac);
    }
}

#endif
