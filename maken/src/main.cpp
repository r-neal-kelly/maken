/*
    Copyright 2021 r-neal-kelly
*/

#pragma once

#include "nkr/string_t.h"

#include "main.h"

int main(int argument_count, char* arguments[])
{
    for (size_t idx = 0, end = argument_count; idx < end; idx += 1) {
        nkr::some_t<char*> argument = arguments[idx];
        printf("%s\n", argument());
        printf("%zu", nkr::string_t<>::charcoder_t::value_size());
    }
}
