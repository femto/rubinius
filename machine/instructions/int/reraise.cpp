#include "instructions/reraise.hpp"

intptr_t rubinius::int_reraise(STATE, CallFrame* call_frame, intptr_t const opcodes[]) {
  instruction_reraise(state, call_frame);
  call_frame->exception_ip();

  return ((Instruction)opcodes[call_frame->ip()])(state, call_frame, opcodes);
}
