#ifndef TRADE_API_LIB_MD_H_
#define TRADE_API_LIB_MD_H_

#include "trade_api/trade_api_linux_64/ThostFtdcMdApi.h"

namespace trade {

class Md : public CThostFtdcMdSpi {
 public:
  void OnFrontConnected() override;
};

}  // namespace trade

#endif  // TRADE_API_LIB_MD_H_
