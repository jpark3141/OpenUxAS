// ===============================================================================
// Authors: AFRL/RQQA
// Organization: Air Force Research Laboratory, Aerospace Systems Directorate, Power and Control Division
// 
// Copyright (c) 2017 Government of the United State of America, as represented by
// the Secretary of the Air Force.  No copyright is claimed in the United States under
// Title 17, U.S. Code.  All Other Rights Reserved.
// ===============================================================================

#ifndef COMMUNICATIONS_ZMQ_SOCKET_INITIALIZER_H
#define COMMUNICATIONS_ZMQ_SOCKET_INITIALIZER_H

#include "ISocket.h"
#include "UxAS_Log.h"

#include "zmq.hpp"

#include <memory>

namespace uxas {
namespace communications {

// This class provides a means of creating the ZeroMq socket! 

class ZmqSocketInitializer : public ISocket<std::shared_ptr<zmq::socket_t>&, const std::string&, int32_t, bool> {
public:
    ~ZmqSocketInitializer() override = default;

    // Initialize the socket
    bool initialize(std::shared_ptr<zmq::socket_t>& socketPtr, 
        const std::string& address, int32_t type, bool isServer) override;
};

}
}

#endif