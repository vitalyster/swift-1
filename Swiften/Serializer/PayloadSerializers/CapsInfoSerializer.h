/*
 * Copyright (c) 2010-2016 Isode Limited.
 * All rights reserved.
 * See the COPYING file for more information.
 */

#pragma once

#include <Swiften/Base/API.h>
#include <Swiften/Elements/CapsInfo.h>
#include <Swiften/Serializer/GenericPayloadSerializer.h>

namespace Swift {
    class SWIFTEN_API CapsInfoSerializer : public GenericPayloadSerializer<CapsInfo> {
        public:
            CapsInfoSerializer();

            virtual std::string serializePayload(std::shared_ptr<CapsInfo>)  const;
    };
}
