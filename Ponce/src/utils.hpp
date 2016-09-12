#pragma once
#include <string>
//Triton
#include <api.hpp>

#include "globals.hpp"

void start_tainting_or_symbolic_analysis();
triton::arch::Register *str_to_register(std::string register_name);
void taint_all_memory(ea_t address, ea_t size);
void symbolize_all_memory(ea_t address, ea_t size, char* comment);
int ask_for_a_snapshot();
bool already_exits_a_snapshot();
ea_t find_function(char *function_name);
ea_t get_args(int argument_number, bool skip_ret);
ea_t get_args_pointer(int argument_number, bool skip_ret);
char read_char_from_ida(ea_t address);
ea_t read_uint_from_ida(ea_t address);
void rename_tainted_function(ea_t address);
void add_symbolic_expressions(triton::arch::Instruction* tritonInst, ea_t address);
std::string notification_code_to_string(int notification_code);
bool load_options(struct cmdOptionStruct *cmdOptions);
bool save_options(struct cmdOptionStruct *cmdOptions);
Input* solve_formula(ea_t pc, uint bound);
void negate_flag_condition(triton::arch::Instruction *triton_instruction);
bool ask_for_execute_native();
qstring get_callee(ea_t address);
void enableTrigger(ea_t main_address);