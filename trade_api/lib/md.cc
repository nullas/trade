#include "trade_api/lib/md.h"

#include "glog/logging.h"
#include "glog/stl_logging.h"

namespace trade {

Md::~Md() { LOG(INFO) << "Destructing Md."; }

void Md::OnFrontConnected() { LOG(INFO) << "Connected to front."; }

void Md::OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin,
                        CThostFtdcRspInfoField *pRspInfo, int nRequestID,
                        bool bIsLast) {
  if (!pRspInfo || pRspInfo->ErrorID != 0) {
    LOG(INFO) << "Error id is: " << pRspInfo->ErrorID;
    LOG(INFO) << "Error message is: " << pRspInfo->ErrorMsg;
    LOG(INFO) << "Login time: " << pRspUserLogin->LoginTime;
    LOG(INFO) << "Login user: " << pRspUserLogin->UserID;
    LOG(INFO) << "Login session: " << pRspUserLogin->SessionID;
  } else {
    LOG(INFO) << "Error id is: " << pRspInfo->ErrorID;
    LOG(INFO) << "Error message is: " << pRspInfo->ErrorMsg;
    LOG(INFO) << "Login time: " << pRspUserLogin->LoginTime;
    LOG(INFO) << "Login user: " << pRspUserLogin->UserID;
    LOG(INFO) << "Login session: " << pRspUserLogin->SessionID;
  }
}

}  // namespace trade
