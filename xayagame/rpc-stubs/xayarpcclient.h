/**
 * This file is generated by jsonrpcstub, DO NOT CHANGE IT MANUALLY!
 */

#ifndef JSONRPC_CPP_STUB_XAYARPCCLIENT_H_
#define JSONRPC_CPP_STUB_XAYARPCCLIENT_H_

#include <jsonrpccpp/client.h>

class XayaRpcClient : public jsonrpc::Client
{
    public:
        XayaRpcClient(jsonrpc::IClientConnector &conn, jsonrpc::clientVersion_t type = jsonrpc::JSONRPC_CLIENT_V2) : jsonrpc::Client(conn, type) {}

        Json::Value getzmqnotifications() throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p = Json::nullValue;
            Json::Value result = this->CallMethod("getzmqnotifications",p);
            if (result.isArray())
                return result;
            else
                throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());
        }
        void trackedgames(const std::string& command, const std::string& gameid) throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p["command"] = command;
            p["gameid"] = gameid;
            this->CallNotification("trackedgames",p);
        }
        Json::Value getblockchaininfo() throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p = Json::nullValue;
            Json::Value result = this->CallMethod("getblockchaininfo",p);
            if (result.isObject())
                return result;
            else
                throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());
        }
        std::string getblockhash(int height) throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p["height"] = height;
            Json::Value result = this->CallMethod("getblockhash",p);
            if (result.isString())
                return result.asString();
            else
                throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());
        }
        Json::Value game_sendupdates(const std::string& fromblock, const std::string& gameid) throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p["fromblock"] = fromblock;
            p["gameid"] = gameid;
            Json::Value result = this->CallMethod("game_sendupdates",p);
            if (result.isObject())
                return result;
            else
                throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());
        }
};

#endif //JSONRPC_CPP_STUB_XAYARPCCLIENT_H_