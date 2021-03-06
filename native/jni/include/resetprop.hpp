#pragma once

#include <string>
#include <functional>

bool prop_exist(const char *name);
int setprop(const char *name, const char *value, bool trigger = true);
std::string getprop(const char *name, bool persist = false);
void getprops(void (*callback)(const char *, const char *, void *),
		void *cookie = nullptr, bool persist = false);
int delprop(const char *name, bool persist = false);
void load_prop_file(const char *filename, bool trigger = true);
