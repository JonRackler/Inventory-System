// item.h -- class to handle items in inventory

#ifndef ITEM_H_
#define ITEM_H_

#include <string>

class Item
{
private:
   string item_number;
   int count;
public:
   Item (const string & name = "none");
};
