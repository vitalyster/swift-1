/*
 * Copyright (c) 2015-2016 Isode Limited.
 * All rights reserved.
 * See the COPYING file for more information.
 */

#pragma once

#include <boost/signals2.hpp>

#include <Swiften/Base/API.h>
#include <Swiften/FileTransfer/IBBSendSession.h>
#include <Swiften/FileTransfer/TransportSession.h>

namespace Swift {

class SWIFTEN_API IBBSendTransportSession : public TransportSession {
    public:
        IBBSendTransportSession(std::shared_ptr<IBBSendSession> session);
        virtual ~IBBSendTransportSession();

        virtual void start() SWIFTEN_OVERRIDE;
        virtual void stop() SWIFTEN_OVERRIDE;

    private:
        std::shared_ptr<IBBSendSession> session;
        boost::signals2::scoped_connection finishedConnection;
        boost::signals2::scoped_connection bytesSentConnection;
};

}
