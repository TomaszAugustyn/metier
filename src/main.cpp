// Copyright (c) 2019-2020 The Open-Transactions developers
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#include "app.hpp"

int main(int argc, char* argv[])
{
    const auto output = metier::App::Get(argc, argv)->exec();
    metier::App::Cleanup();

    return output;
}
