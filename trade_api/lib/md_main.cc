#include <iostream>
#include <memory>

#include "gflags/gflags.h"
#include "glog/logging.h"
#include "glog/stl_logging.h"
#include "trade_api/lib/md.h"

char kMdFrontAddr[] = "tcp://180.168.146.187:10010";

void Releaser(CThostFtdcMdApi* md_api) { md_api->Release(); }

int main(int argc, char* argv[]) {
  // Initialize Google's logging library.
  google::InitGoogleLogging(argv[0]);

  // Optional: parse command line flags
  gflags::ParseCommandLineFlags(&argc, &argv, true);

  LOG(INFO) << "Hello, world!";

  // std::unique_ptr<trade::Md> md(new trade::Md);
  std::unique_ptr<trade::Md> md = std::make_unique<trade::Md>();
  CThostFtdcMdApi* md_api = CThostFtdcMdApi::CreateFtdcMdApi();
  md_api->RegisterSpi(md.get());
  md_api->RegisterFront(kMdFrontAddr);
  md_api->Init();
  CThostFtdcReqUserLoginField login_req;
  const TThostFtdcBrokerIDType kBrokerId = "9999";
  TThostFtdcInvestorIDType investor_id;
  TThostFtdcPasswordType investor_password;
  std::cout << "User ID: ";
  std::cin >> investor_id;
  std::cout << "Password: ";
  std::cin >> investor_password;
  memset(&login_req, 0, sizeof(login_req));
  strcpy(login_req.UserID, investor_id);
  strcpy(login_req.Password, investor_password);
  strcpy(login_req.BrokerID, kBrokerId);
  const int req_id = 0;
  md_api->ReqUserLogin(&login_req, req_id);
  sleep(10);
  md_api->Release();

  return 0;
}
