#pragma once

#include <iostream>
#include <string.h>
#include <vector>
#include "user.hpp"
#include "gerenciar_posts.hpp"

class Monitor : public User, public GerenciarPosts {
    public:
        Monitor(std::string id_user, std::string email, std::string name, std::string type);

        std::string Type();

    private:
        std::string _type;
};