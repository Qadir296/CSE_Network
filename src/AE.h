#ifndef AE_H_
#define AE_H_

#include <stdio.h>
#include <string.h>
#include <omnetpp.h>
#include "AEMessage_m.h"
#include "utils.h"

using namespace omnetpp;
//using namespace std;

class AE : public cSimpleModule  // one of the module type in omnet
{
  protected:
    // by default in omnet methods
      virtual void initialize() override;
      virtual void handleMessage(cMessage *msg) override;
    // application specific
      void sendAEMessage(int flag);

  private:
      int URI;
      int data;
      int maxHop;
      std::string feature_type;
      std::vector<std::string> feature_types {"waterValve","thermometer","airStation","ATM","smartLock"};
};
Define_Module(AE);

#endif /* AE_H_ */
