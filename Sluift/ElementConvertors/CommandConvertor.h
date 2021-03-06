/*
 * Copyright (c) 2013-2016 Isode Limited.
 * All rights reserved.
 * See the COPYING file for more information.
 */

#pragma once

#include <Swiften/Base/Override.h>
#include <Swiften/Elements/Command.h>

#include <Sluift/GenericLuaElementConvertor.h>

namespace Swift {
    class LuaElementConvertors;

    class CommandConvertor : public GenericLuaElementConvertor<Command> {
        public:
            CommandConvertor(LuaElementConvertors* convertors);
            virtual ~CommandConvertor();

            virtual std::shared_ptr<Command> doConvertFromLua(lua_State*) SWIFTEN_OVERRIDE;
            virtual void doConvertToLua(lua_State*, std::shared_ptr<Command>) SWIFTEN_OVERRIDE;

        private:
            LuaElementConvertors* convertors;
    };
}
