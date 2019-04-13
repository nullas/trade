package(default_visibility = ["//visibility:public"])

cc_import(
    name = "trader_api",
    hdrs = ["trade_api_linux_64/thosttraderapi.h"],
    shared_library = "trade_api_linux_64/thosttraderapi.so",
)

cc_import(
    name = "md_user_api",
    hdrs = [
        "trade_api_linux_64/ThostFtdcMdApi.h",
        "trade_api_linux_64/ThostFtdcUserApiDataType.h",
        "trade_api_linux_64/ThostFtdcUserApiStruct.h",
    ],
    shared_library = "trade_api_linux_64/thostmduserapi.so",
)
