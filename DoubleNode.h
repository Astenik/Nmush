#pragma once

struct DoubleNode
{
  DoubleNode(char val = 0, DoubleNode* p = nullptr, DoubleNode* n = nullptr)
    : value(val)
    , prev(p)
    , next(n)
    {}
  ~DoubleNode() {}
  
  char value;
  DoubleNode* prev;
  DoubleNode* next;
};
