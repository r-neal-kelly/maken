/*
    Copyright 2021 r-neal-kelly
*/

#pragma once

#include "nkr/string_static_t.h"

namespace maken {

    /*
        tag_t is a unique string_static_t that can be associated with any other type.
        any type that can carry tag_ts shall be able to quickly find them.
        not associated with any central authority.
        typically found on ticket_ts, account_ts, and project_ts.
    */

    class tag_t
    {
    public:
        nkr::string_static_t<>  name;
    };

}
