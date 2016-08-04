#include "instructions/raise_break.hpp"

intptr_t rubinius::int_raise_break(STATE, CallFrame* call_frame, intptr_t const opcodes[]) {
  if(instruction_raise_break(state, call_frame)) {
    call_frame->next_ip();
  } else {
    call_frame->exception_ip();
  }

  return ((Instruction)opcodes[call_frame->ip()])(state, call_frame, opcodes);
}
