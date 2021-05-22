/*************************************************************
* File: ucatalog.h
* Author: Pedro Perez
* Description: This file contains the definition of UserCatalog 
*							 class.
*
* Copyright (c) 2021 by Tecnologico de Monterrey.
* All Rights Reserved. May be reproduced for any non-commercial
* purpose.
*************************************************************/
#ifndef UCATALOG_H
#define UCATALOG_H

#include <iostream>
#include <fstream> // files
#include <sstream>
#include "types.h"
#include "user.h"

const int MAX = 100;

class UserCatalog {
private: 
	User** users;
	uint current, max;

	long indexOf(uint) const;

public:
	UserCatalog();
	UserCatalog(unint);
	UserCatalog(const UserCatalog&);

	~UserCatalog();

	User* getUserById(uint) const;
	void addUser(User*);
	bool removeUserById(uint); 
	bool changeUser(User*);

	void load(std::string);
	void save(std::string) const;
};

#endif
