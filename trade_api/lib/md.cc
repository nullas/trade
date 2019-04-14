#include "trade_api/lib/md.h"

#include "glog/logging.h"
#include "glog/stl_logging.h"

namespace trade {

void Md::OnFrontConnected() { LOG(INFO) << "Connected to front."; }

}  // namespace trade
