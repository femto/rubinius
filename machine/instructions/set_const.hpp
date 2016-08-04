#include "interpreter/instructions.hpp"

inline void rubinius::instruction_set_const(STATE, CallFrame* call_frame, intptr_t literal) {
  Symbol* sym = reinterpret_cast<Symbol*>(literal);
  call_frame->lexical_scope()->module()->set_const(state, sym, stack_top());
}
