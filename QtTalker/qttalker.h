#ifndef QTTALKER_H
#define QTTALKER_H

#define TX_PKT_SIZE 2
#define RX_PKT_SIZE 3

#include <Arduino.h>

class QtTalker
{
private:

    unsigned long connSpeed;

    float inPkt[RX_PKT_SIZE];

public:

    QtTalker(unsigned long);

    ~QtTalker();
    
    void Connect();

    void SendDataPacketToQt(float *data);

    bool NewDataAvailable();
    
    void GetIncomingData(float *inData);


};

#endif // QTTALKER_H
