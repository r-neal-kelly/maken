/*
    Copyright 2021 r-neal-kelly
*/

#pragma once

#include "nkr/string_t.h"

#include "log_t.h"

namespace maken {

    /*
        project_t is a uniquely identified set of ticket_ts and associated info
    */

    class project_t
    {
    public:
        nkr::string_t<> name;
        log_t           log;
    };

}
