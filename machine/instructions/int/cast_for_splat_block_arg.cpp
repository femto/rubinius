#include "instructions/cast_for_splat_block_arg.hpp"

intptr_t rubinius::int_cast_for_splat_block_arg(STATE, CallFrame* call_frame, intptr_t const opcodes[]) {
  if(instruction_cast_for_splat_block_arg(state, call_frame)) {
    call_frame->next_ip();
  } else {
    call_frame->exception_ip();
  }

  return ((Instruction)opcodes[call_frame->ip()])(state, call_frame, opcodes);
}
